#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSplineSeries *series = new QSplineSeries();
    series->append(0,1);
    series->append(2,2);
    series->append(3,1);
    series->append(7,1);
    series->append(10,1);


    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Temperature of Payload");
    chart->setTheme(QChart::ChartTheme::ChartThemeDark);

    QChartView *chartview = new QChartView();
    chartview->setParent(ui->temp_frame);
}

MainWindow::~MainWindow()
{
    delete ui;
}

