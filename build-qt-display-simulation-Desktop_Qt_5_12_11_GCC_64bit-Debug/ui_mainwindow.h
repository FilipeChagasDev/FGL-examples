/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *graphicsView;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_12;
    QPushButton *pushButton_69;
    QPushButton *pushButton_15;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_11;
    QPushButton *pushButton_68;
    QPushButton *pushButton_21;
    QPushButton *pushButton_62;
    QPushButton *pushButton_19;
    QPushButton *pushButton_10;
    QPushButton *pushButton_67;
    QPushButton *pushButton_64;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_61;
    QPushButton *pushButton_66;
    QPushButton *pushButton_65;
    QPushButton *pushButton_63;
    QPushButton *pushButton_18;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_83;
    QPushButton *pushButton_8;
    QPushButton *pushButton_82;
    QPushButton *pushButton_85;
    QPushButton *pushButton;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_84;
    QPushButton *pushButton_87;
    QPushButton *pushButton_20;
    QGridLayout *gridLayout_4;
    QToolButton *toolButton_18;
    QToolButton *toolButton_3;
    QToolButton *toolButton_5;
    QToolButton *toolButton_13;
    QToolButton *toolButton_42;
    QToolButton *toolButton_10;
    QToolButton *toolButton_23;
    QToolButton *toolButton_12;
    QToolButton *toolButton_25;
    QToolButton *toolButton_17;
    QToolButton *toolButton_53;
    QToolButton *toolButton_52;
    QToolButton *toolButton_2;
    QToolButton *toolButton_49;
    QToolButton *toolButton_21;
    QToolButton *toolButton_34;
    QToolButton *toolButton_8;
    QToolButton *toolButton_44;
    QToolButton *toolButton_50;
    QToolButton *toolButton_47;
    QToolButton *toolButton_43;
    QToolButton *toolButton_36;
    QToolButton *toolButton_9;
    QToolButton *toolButton_37;
    QToolButton *toolButton_11;
    QToolButton *toolButton_35;
    QToolButton *toolButton_24;
    QToolButton *toolButton_20;
    QToolButton *toolButton_16;
    QToolButton *toolButton_32;
    QToolButton *toolButton;
    QToolButton *toolButton_54;
    QToolButton *toolButton_55;
    QToolButton *toolButton_33;
    QToolButton *toolButton_26;
    QToolButton *toolButton_29;
    QToolButton *toolButton_30;
    QToolButton *toolButton_22;
    QToolButton *toolButton_39;
    QToolButton *toolButton_45;
    QToolButton *toolButton_27;
    QToolButton *toolButton_14;
    QToolButton *toolButton_51;
    QToolButton *toolButton_28;
    QToolButton *toolButton_31;
    QToolButton *toolButton_41;
    QToolButton *toolButton_7;
    QToolButton *toolButton_15;
    QToolButton *toolButton_56;
    QToolButton *toolButton_38;
    QToolButton *toolButton_48;
    QToolButton *toolButton_40;
    QToolButton *toolButton_4;
    QToolButton *toolButton_19;
    QToolButton *toolButton_6;
    QToolButton *toolButton_46;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(718, 395);
        MainWindow->setStyleSheet(QString::fromUtf8("/*\n"
"ElegantDark Style Sheet for QT Applications\n"
"Author: Jaime A. Quiroga P.\n"
"Company: GTRONICK\n"
"Last updated: 17/04/2018\n"
"Available at: https://github.com/GTRONICK/QSS/blob/master/ElegantDark.qss\n"
"*/\n"
"QMainWindow {\n"
"	background-color:rgb(82, 82, 82);\n"
"}\n"
"QTextEdit {\n"
"	background-color:rgb(42, 42, 42);\n"
"	color: rgb(0, 255, 0);\n"
"}\n"
"\n"
"QPushButton{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	"
                        "padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-bottom-color: rgb(115, 115, 115);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(107, 107, 107, 255), stop:1 rgba(157, 157, 157, 255));\n"
"}\n"
"QPushButton:pressed{\n"
"	bo"
                        "rder-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(62, 62, 62, 255), stop:1 rgba(22, 22, 22, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-c"
                        "olor: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(0, 0, 0);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 57, 57, 255), stop:1 rgba(77, 77, 77, 255));\n"
"}\n"
"\n"
"QToolButton{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, sto"
                        "p:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QToolButton:hover{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(110, 110, 110, 255));\n"
"	border-bottom-color: rgb(115, 115, 115);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	"
                        "padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(107, 107, 107, 255), stop:1 rgba(157, 157, 157, 255));\n"
"}\n"
"QToolButton:pressed{\n"
"	border-style: outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(62, 62, 62, 255), stop:1 rgba(22, 22, 22, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"}\n"
"QToolButton:disabled{\n"
"	border-style: "
                        "outset;\n"
"	border-width: 2px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: rgb(0, 0, 0);\n"
"	padding: 2px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 57, 57, 255), stop:1 rgba(77, 77, 77, 255));\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: rgb(255, 255, 255);\n"
"	background:rgb(100, 100, 100);\n"
"	selection-background-color: rgb(187, "
                        "187, 187);\n"
"	selection-color: rgb(60, 63, 65);\n"
"}\n"
"QLabel {\n"
"	color:rgb(255,255,255);	\n"
"}\n"
"QProgressBar {\n"
"	text-align: center;\n"
"	color: rgb(240, 240, 240);\n"
"	border-width: 1px; \n"
"	border-radius: 10px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	background-color:rgb(77,77,77);\n"
"}\n"
"QProgressBar::chunk {\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:0.7, x2:0.5, y2:0.3, stop:0 rgba(87, 97, 106, 255), stop:1 rgba(93, 103, 113, 255));\n"
"	border-radius: 5px;\n"
"}\n"
"QMenuBar {\n"
"	background:rgb(82, 82, 82);\n"
"}\n"
"QMenuBar::item {\n"
"	color:rgb(223,219,210);\n"
"	spacing: 3px;\n"
"	padding: 1px 4px;\n"
"	background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"	background:rgb(115, 115, 115);\n"
"}\n"
"QMenu::item:selected {\n"
"	color:rgb(255,255,255);\n"
"	border-width:2px;\n"
"	border-style:solid;\n"
"	padding-left:18px;\n"
"	padding-right:8px;\n"
"	padding-top:2px;\n"
"	padding-bottom:3px;\n"
"	background:qlineargra"
                        "dient(spread:pad, x1:0.5, y1:0.7, x2:0.5, y2:0.3, stop:0 rgba(87, 97, 106, 255), stop:1 rgba(93, 103, 113, 255));\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(62, 62, 62, 255));\n"
"	border-bottom-color: rgb(58, 58, 58);\n"
"	border-bottom-width: 1px;\n"
"}\n"
"QMenu::item {\n"
"	color:rgb(223,219,210);\n"
"	background-color:rgb(78,78,78);\n"
"	padding-left:20px;\n"
"	padding-top:4px;\n"
"	padding-bottom:4px;\n"
"	padding-right:10px;\n"
"}\n"
"QMenu{\n"
"	background-color:rgb(78,78,78);\n"
"}\n"
"QTabWidget {\n"
"	color:rgb(0,0,0);\n"
"	background-color:rgb(247,246,246);\n"
"}\n"
"QTabWidget::pane {\n"
"		border-color: rgb(77,77,77);\n"
""
                        "		background-color:rgb(101,101,101);\n"
"		border-style: solid;\n"
"		border-width: 1px;\n"
"    	border-radius: 6px;\n"
"}\n"
"QTabBar::tab {\n"
"	padding:2px;\n"
"	color:rgb(250,250,250);\n"
"  	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(97, 97, 97, 255));\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"  	border-top-right-radius:4px;\n"
"   border-top-left-radius:4px;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:0.6, x2:0.5, y2:0.4, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(95, 92, 93, 255));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0.4, y1:0.5, x2:0.6, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(95, 92, 93, 255));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0.6, y1:0.5, x2:0.4, y2:0.5, stop:0 rgba(115, 115, 115, 255), stop:1 rgba(95, 92, 93, 255));\n"
"	border-bottom-color: rgb(101,101,101);\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {\n"
""
                        "  	background-color:rgb(101,101,101);\n"
"  	margin-left: 0px;\n"
"  	margin-right: 1px;\n"
"}\n"
"QTabBar::tab:!selected {\n"
"    	margin-top: 1px;\n"
"		margin-right: 1px;\n"
"}\n"
"QCheckBox {\n"
"	color:rgb(223,219,210);\n"
"	padding: 2px;\n"
"}\n"
"QCheckBox:hover {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	padding-left: 1px;\n"
"	padding-right: 1px;\n"
"	padding-bottom: 1px;\n"
"	padding-top: 1px;\n"
"	border-width:1px;\n"
"	border-color: rgb(87, 97, 106);\n"
"	background-color:qlineargradient(spread:pad, x1:0.5, y1:0.7, x2:0.5, y2:0.3, stop:0 rgba(87, 97, 106, 150), stop:1 rgba(93, 103, 113, 150));\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	border-width:1px;\n"
"	border-color: rgb(180,180,180);\n"
"  	background-color:qlineargradient(spread:pad, x1:0.5, y1:0.7, x2:0.5, y2:0.3, stop:0 rgba(87, 97, 106, 255), stop:1 rgba(93, 103, 113, 255));\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	bord"
                        "er-width:1px;\n"
"	border-color: rgb(87, 97, 106);\n"
"  	background-color:rgb(255,255,255);\n"
"}\n"
"QStatusBar {\n"
"	color:rgb(240,240,240);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(128, 160));
        graphicsView->setMaximumSize(QSize(128, 160));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(graphicsView);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_12, 0, 2, 1, 1);

        pushButton_69 = new QPushButton(centralwidget);
        pushButton_69->setObjectName(QString::fromUtf8("pushButton_69"));
        sizePolicy1.setHeightForWidth(pushButton_69->sizePolicy().hasHeightForWidth());
        pushButton_69->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_69, 3, 4, 1, 1);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_15, 1, 2, 1, 1);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_13, 1, 0, 1, 1);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_14, 1, 1, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_11, 0, 1, 1, 1);

        pushButton_68 = new QPushButton(centralwidget);
        pushButton_68->setObjectName(QString::fromUtf8("pushButton_68"));
        sizePolicy1.setHeightForWidth(pushButton_68->sizePolicy().hasHeightForWidth());
        pushButton_68->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_68, 2, 4, 1, 1);

        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_21, 3, 2, 1, 1);

        pushButton_62 = new QPushButton(centralwidget);
        pushButton_62->setObjectName(QString::fromUtf8("pushButton_62"));
        sizePolicy1.setHeightForWidth(pushButton_62->sizePolicy().hasHeightForWidth());
        pushButton_62->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_62, 1, 3, 1, 1);

        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        sizePolicy1.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_19, 3, 1, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_10, 0, 0, 1, 1);

        pushButton_67 = new QPushButton(centralwidget);
        pushButton_67->setObjectName(QString::fromUtf8("pushButton_67"));
        sizePolicy1.setHeightForWidth(pushButton_67->sizePolicy().hasHeightForWidth());
        pushButton_67->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_67, 1, 4, 1, 1);

        pushButton_64 = new QPushButton(centralwidget);
        pushButton_64->setObjectName(QString::fromUtf8("pushButton_64"));
        sizePolicy1.setHeightForWidth(pushButton_64->sizePolicy().hasHeightForWidth());
        pushButton_64->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_64, 3, 3, 1, 1);

        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_16, 2, 0, 1, 1);

        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_17, 2, 1, 1, 1);

        pushButton_61 = new QPushButton(centralwidget);
        pushButton_61->setObjectName(QString::fromUtf8("pushButton_61"));
        sizePolicy1.setHeightForWidth(pushButton_61->sizePolicy().hasHeightForWidth());
        pushButton_61->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_61, 0, 3, 1, 1);

        pushButton_66 = new QPushButton(centralwidget);
        pushButton_66->setObjectName(QString::fromUtf8("pushButton_66"));
        sizePolicy1.setHeightForWidth(pushButton_66->sizePolicy().hasHeightForWidth());
        pushButton_66->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_66, 0, 4, 1, 1);

        pushButton_65 = new QPushButton(centralwidget);
        pushButton_65->setObjectName(QString::fromUtf8("pushButton_65"));
        sizePolicy1.setHeightForWidth(pushButton_65->sizePolicy().hasHeightForWidth());
        pushButton_65->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_65, 3, 0, 1, 1);

        pushButton_63 = new QPushButton(centralwidget);
        pushButton_63->setObjectName(QString::fromUtf8("pushButton_63"));
        sizePolicy1.setHeightForWidth(pushButton_63->sizePolicy().hasHeightForWidth());
        pushButton_63->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_63, 2, 3, 1, 1);

        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_18, 2, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_83 = new QPushButton(centralwidget);
        pushButton_83->setObjectName(QString::fromUtf8("pushButton_83"));
        sizePolicy2.setHeightForWidth(pushButton_83->sizePolicy().hasHeightForWidth());
        pushButton_83->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_83, 4, 1, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_8, 2, 0, 1, 1);

        pushButton_82 = new QPushButton(centralwidget);
        pushButton_82->setObjectName(QString::fromUtf8("pushButton_82"));
        sizePolicy2.setHeightForWidth(pushButton_82->sizePolicy().hasHeightForWidth());
        pushButton_82->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_82, 4, 0, 1, 1);

        pushButton_85 = new QPushButton(centralwidget);
        pushButton_85->setObjectName(QString::fromUtf8("pushButton_85"));
        sizePolicy2.setHeightForWidth(pushButton_85->sizePolicy().hasHeightForWidth());
        pushButton_85->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_85, 4, 2, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_6, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_7, 0, 2, 1, 1);

        pushButton_84 = new QPushButton(centralwidget);
        pushButton_84->setObjectName(QString::fromUtf8("pushButton_84"));
        sizePolicy2.setHeightForWidth(pushButton_84->sizePolicy().hasHeightForWidth());
        pushButton_84->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_84, 3, 0, 1, 1);

        pushButton_87 = new QPushButton(centralwidget);
        pushButton_87->setObjectName(QString::fromUtf8("pushButton_87"));
        sizePolicy2.setHeightForWidth(pushButton_87->sizePolicy().hasHeightForWidth());
        pushButton_87->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_87, 3, 1, 1, 1);

        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy2.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_20, 3, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        toolButton_18 = new QToolButton(centralwidget);
        toolButton_18->setObjectName(QString::fromUtf8("toolButton_18"));
        sizePolicy2.setHeightForWidth(toolButton_18->sizePolicy().hasHeightForWidth());
        toolButton_18->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_18, 1, 8, 1, 1);

        toolButton_3 = new QToolButton(centralwidget);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        sizePolicy2.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_3, 0, 4, 1, 1);

        toolButton_5 = new QToolButton(centralwidget);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        sizePolicy2.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_5, 0, 6, 1, 1);

        toolButton_13 = new QToolButton(centralwidget);
        toolButton_13->setObjectName(QString::fromUtf8("toolButton_13"));
        sizePolicy2.setHeightForWidth(toolButton_13->sizePolicy().hasHeightForWidth());
        toolButton_13->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_13, 1, 3, 1, 1);

        toolButton_42 = new QToolButton(centralwidget);
        toolButton_42->setObjectName(QString::fromUtf8("toolButton_42"));
        sizePolicy2.setHeightForWidth(toolButton_42->sizePolicy().hasHeightForWidth());
        toolButton_42->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_42, 3, 10, 1, 1);

        toolButton_10 = new QToolButton(centralwidget);
        toolButton_10->setObjectName(QString::fromUtf8("toolButton_10"));
        sizePolicy2.setHeightForWidth(toolButton_10->sizePolicy().hasHeightForWidth());
        toolButton_10->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_10, 0, 11, 1, 1);

        toolButton_23 = new QToolButton(centralwidget);
        toolButton_23->setObjectName(QString::fromUtf8("toolButton_23"));
        sizePolicy2.setHeightForWidth(toolButton_23->sizePolicy().hasHeightForWidth());
        toolButton_23->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_23, 2, 2, 1, 1);

        toolButton_12 = new QToolButton(centralwidget);
        toolButton_12->setObjectName(QString::fromUtf8("toolButton_12"));
        sizePolicy2.setHeightForWidth(toolButton_12->sizePolicy().hasHeightForWidth());
        toolButton_12->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_12, 1, 2, 1, 1);

        toolButton_25 = new QToolButton(centralwidget);
        toolButton_25->setObjectName(QString::fromUtf8("toolButton_25"));
        sizePolicy2.setHeightForWidth(toolButton_25->sizePolicy().hasHeightForWidth());
        toolButton_25->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_25, 2, 4, 1, 1);

        toolButton_17 = new QToolButton(centralwidget);
        toolButton_17->setObjectName(QString::fromUtf8("toolButton_17"));
        sizePolicy2.setHeightForWidth(toolButton_17->sizePolicy().hasHeightForWidth());
        toolButton_17->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_17, 1, 7, 1, 1);

        toolButton_53 = new QToolButton(centralwidget);
        toolButton_53->setObjectName(QString::fromUtf8("toolButton_53"));
        sizePolicy2.setHeightForWidth(toolButton_53->sizePolicy().hasHeightForWidth());
        toolButton_53->setSizePolicy(sizePolicy2);
        toolButton_53->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(toolButton_53, 0, 1, 1, 1);

        toolButton_52 = new QToolButton(centralwidget);
        toolButton_52->setObjectName(QString::fromUtf8("toolButton_52"));
        sizePolicy2.setHeightForWidth(toolButton_52->sizePolicy().hasHeightForWidth());
        toolButton_52->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_52, 3, 14, 1, 1);

        toolButton_2 = new QToolButton(centralwidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy2.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_2, 0, 3, 1, 1);

        toolButton_49 = new QToolButton(centralwidget);
        toolButton_49->setObjectName(QString::fromUtf8("toolButton_49"));
        sizePolicy2.setHeightForWidth(toolButton_49->sizePolicy().hasHeightForWidth());
        toolButton_49->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_49, 0, 14, 1, 1);

        toolButton_21 = new QToolButton(centralwidget);
        toolButton_21->setObjectName(QString::fromUtf8("toolButton_21"));
        sizePolicy2.setHeightForWidth(toolButton_21->sizePolicy().hasHeightForWidth());
        toolButton_21->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_21, 1, 11, 1, 1);

        toolButton_34 = new QToolButton(centralwidget);
        toolButton_34->setObjectName(QString::fromUtf8("toolButton_34"));
        sizePolicy2.setHeightForWidth(toolButton_34->sizePolicy().hasHeightForWidth());
        toolButton_34->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_34, 3, 2, 1, 1);

        toolButton_8 = new QToolButton(centralwidget);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        sizePolicy2.setHeightForWidth(toolButton_8->sizePolicy().hasHeightForWidth());
        toolButton_8->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_8, 0, 9, 1, 1);

        toolButton_44 = new QToolButton(centralwidget);
        toolButton_44->setObjectName(QString::fromUtf8("toolButton_44"));
        sizePolicy2.setHeightForWidth(toolButton_44->sizePolicy().hasHeightForWidth());
        toolButton_44->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_44, 3, 12, 1, 1);

        toolButton_50 = new QToolButton(centralwidget);
        toolButton_50->setObjectName(QString::fromUtf8("toolButton_50"));
        sizePolicy2.setHeightForWidth(toolButton_50->sizePolicy().hasHeightForWidth());
        toolButton_50->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_50, 1, 14, 1, 1);

        toolButton_47 = new QToolButton(centralwidget);
        toolButton_47->setObjectName(QString::fromUtf8("toolButton_47"));
        sizePolicy2.setHeightForWidth(toolButton_47->sizePolicy().hasHeightForWidth());
        toolButton_47->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_47, 2, 13, 1, 1);

        toolButton_43 = new QToolButton(centralwidget);
        toolButton_43->setObjectName(QString::fromUtf8("toolButton_43"));
        sizePolicy2.setHeightForWidth(toolButton_43->sizePolicy().hasHeightForWidth());
        toolButton_43->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_43, 3, 11, 1, 1);

        toolButton_36 = new QToolButton(centralwidget);
        toolButton_36->setObjectName(QString::fromUtf8("toolButton_36"));
        sizePolicy2.setHeightForWidth(toolButton_36->sizePolicy().hasHeightForWidth());
        toolButton_36->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_36, 3, 4, 1, 1);

        toolButton_9 = new QToolButton(centralwidget);
        toolButton_9->setObjectName(QString::fromUtf8("toolButton_9"));
        sizePolicy2.setHeightForWidth(toolButton_9->sizePolicy().hasHeightForWidth());
        toolButton_9->setSizePolicy(sizePolicy2);
        toolButton_9->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(toolButton_9, 1, 1, 1, 1);

        toolButton_37 = new QToolButton(centralwidget);
        toolButton_37->setObjectName(QString::fromUtf8("toolButton_37"));
        sizePolicy2.setHeightForWidth(toolButton_37->sizePolicy().hasHeightForWidth());
        toolButton_37->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_37, 3, 5, 1, 1);

        toolButton_11 = new QToolButton(centralwidget);
        toolButton_11->setObjectName(QString::fromUtf8("toolButton_11"));
        sizePolicy2.setHeightForWidth(toolButton_11->sizePolicy().hasHeightForWidth());
        toolButton_11->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_11, 0, 12, 1, 1);

        toolButton_35 = new QToolButton(centralwidget);
        toolButton_35->setObjectName(QString::fromUtf8("toolButton_35"));
        sizePolicy2.setHeightForWidth(toolButton_35->sizePolicy().hasHeightForWidth());
        toolButton_35->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_35, 3, 3, 1, 1);

        toolButton_24 = new QToolButton(centralwidget);
        toolButton_24->setObjectName(QString::fromUtf8("toolButton_24"));
        sizePolicy2.setHeightForWidth(toolButton_24->sizePolicy().hasHeightForWidth());
        toolButton_24->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_24, 2, 3, 1, 1);

        toolButton_20 = new QToolButton(centralwidget);
        toolButton_20->setObjectName(QString::fromUtf8("toolButton_20"));
        sizePolicy2.setHeightForWidth(toolButton_20->sizePolicy().hasHeightForWidth());
        toolButton_20->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_20, 1, 10, 1, 1);

        toolButton_16 = new QToolButton(centralwidget);
        toolButton_16->setObjectName(QString::fromUtf8("toolButton_16"));
        sizePolicy2.setHeightForWidth(toolButton_16->sizePolicy().hasHeightForWidth());
        toolButton_16->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_16, 1, 6, 1, 1);

        toolButton_32 = new QToolButton(centralwidget);
        toolButton_32->setObjectName(QString::fromUtf8("toolButton_32"));
        sizePolicy2.setHeightForWidth(toolButton_32->sizePolicy().hasHeightForWidth());
        toolButton_32->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_32, 2, 11, 1, 1);

        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        sizePolicy2.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton, 0, 2, 1, 1);

        toolButton_54 = new QToolButton(centralwidget);
        toolButton_54->setObjectName(QString::fromUtf8("toolButton_54"));
        sizePolicy2.setHeightForWidth(toolButton_54->sizePolicy().hasHeightForWidth());
        toolButton_54->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_54, 0, 10, 1, 1);

        toolButton_55 = new QToolButton(centralwidget);
        toolButton_55->setObjectName(QString::fromUtf8("toolButton_55"));
        sizePolicy2.setHeightForWidth(toolButton_55->sizePolicy().hasHeightForWidth());
        toolButton_55->setSizePolicy(sizePolicy2);
        toolButton_55->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(toolButton_55, 2, 1, 1, 1);

        toolButton_33 = new QToolButton(centralwidget);
        toolButton_33->setObjectName(QString::fromUtf8("toolButton_33"));
        sizePolicy2.setHeightForWidth(toolButton_33->sizePolicy().hasHeightForWidth());
        toolButton_33->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_33, 2, 12, 1, 1);

        toolButton_26 = new QToolButton(centralwidget);
        toolButton_26->setObjectName(QString::fromUtf8("toolButton_26"));
        sizePolicy2.setHeightForWidth(toolButton_26->sizePolicy().hasHeightForWidth());
        toolButton_26->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_26, 2, 5, 1, 1);

        toolButton_29 = new QToolButton(centralwidget);
        toolButton_29->setObjectName(QString::fromUtf8("toolButton_29"));
        sizePolicy2.setHeightForWidth(toolButton_29->sizePolicy().hasHeightForWidth());
        toolButton_29->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_29, 2, 8, 1, 1);

        toolButton_30 = new QToolButton(centralwidget);
        toolButton_30->setObjectName(QString::fromUtf8("toolButton_30"));
        sizePolicy2.setHeightForWidth(toolButton_30->sizePolicy().hasHeightForWidth());
        toolButton_30->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_30, 2, 9, 1, 1);

        toolButton_22 = new QToolButton(centralwidget);
        toolButton_22->setObjectName(QString::fromUtf8("toolButton_22"));
        sizePolicy2.setHeightForWidth(toolButton_22->sizePolicy().hasHeightForWidth());
        toolButton_22->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_22, 1, 12, 1, 1);

        toolButton_39 = new QToolButton(centralwidget);
        toolButton_39->setObjectName(QString::fromUtf8("toolButton_39"));
        sizePolicy2.setHeightForWidth(toolButton_39->sizePolicy().hasHeightForWidth());
        toolButton_39->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_39, 3, 7, 1, 1);

        toolButton_45 = new QToolButton(centralwidget);
        toolButton_45->setObjectName(QString::fromUtf8("toolButton_45"));
        sizePolicy2.setHeightForWidth(toolButton_45->sizePolicy().hasHeightForWidth());
        toolButton_45->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_45, 0, 13, 1, 1);

        toolButton_27 = new QToolButton(centralwidget);
        toolButton_27->setObjectName(QString::fromUtf8("toolButton_27"));
        sizePolicy2.setHeightForWidth(toolButton_27->sizePolicy().hasHeightForWidth());
        toolButton_27->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_27, 2, 6, 1, 1);

        toolButton_14 = new QToolButton(centralwidget);
        toolButton_14->setObjectName(QString::fromUtf8("toolButton_14"));
        sizePolicy2.setHeightForWidth(toolButton_14->sizePolicy().hasHeightForWidth());
        toolButton_14->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_14, 1, 4, 1, 1);

        toolButton_51 = new QToolButton(centralwidget);
        toolButton_51->setObjectName(QString::fromUtf8("toolButton_51"));
        sizePolicy2.setHeightForWidth(toolButton_51->sizePolicy().hasHeightForWidth());
        toolButton_51->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_51, 2, 14, 1, 1);

        toolButton_28 = new QToolButton(centralwidget);
        toolButton_28->setObjectName(QString::fromUtf8("toolButton_28"));
        sizePolicy2.setHeightForWidth(toolButton_28->sizePolicy().hasHeightForWidth());
        toolButton_28->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_28, 2, 7, 1, 1);

        toolButton_31 = new QToolButton(centralwidget);
        toolButton_31->setObjectName(QString::fromUtf8("toolButton_31"));
        sizePolicy2.setHeightForWidth(toolButton_31->sizePolicy().hasHeightForWidth());
        toolButton_31->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_31, 2, 10, 1, 1);

        toolButton_41 = new QToolButton(centralwidget);
        toolButton_41->setObjectName(QString::fromUtf8("toolButton_41"));
        sizePolicy2.setHeightForWidth(toolButton_41->sizePolicy().hasHeightForWidth());
        toolButton_41->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_41, 3, 9, 1, 1);

        toolButton_7 = new QToolButton(centralwidget);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        sizePolicy2.setHeightForWidth(toolButton_7->sizePolicy().hasHeightForWidth());
        toolButton_7->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_7, 0, 8, 1, 1);

        toolButton_15 = new QToolButton(centralwidget);
        toolButton_15->setObjectName(QString::fromUtf8("toolButton_15"));
        sizePolicy2.setHeightForWidth(toolButton_15->sizePolicy().hasHeightForWidth());
        toolButton_15->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_15, 1, 5, 1, 1);

        toolButton_56 = new QToolButton(centralwidget);
        toolButton_56->setObjectName(QString::fromUtf8("toolButton_56"));
        sizePolicy2.setHeightForWidth(toolButton_56->sizePolicy().hasHeightForWidth());
        toolButton_56->setSizePolicy(sizePolicy2);
        toolButton_56->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(toolButton_56, 3, 1, 1, 1);

        toolButton_38 = new QToolButton(centralwidget);
        toolButton_38->setObjectName(QString::fromUtf8("toolButton_38"));
        sizePolicy2.setHeightForWidth(toolButton_38->sizePolicy().hasHeightForWidth());
        toolButton_38->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_38, 3, 6, 1, 1);

        toolButton_48 = new QToolButton(centralwidget);
        toolButton_48->setObjectName(QString::fromUtf8("toolButton_48"));
        sizePolicy2.setHeightForWidth(toolButton_48->sizePolicy().hasHeightForWidth());
        toolButton_48->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_48, 3, 13, 1, 1);

        toolButton_40 = new QToolButton(centralwidget);
        toolButton_40->setObjectName(QString::fromUtf8("toolButton_40"));
        sizePolicy2.setHeightForWidth(toolButton_40->sizePolicy().hasHeightForWidth());
        toolButton_40->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_40, 3, 8, 1, 1);

        toolButton_4 = new QToolButton(centralwidget);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        sizePolicy2.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_4, 0, 5, 1, 1);

        toolButton_19 = new QToolButton(centralwidget);
        toolButton_19->setObjectName(QString::fromUtf8("toolButton_19"));
        sizePolicy2.setHeightForWidth(toolButton_19->sizePolicy().hasHeightForWidth());
        toolButton_19->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_19, 1, 9, 1, 1);

        toolButton_6 = new QToolButton(centralwidget);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        sizePolicy2.setHeightForWidth(toolButton_6->sizePolicy().hasHeightForWidth());
        toolButton_6->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_6, 0, 7, 1, 1);

        toolButton_46 = new QToolButton(centralwidget);
        toolButton_46->setObjectName(QString::fromUtf8("toolButton_46"));
        sizePolicy2.setHeightForWidth(toolButton_46->sizePolicy().hasHeightForWidth());
        toolButton_46->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(toolButton_46, 1, 13, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 718, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_69->setText(QApplication::translate("MainWindow", ")", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_68->setText(QApplication::translate("MainWindow", "(", nullptr));
        pushButton_21->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_62->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_19->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_67->setText(QApplication::translate("MainWindow", "%", nullptr));
        pushButton_64->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_16->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_17->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_61->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_66->setText(QApplication::translate("MainWindow", "^", nullptr));
        pushButton_65->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_63->setText(QApplication::translate("MainWindow", "*", nullptr));
        pushButton_18->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "UP", nullptr));
        pushButton_83->setText(QApplication::translate("MainWindow", "ALT", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "ESCAPE", nullptr));
        pushButton_82->setText(QApplication::translate("MainWindow", "CTRL", nullptr));
        pushButton_85->setText(QApplication::translate("MainWindow", "FIXA", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "RIGHT", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "OPTIONS", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "ENTER", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "DOWN", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "LEFT", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "CANCEL", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "OK", nullptr));
        pushButton_84->setText(QApplication::translate("MainWindow", "SHIFT", nullptr));
        pushButton_87->setText(QApplication::translate("MainWindow", "DEL", nullptr));
        pushButton_20->setText(QApplication::translate("MainWindow", "BACKSPACE", nullptr));
        toolButton_18->setText(QApplication::translate("MainWindow", "U", nullptr));
        toolButton_3->setText(QApplication::translate("MainWindow", "#", nullptr));
        toolButton_5->setText(QApplication::translate("MainWindow", "%", nullptr));
        toolButton_13->setText(QApplication::translate("MainWindow", "W", nullptr));
        toolButton_42->setText(QApplication::translate("MainWindow", ",", nullptr));
        toolButton_10->setText(QApplication::translate("MainWindow", "\\", nullptr));
        toolButton_23->setText(QApplication::translate("MainWindow", "A", nullptr));
        toolButton_12->setText(QApplication::translate("MainWindow", "Q", nullptr));
        toolButton_25->setText(QApplication::translate("MainWindow", "D", nullptr));
        toolButton_17->setText(QApplication::translate("MainWindow", "Y", nullptr));
        toolButton_53->setText(QApplication::translate("MainWindow", "'", nullptr));
        toolButton_52->setText(QApplication::translate("MainWindow", "?", nullptr));
        toolButton_2->setText(QApplication::translate("MainWindow", "@", nullptr));
        toolButton_49->setText(QApplication::translate("MainWindow", "]", nullptr));
        toolButton_21->setText(QApplication::translate("MainWindow", "P", nullptr));
        toolButton_34->setText(QString());
        toolButton_8->setText(QApplication::translate("MainWindow", "_", nullptr));
        toolButton_44->setText(QApplication::translate("MainWindow", ":", nullptr));
        toolButton_50->setText(QApplication::translate("MainWindow", "{", nullptr));
        toolButton_47->setText(QApplication::translate("MainWindow", "~", nullptr));
        toolButton_43->setText(QApplication::translate("MainWindow", ".", nullptr));
        toolButton_36->setText(QApplication::translate("MainWindow", "X", nullptr));
        toolButton_9->setText(QApplication::translate("MainWindow", "\"", nullptr));
        toolButton_37->setText(QApplication::translate("MainWindow", "C", nullptr));
        toolButton_11->setText(QApplication::translate("MainWindow", "|", nullptr));
        toolButton_35->setText(QApplication::translate("MainWindow", "Z", nullptr));
        toolButton_24->setText(QApplication::translate("MainWindow", "S", nullptr));
        toolButton_20->setText(QApplication::translate("MainWindow", "O", nullptr));
        toolButton_16->setText(QApplication::translate("MainWindow", "T", nullptr));
        toolButton_32->setText(QApplication::translate("MainWindow", "\303\207", nullptr));
        toolButton->setText(QApplication::translate("MainWindow", "!", nullptr));
        toolButton_54->setText(QApplication::translate("MainWindow", "\302\254", nullptr));
        toolButton_55->setText(QApplication::translate("MainWindow", "<", nullptr));
        toolButton_33->setText(QApplication::translate("MainWindow", "^", nullptr));
        toolButton_26->setText(QApplication::translate("MainWindow", "F", nullptr));
        toolButton_29->setText(QApplication::translate("MainWindow", "J", nullptr));
        toolButton_30->setText(QApplication::translate("MainWindow", "K", nullptr));
        toolButton_22->setText(QApplication::translate("MainWindow", "\302\264", nullptr));
        toolButton_39->setText(QApplication::translate("MainWindow", "B", nullptr));
        toolButton_45->setText(QApplication::translate("MainWindow", "[", nullptr));
        toolButton_27->setText(QApplication::translate("MainWindow", "G", nullptr));
        toolButton_14->setText(QApplication::translate("MainWindow", "E", nullptr));
        toolButton_51->setText(QApplication::translate("MainWindow", "}", nullptr));
        toolButton_28->setText(QApplication::translate("MainWindow", "H", nullptr));
        toolButton_31->setText(QApplication::translate("MainWindow", "L", nullptr));
        toolButton_41->setText(QApplication::translate("MainWindow", "M", nullptr));
        toolButton_7->setText(QApplication::translate("MainWindow", "&&", nullptr));
        toolButton_15->setText(QApplication::translate("MainWindow", "R", nullptr));
        toolButton_56->setText(QApplication::translate("MainWindow", ">", nullptr));
        toolButton_38->setText(QApplication::translate("MainWindow", "V", nullptr));
        toolButton_48->setText(QApplication::translate("MainWindow", ";", nullptr));
        toolButton_40->setText(QApplication::translate("MainWindow", "N", nullptr));
        toolButton_4->setText(QApplication::translate("MainWindow", "$", nullptr));
        toolButton_19->setText(QApplication::translate("MainWindow", "I", nullptr));
        toolButton_6->setText(QApplication::translate("MainWindow", "\302\250", nullptr));
        toolButton_46->setText(QApplication::translate("MainWindow", "`", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
