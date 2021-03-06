#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_LoginWrite_textEdited(const QString &arg1);

    void on_PasswordWrite_textEdited(const QString &arg1);

    void on_Register_clicked();

    void on_Login_clicked();

    void on_Recover_clicked();

    void on_ipWrite_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
