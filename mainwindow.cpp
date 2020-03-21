#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "obliczenia.h"
float sredotworu;
int licz;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_zapisz_clicked()
{
    int licz = 0;
    ui->textEdit->append(QString::number(licz) +";   M.F.");
     sredotworu = ui->sB->value();
    if (ui->rB1->isChecked() ==true)
    {
        licz++;
        ui->textEdit->append(QString::number(licz) +";   Srednica  "+ QString::number(sredotworu));

    }
    if (ui->rB2->isChecked() ==true)
    {

        sredotworu=sredotworu*2;
        licz++;
        ui->textEdit->append(QString::number(licz) +";   Srednica  "+ QString::number(sredotworu));
    }
}

void MainWindow::on_zapiszPlik_clicked()
{
    licz = 0;
    ui->textEdit->append(QString::number(licz) +";   M.F.");
    float sredotworu = ui->sB->value();
    sredotworu=sredotworu*2;
    if (ui->rB1->isChecked() ==true)
    {

brakcc();


    }
    if (ui->rB2->isChecked() ==true)
    {
      brakplik();
       //a to ma robic co on_zapisz_clicked() tylko ze ciało funkcji bedzie w pliku obliczenia.
    }
}
void MainWindow::brakcc()
{
     sredotworu = ui->sB->value();
    licz++;
    ui->textEdit->append(QString::number(licz) +";   Srednica  "+ QString::number(sredotworu));
}
