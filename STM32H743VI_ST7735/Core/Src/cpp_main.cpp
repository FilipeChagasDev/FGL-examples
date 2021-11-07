#include <main.h>
#include <stm32h7xx_st7735.hpp>
#include <pencil.hpp>
//#include <buffered_pencil.hpp>
#include <math.h>

#define BACKCOLOR_R 0
#define BACKCOLOR_G 0
#define BACKCOLOR_B 0
#define BACKCOLOR Color(BACKCOLOR_R, BACKCOLOR_G, BACKCOLOR_B)

/* -- global code section -- */
extern SPI_HandleTypeDef hspi1;

STM32H7_ST7735 display(TFT_RST_GPIO_Port,
                       TFT_RST_Pin,
                       TFT_A0_GPIO_Port,
                       TFT_A0_Pin,
                       TFT_CS_GPIO_Port,
                       TFT_CS_Pin,
                       &hspi1);
/* ------------------------- */

void cpp_main()
{
	/* -- setup code section -- */
	display.init();
	display.select();
	display.drawArea(0, 0, display.getWidth()-1, display.getHeight()-2, BACKCOLOR_R, BACKCOLOR_G, BACKCOLOR_B);
	Pencil pencil(display);
	//BufferedPencil pencil(display, BACKCOLOR);
	/* ------------------------ */

	/* -- drawing section -- */
	pencil.drawRectangle(10, 10, display.getWidth()-20, display.getHeight()-20, Color(1,1,1));

	for(float theta = 0; theta < 2*3.14; theta += 0.25)
	{
		Color current_color((sinf(theta)+1)/2, (sinf(theta + 3.14/2)+1)/2, (sinf(theta + 3.14)+1)/2);
		pencil.drawLine(display.getWidth()/2, display.getHeight()/2, display.getWidth()/2+cosf(theta)*50, display.getHeight()/2+sinf(theta)*50, current_color);
	}

	pencil.drawCircle(display.getWidth()/2, display.getHeight()/2, 50, Color(1,1,1));

	while(true)
	{
		/* -- loop code section -- */
		/* ----------------------- */
	}

	/* --------------------- */
}

extern "C" void jump_to_cpp()
{
	cpp_main();
}
