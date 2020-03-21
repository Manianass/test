#include "obliczenia.h"

obliczenia::obliczenia()
{
    void brakplik()
    {
         sredotworu = ui->sB->value();
        licz++;
        ui->textEdit->append(QString::number(licz) +";   Srednica  "+ QString::number(sredotworu));
    }
}
