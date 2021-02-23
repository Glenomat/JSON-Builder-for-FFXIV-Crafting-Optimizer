/* Programm Crated by: Glenoamt
 * Crated: 23.02.2021
 * Finished: 23.02.2021
 */

#include "frmmain.h"
#include "ui_frmmain.h"

FrmMain::FrmMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FrmMain)
{
    ui->setupUi(this);
}

FrmMain::~FrmMain()
{
    delete ui;
}


void FrmMain::on_btnGenerate_clicked()
{
    ui->lwOut->clear();
    QString command = "{\n"
                      "\"baseLevel\": " + ui->edtBase->text() + "\n" +
                      "\"difficulty\": " + ui->edtDifficulty->text() + "\n" +
                      "\"durability\": " + ui->edtDurability->text() + "\n" +
                      "\"id\": " + ui->edtID->text() + "\n" +
                      "\"level\": " + ui->edtReal->text() + "\n" +
                      "\"maxQuality\": " + ui->edtQuality->text() + "\n" +
                      "\"name\": {\n" +
                      "  \"en\": \"" + ui->edtName->text() + "\"\n" +
                      "},\n" +
                      "\"suggestedCraftsmanship\": " + ui->edtCraft->text() + "\n}";
    ui->lwOut->addItem(command);
}
