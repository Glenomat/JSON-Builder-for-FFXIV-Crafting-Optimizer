#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class FrmMain; }
QT_END_NAMESPACE

class FrmMain : public QWidget
{
    Q_OBJECT

public:
    FrmMain(QWidget *parent = nullptr);
    ~FrmMain();

private slots:
    void on_btnGenerate_clicked();

private:
    Ui::FrmMain *ui;
};
#endif // FRMMAIN_H
