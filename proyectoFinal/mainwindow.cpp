#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QDebug>
#include <QFontDialog>
#include <QColorDialog>
#include <QSettings>
#include "lexer1.h"
#include "parser1.h"
#include <QDebug>
#include <QDir>

extern int yyparse();
extern void inicializa(QLineEdit *le);
extern FILE *yyin;

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    readSettings();
}


bool MainWindow::on_action_Guardar_Como_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(
                this,
                "TextEditor - Save as",
                "/home/sampayo/Documentos",
                "Text Files (*.txt);;C Files (*.c);;C++ Files(*.cpp);;All Files(*.*)"
                );
    if(!fileName.isEmpty()){
        curFile = fileName;
        return saveFile();
    }
    return false;
}

bool MainWindow::saveFile()
{
    QFile file(curFile);
    if(file.open(QFile::WriteOnly)){
        file.write(ui->plainTextEdit->toPlainText().toUtf8());
        setWindowTitle(tr("%1[*]").arg(QFileInfo(curFile).fileName()));
        ui->plainTextEdit->document()->setModified(false);
        return true;
    }else{
        QMessageBox::warning(
                    this,
                    "TextEditor",
                    tr("Cannot write files %1. \nError: %2")
                    .arg(curFile)
                    .arg(file.errorString()));
        return false;
    }
}

bool MainWindow::maybeSave()
{
    if(ui->plainTextEdit->document()->isModified()){
        QMessageBox::StandardButton ret=
                QMessageBox::warning(
                    this,
                    "TextEditor",
                    tr("The Document has been Modified"
                    "\nDo you want to save your changes?"),
                    QMessageBox::Yes | QMessageBox::No |QMessageBox::Cancel);
        if( ret == QMessageBox::Yes){
            return on_action_Guardar_triggered();
        }else if(ret == QMessageBox::Cancel){
            return false;
        }
    }
    return true;
}

bool MainWindow::on_action_Guardar_triggered()
{
    if(curFile.isEmpty())
        return on_action_Guardar_Como_triggered();
    else
        return saveFile();
}

void MainWindow::on_action_Abrir_Archivo_triggered()
{
    if(maybeSave()){
        QString fileName = QFileDialog::getOpenFileName(
                    this,
                    "TextEditor - Open File",
                    "/home/sampayo/Documentos",
                    "Text Files (*.txt);;C Files (*.c);;C++ Files(*.cpp);;All Files(*.*)"
                    );
        if(!fileName.isEmpty()){
            QFile file(fileName);
            if(file.open(QFile::ReadOnly)){
                ui->plainTextEdit->setPlainText(file.readAll());
                curFile = fileName;
                setWindowTitle(tr("%1[*]").arg(QFileInfo(curFile).fileName()));
            }else{
                QMessageBox::warning(
                            this,
                            "TextEditor",
                            tr("Cannot read file %1. \nError: %2")
                            .arg(fileName)
                            .arg(file.errorString()));
            }

        }
    }
}

void MainWindow::on_action_Archivo_Nuevo_triggered()
{
    if(maybeSave()){
        ui->plainTextEdit->clear();
    }
}

void MainWindow::closeEvent(QCloseEvent *event){
    if(maybeSave()){
        writeSettings();
        event->accept();
    }else{
        event->ignore();
    }
}

void MainWindow::readSettings()
{
    QSettings settings("DynOs","Proyecto Final");
    QPoint pos = settings.value("pos", QPoint(200,200)).toPoint();
    QSize size = settings.value("size",QSize(820,515)).toSize();
    resize(size);
    move(pos);
}

void MainWindow::writeSettings()
{
    QSettings settings("DynOs","Proyecto Final");
    settings.value("pos",pos());
    settings.value("size",size());
}


void MainWindow::on_action_Ejecutar_Archivo_triggered()
{
   Compilador c = Compilador() ;
   QString ruta = QFileInfo(curFile).filePath();

   qDebug()<<ruta;

   int resultado = c.compila(ruta.toLocal8Bit().constData());

   if(resultado == 1){
       ui->textEdit->setText("No se puede leer el archivo.");
       return;
   }
   if(resultado == 2){
       ui->textEdit->setText("Sintaxis CORRECTA!");
       return;
   }
   if(resultado == 3){
       ui->textEdit->setText("Analisis suspendido.");
       return;
   }
   ui->textEdit->setText("Sintaxis ERROR.");
}

void MainWindow::on_action_Cambiar_Fuente_triggered()
{
    bool ok;
    QFont fuente = QFontDialog::getFont(&ok,this);
    if(!ok)
        return;
    ui->plainTextEdit->setFont(fuente);
}

