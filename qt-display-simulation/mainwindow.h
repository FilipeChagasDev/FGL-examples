#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScreen>

/* --- FGL includes --- */
#include <pencil.hpp>
#include <buffered_pencil.hpp>
#include <qt_fgl_display.hpp>
/* -------------------- */

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initFGLDisplay(); //Initialize FGL display simulation
    void drawOnFGLDisplay(); //Draw on FGL display
private:
    Ui::MainWindow *ui;

    QtFGLDisplay *display; //Pointer to FGL display instance
    Pencil *pencil; //Pointer to FGL pencil instance

};
#endif // MAINWINDOW_H
