/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QFrame *frame_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QVBoxLayout *verticalLayout;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_14;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_19;
    QGridLayout *gridLayout_5;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QFrame *pressure_frame;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_12;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_18;
    QGridLayout *gridLayout_4;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QFrame *alt_frame;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_13;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_17;
    QGridLayout *gridLayout_3;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QFrame *tilt_frame;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_16;
    QGridLayout *gridLayout_2;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QFrame *temp_frame;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOpen;
    QMenu *menuHelp;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1380, 957);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/mainwindow.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 40, 43);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(251, 0));
        widget->setMaximumSize(QSize(251, 100));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        frame = new QFrame(widget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("image: url(:/images/Logo.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(frame);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(100, 100));
        widget_2->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_8 = new QHBoxLayout(widget_2);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setMinimumSize(QSize(400, 0));
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout_7->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        horizontalLayout->addWidget(widget_2);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(286, 0));
        widget_3->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_11 = new QHBoxLayout(widget_3);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_3);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_4);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);


        horizontalLayout_11->addLayout(verticalLayout_6);


        horizontalLayout->addWidget(widget_3);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        widget_4->setMinimumSize(QSize(240, 0));
        widget_4->setMaximumSize(QSize(240, 265));
        widget_4->setStyleSheet(QString::fromUtf8("border-style:solid;\n"
"border-width:1px;\n"
"border-color: rgb(45, 45, 45);"));
        horizontalLayout_10 = new QHBoxLayout(widget_4);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_2 = new QLabel(widget_4);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(20, 20));
        label_2->setMaximumSize(QSize(20, 20));
        label_2->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(64, 222, 122);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-radius:10px;"));

        horizontalLayout_9->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_9);

        frame_3 = new QFrame(widget_4);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(0, 213));
        frame_3->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"image: url(:/images/cansatImage.png);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        verticalLayout_5->addWidget(frame_3);


        horizontalLayout_10->addLayout(verticalLayout_5);


        verticalLayout_2->addWidget(widget_4);

        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName("widget_5");
        widget_5->setMinimumSize(QSize(0, 458));
        widget_5->setMaximumSize(QSize(240, 16777215));
        widget_5->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"border-style : solid;\n"
"border-width:1px;"));
        horizontalLayout_15 = new QHBoxLayout(widget_5);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_6 = new QLabel(widget_5);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_6);

        label_7 = new QLabel(widget_5);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(widget_5);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_8);

        label_10 = new QLabel(widget_5);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_10);

        label_9 = new QLabel(widget_5);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_9);

        label_11 = new QLabel(widget_5);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_11);

        label_12 = new QLabel(widget_5);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_12);

        label_13 = new QLabel(widget_5);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_13);

        label_14 = new QLabel(widget_5);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_14);

        label_15 = new QLabel(widget_5);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_15);

        label_16 = new QLabel(widget_5);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_16);

        label_17 = new QLabel(widget_5);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_17);


        horizontalLayout_15->addLayout(verticalLayout_4);


        verticalLayout_2->addWidget(widget_5);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName("widget_6");
        widget_6->setMinimumSize(QSize(998, 454));
        widget_6->setStyleSheet(QString::fromUtf8("image: url(:/images/MapView.png);"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");

        verticalLayout->addWidget(widget_6);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        widget_10 = new QWidget(centralwidget);
        widget_10->setObjectName("widget_10");
        widget_10->setMinimumSize(QSize(0, 100));
        horizontalLayout_14 = new QHBoxLayout(widget_10);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        frame_6 = new QFrame(widget_10);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_19 = new QHBoxLayout(frame_6);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        label_36 = new QLabel(frame_6);
        label_36->setObjectName("label_36");
        label_36->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(label_36, 0, 0, 1, 1);

        label_37 = new QLabel(frame_6);
        label_37->setObjectName("label_37");
        label_37->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_37->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_37, 0, 1, 1, 1);

        label_38 = new QLabel(frame_6);
        label_38->setObjectName("label_38");
        label_38->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(label_38, 1, 0, 1, 1);

        label_39 = new QLabel(frame_6);
        label_39->setObjectName("label_39");
        label_39->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(label_39, 1, 1, 1, 1);

        label_40 = new QLabel(frame_6);
        label_40->setObjectName("label_40");
        label_40->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(label_40, 2, 0, 1, 1);

        label_41 = new QLabel(frame_6);
        label_41->setObjectName("label_41");
        label_41->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(label_41, 2, 1, 1, 1);


        horizontalLayout_19->addLayout(gridLayout_5);


        horizontalLayout_14->addWidget(frame_6);

        pressure_frame = new QFrame(widget_10);
        pressure_frame->setObjectName("pressure_frame");
        pressure_frame->setMinimumSize(QSize(360, 0));
        pressure_frame->setStyleSheet(QString::fromUtf8("image: url(:/images/pressure.png);"));
        pressure_frame->setFrameShape(QFrame::StyledPanel);
        pressure_frame->setFrameShadow(QFrame::Raised);

        horizontalLayout_14->addWidget(pressure_frame);


        gridLayout->addWidget(widget_10, 1, 1, 1, 1);

        widget_8 = new QWidget(centralwidget);
        widget_8->setObjectName("widget_8");
        widget_8->setMinimumSize(QSize(0, 100));
        horizontalLayout_12 = new QHBoxLayout(widget_8);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        frame_5 = new QFrame(widget_8);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_18 = new QHBoxLayout(frame_5);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        label_30 = new QLabel(frame_5);
        label_30->setObjectName("label_30");
        label_30->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(label_30, 0, 0, 1, 1);

        label_31 = new QLabel(frame_5);
        label_31->setObjectName("label_31");
        label_31->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_31->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_31, 0, 1, 1, 1);

        label_32 = new QLabel(frame_5);
        label_32->setObjectName("label_32");
        label_32->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(label_32, 1, 0, 1, 1);

        label_33 = new QLabel(frame_5);
        label_33->setObjectName("label_33");
        label_33->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_33->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_33, 1, 1, 1, 1);

        label_34 = new QLabel(frame_5);
        label_34->setObjectName("label_34");
        label_34->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(label_34, 2, 0, 1, 1);

        label_35 = new QLabel(frame_5);
        label_35->setObjectName("label_35");
        label_35->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_35->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_35, 2, 1, 1, 1);


        horizontalLayout_18->addLayout(gridLayout_4);


        horizontalLayout_12->addWidget(frame_5);

        alt_frame = new QFrame(widget_8);
        alt_frame->setObjectName("alt_frame");
        alt_frame->setMinimumSize(QSize(360, 0));
        alt_frame->setStyleSheet(QString::fromUtf8("image: url(:/images/temperatureGraph.png);"));
        alt_frame->setFrameShape(QFrame::StyledPanel);
        alt_frame->setFrameShadow(QFrame::Raised);

        horizontalLayout_12->addWidget(alt_frame);


        gridLayout->addWidget(widget_8, 0, 1, 1, 1);

        widget_9 = new QWidget(centralwidget);
        widget_9->setObjectName("widget_9");
        widget_9->setMinimumSize(QSize(0, 160));
        horizontalLayout_13 = new QHBoxLayout(widget_9);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        frame_4 = new QFrame(widget_9);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame_4);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label_24 = new QLabel(frame_4);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(label_24, 0, 0, 1, 1);

        label_25 = new QLabel(frame_4);
        label_25->setObjectName("label_25");
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_25, 0, 1, 1, 1);

        label_26 = new QLabel(frame_4);
        label_26->setObjectName("label_26");
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(label_26, 1, 0, 1, 1);

        label_27 = new QLabel(frame_4);
        label_27->setObjectName("label_27");
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_27, 1, 1, 1, 1);

        label_28 = new QLabel(frame_4);
        label_28->setObjectName("label_28");
        label_28->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(label_28, 2, 0, 1, 1);

        label_29 = new QLabel(frame_4);
        label_29->setObjectName("label_29");
        label_29->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_29, 2, 1, 1, 1);


        horizontalLayout_17->addLayout(gridLayout_3);


        horizontalLayout_13->addWidget(frame_4);

        tilt_frame = new QFrame(widget_9);
        tilt_frame->setObjectName("tilt_frame");
        tilt_frame->setMinimumSize(QSize(360, 0));
        tilt_frame->setStyleSheet(QString::fromUtf8("image: url(:/images/tilt.png);"));
        tilt_frame->setFrameShape(QFrame::StyledPanel);
        tilt_frame->setFrameShadow(QFrame::Raised);

        horizontalLayout_13->addWidget(tilt_frame);


        gridLayout->addWidget(widget_9, 1, 0, 1, 1);

        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName("widget_7");
        widget_7->setMinimumSize(QSize(0, 160));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        frame_2 = new QFrame(widget_7);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_16 = new QHBoxLayout(frame_2);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_18 = new QLabel(frame_2);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_18, 0, 0, 1, 1);

        label_19 = new QLabel(frame_2);
        label_19->setObjectName("label_19");
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_19, 0, 1, 1, 1);

        label_20 = new QLabel(frame_2);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_20, 1, 0, 1, 1);

        label_21 = new QLabel(frame_2);
        label_21->setObjectName("label_21");
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_21, 1, 1, 1, 1);

        label_22 = new QLabel(frame_2);
        label_22->setObjectName("label_22");
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_22, 2, 0, 1, 1);

        label_23 = new QLabel(frame_2);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_23, 2, 1, 1, 1);


        horizontalLayout_16->addLayout(gridLayout_2);


        horizontalLayout_5->addWidget(frame_2);

        temp_frame = new QFrame(widget_7);
        temp_frame->setObjectName("temp_frame");
        temp_frame->setMinimumSize(QSize(360, 0));
        temp_frame->setStyleSheet(QString::fromUtf8("image: url(:/images/altitude.png);"));
        temp_frame->setFrameShape(QFrame::StyledPanel);
        temp_frame->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(temp_frame);


        gridLayout->addWidget(widget_7, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1380, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuOpen = new QMenu(menubar);
        menuOpen->setObjectName("menuOpen");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuOpen->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuAbout->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Ground Control Station", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Cansat Ground Control Station", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "2023-01-28   00:00:00  UTC", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "28.3669\302\260 N, 77.5413\302\260 E", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Team Avinya", nullptr));
        label_2->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "sensorData1.csv", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "sensorData2.csv", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "sensorData3.csv", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "sensorData4.csv", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "sensorData5.csv", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "TemperaturesensorData1.csv", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "PressureSensorData1.csv", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "TiltsensorData1.csv", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "sensorData1.csv", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "sensorData1.csv", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "sensorData1.csv", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "sensorData1.csv", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Max. Pressure", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "936.39 hPa", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "Avg. Pressure", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "957.735 hPa", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Min. Pressure", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "1001.895 hPa", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Max. Temperature", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>30<span style=\" vertical-align:super;\">0 </span>C</p></body></html>", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Avg. Temperature", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>25<span style=\" vertical-align:super;\">0 </span>C</p></body></html>", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Min. Temperature", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>2<span style=\" vertical-align:super;\">0 </span>C</p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Max Tilt", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>55<span style=\" vertical-align:super;\">0</span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Avg Tilt", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>25<span style=\" vertical-align:super;\">0</span></p></body></html>", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Min Tilt", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>0<span style=\" vertical-align:super;\">0</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Max.  Altitude", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "700 m", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Avg.  Altitude", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "500 m", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Min.  Altitude", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "100 m", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuOpen->setTitle(QCoreApplication::translate("MainWindow", "Open", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
