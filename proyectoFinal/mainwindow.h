#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QLineEdit>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

private slots:
    bool on_action_Guardar_Como_triggered();

    bool on_action_Guardar_triggered();

    void on_action_Abrir_Archivo_triggered();

    void on_action_Archivo_Nuevo_triggered();

    void closeEvent(QCloseEvent *event);

    void on_action_Ejecutar_Archivo_triggered();

    void on_action_Cambiar_Fuente_triggered();


private:
    Ui::MainWindow *ui;
    bool saveFile();
    bool maybeSave();
    QString curFile;
    void readSettings();
    void writeSettings();
    QLineEdit *expresion;

};

#endif // MAINWINDOW_H
