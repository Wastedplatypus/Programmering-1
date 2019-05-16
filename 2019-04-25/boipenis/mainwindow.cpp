#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL( clicked() ),this,SLOT(Summera() ));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Summera()
{

    QString t1 = ui->rad->text();

     QString t2 = ui->kolumn->text();

    double dt1 = t1.toDouble();
    double dt2 = t2.toDouble();

    double summa = dt1 + dt2;
    QString s = QString::number(summa);
    ui->label->setText(s);
}
