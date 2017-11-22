/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Archivo_Nuevo;
    QAction *action_Abrir_Archivo;
    QAction *action_Guardar;
    QAction *action_Guardar_Como;
    QAction *action_Salir;
    QAction *action_Cerrar_Arcivo;
    QAction *action_Cortar;
    QAction *action_Copiar;
    QAction *action_Pegar;
    QAction *action_Seleccionar_Todo;
    QAction *action_Deshacer;
    QAction *action_Rehacer;
    QAction *action_Borrar;
    QAction *action_Ejecutar_Archivo;
    QAction *action_Cambiar_Fuente;
    QAction *action_Color;
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_Archivo;
    QMenu *menu_Editar;
    QMenu *menu_Fuente;
    QMenu *menu_Ejecutar;
    QMenu *menu_Ayuda;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(790, 485);
        action_Archivo_Nuevo = new QAction(MainWindow);
        action_Archivo_Nuevo->setObjectName(QStringLiteral("action_Archivo_Nuevo"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/iconos/nuevo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Archivo_Nuevo->setIcon(icon);
        action_Abrir_Archivo = new QAction(MainWindow);
        action_Abrir_Archivo->setObjectName(QStringLiteral("action_Abrir_Archivo"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../build-proyectoFinal-Desktop_Qt_5_7_0_GCC_64bit-Debug/Iconos/abrir-el-archivo-icono-7135-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Abrir_Archivo->setIcon(icon1);
        action_Guardar = new QAction(MainWindow);
        action_Guardar->setObjectName(QStringLiteral("action_Guardar"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../build-proyectoFinal-Desktop_Qt_5_7_0_GCC_64bit-Debug/Iconos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Guardar->setIcon(icon2);
        action_Guardar_Como = new QAction(MainWindow);
        action_Guardar_Como->setObjectName(QStringLiteral("action_Guardar_Como"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../build-proyectoFinal-Desktop_Qt_5_7_0_GCC_64bit-Debug/Iconos/como-un-registro-en-papel-icono-9371-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Guardar_Como->setIcon(icon3);
        action_Salir = new QAction(MainWindow);
        action_Salir->setObjectName(QStringLiteral("action_Salir"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../build-proyectoFinal-Desktop_Qt_5_7_0_GCC_64bit-Debug/Iconos/cerrar-borrar-la-salida-icono-8537-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Salir->setIcon(icon4);
        action_Salir->setShortcutContext(Qt::WidgetShortcut);
        action_Cerrar_Arcivo = new QAction(MainWindow);
        action_Cerrar_Arcivo->setObjectName(QStringLiteral("action_Cerrar_Arcivo"));
        action_Cortar = new QAction(MainWindow);
        action_Cortar->setObjectName(QStringLiteral("action_Cortar"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../build-proyectoFinal-Desktop_Qt_5_7_0_GCC_64bit-Debug/Iconos/cortar-icono-9536-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cortar->setIcon(icon5);
        action_Copiar = new QAction(MainWindow);
        action_Copiar->setObjectName(QStringLiteral("action_Copiar"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../build-proyectoFinal-Desktop_Qt_5_7_0_GCC_64bit-Debug/Iconos/copiar-los-archivos-de-documentos-de-icono-4275-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copiar->setIcon(icon6);
        action_Pegar = new QAction(MainWindow);
        action_Pegar->setObjectName(QStringLiteral("action_Pegar"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../build-proyectoFinal-Desktop_Qt_5_7_0_GCC_64bit-Debug/Iconos/pegar-icono-6798-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Pegar->setIcon(icon7);
        action_Seleccionar_Todo = new QAction(MainWindow);
        action_Seleccionar_Todo->setObjectName(QStringLiteral("action_Seleccionar_Todo"));
        action_Deshacer = new QAction(MainWindow);
        action_Deshacer->setObjectName(QStringLiteral("action_Deshacer"));
        action_Deshacer->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QStringLiteral("../build-proyectoFinal-Desktop_Qt_5_7_0_GCC_64bit-Debug/Iconos/red-deshacer-icono-9734-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Deshacer->setIcon(icon8);
        action_Rehacer = new QAction(MainWindow);
        action_Rehacer->setObjectName(QStringLiteral("action_Rehacer"));
        action_Rehacer->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QStringLiteral("../build-proyectoFinal-Desktop_Qt_5_7_0_GCC_64bit-Debug/Iconos/azul-otra-vez-icono-3840-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Rehacer->setIcon(icon9);
        action_Borrar = new QAction(MainWindow);
        action_Borrar->setObjectName(QStringLiteral("action_Borrar"));
        action_Ejecutar_Archivo = new QAction(MainWindow);
        action_Ejecutar_Archivo->setObjectName(QStringLiteral("action_Ejecutar_Archivo"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/iconos/Play-2-Hot-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Ejecutar_Archivo->setIcon(icon10);
        action_Cambiar_Fuente = new QAction(MainWindow);
        action_Cambiar_Fuente->setObjectName(QStringLiteral("action_Cambiar_Fuente"));
        action_Color = new QAction(MainWindow);
        action_Color->setObjectName(QStringLiteral("action_Color"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(70, 10, 681, 331));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(70, 350, 681, 71));
        textEdit->setInputMethodHints(Qt::ImhMultiLine);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 790, 19));
        menu_Archivo = new QMenu(menuBar);
        menu_Archivo->setObjectName(QStringLiteral("menu_Archivo"));
        menu_Editar = new QMenu(menuBar);
        menu_Editar->setObjectName(QStringLiteral("menu_Editar"));
        menu_Fuente = new QMenu(menuBar);
        menu_Fuente->setObjectName(QStringLiteral("menu_Fuente"));
        menu_Ejecutar = new QMenu(menuBar);
        menu_Ejecutar->setObjectName(QStringLiteral("menu_Ejecutar"));
        menu_Ayuda = new QMenu(menuBar);
        menu_Ayuda->setObjectName(QStringLiteral("menu_Ayuda"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Archivo->menuAction());
        menuBar->addAction(menu_Editar->menuAction());
        menuBar->addAction(menu_Fuente->menuAction());
        menuBar->addAction(menu_Ejecutar->menuAction());
        menuBar->addAction(menu_Ayuda->menuAction());
        menu_Archivo->addAction(action_Archivo_Nuevo);
        menu_Archivo->addSeparator();
        menu_Archivo->addAction(action_Abrir_Archivo);
        menu_Archivo->addAction(action_Cerrar_Arcivo);
        menu_Archivo->addSeparator();
        menu_Archivo->addAction(action_Guardar);
        menu_Archivo->addAction(action_Guardar_Como);
        menu_Archivo->addSeparator();
        menu_Archivo->addAction(action_Salir);
        menu_Editar->addAction(action_Deshacer);
        menu_Editar->addAction(action_Rehacer);
        menu_Editar->addSeparator();
        menu_Editar->addAction(action_Cortar);
        menu_Editar->addAction(action_Copiar);
        menu_Editar->addAction(action_Pegar);
        menu_Editar->addAction(action_Seleccionar_Todo);
        menu_Editar->addAction(action_Borrar);
        menu_Fuente->addAction(action_Cambiar_Fuente);
        menu_Fuente->addAction(action_Color);
        menu_Ejecutar->addAction(action_Ejecutar_Archivo);
        mainToolBar->addAction(action_Archivo_Nuevo);
        mainToolBar->addAction(action_Abrir_Archivo);
        mainToolBar->addAction(action_Guardar);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Deshacer);
        mainToolBar->addAction(action_Rehacer);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Cortar);
        mainToolBar->addAction(action_Copiar);
        mainToolBar->addAction(action_Pegar);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Ejecutar_Archivo);

        retranslateUi(MainWindow);
        QObject::connect(action_Salir, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(action_Copiar, SIGNAL(triggered()), plainTextEdit, SLOT(copy()));
        QObject::connect(action_Deshacer, SIGNAL(triggered()), plainTextEdit, SLOT(undo()));
        QObject::connect(action_Rehacer, SIGNAL(triggered()), plainTextEdit, SLOT(redo()));
        QObject::connect(action_Cortar, SIGNAL(triggered()), plainTextEdit, SLOT(cut()));
        QObject::connect(action_Pegar, SIGNAL(triggered()), plainTextEdit, SLOT(paste()));
        QObject::connect(action_Seleccionar_Todo, SIGNAL(triggered()), plainTextEdit, SLOT(selectAll()));
        QObject::connect(action_Borrar, SIGNAL(triggered()), plainTextEdit, SLOT(clear()));
        QObject::connect(plainTextEdit, SIGNAL(modificationChanged(bool)), MainWindow, SLOT(setWindowModified(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Proyecto Final[*]", 0));
        action_Archivo_Nuevo->setText(QApplication::translate("MainWindow", "Archivo &Nuevo", 0));
        action_Archivo_Nuevo->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        action_Abrir_Archivo->setText(QApplication::translate("MainWindow", "&Abrir Archivo", 0));
        action_Abrir_Archivo->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        action_Guardar->setText(QApplication::translate("MainWindow", "&Guardar", 0));
        action_Guardar->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        action_Guardar_Como->setText(QApplication::translate("MainWindow", "Guardar &Como", 0));
        action_Guardar_Como->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0));
        action_Salir->setText(QApplication::translate("MainWindow", "&Salir", 0));
        action_Cerrar_Arcivo->setText(QApplication::translate("MainWindow", "&Cerrar Archivo", 0));
        action_Cortar->setText(QApplication::translate("MainWindow", "&Cortar", 0));
        action_Cortar->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        action_Copiar->setText(QApplication::translate("MainWindow", "&Copiar", 0));
        action_Copiar->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        action_Pegar->setText(QApplication::translate("MainWindow", "&Pegar", 0));
        action_Pegar->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0));
        action_Seleccionar_Todo->setText(QApplication::translate("MainWindow", "&Seleccionar Todo", 0));
        action_Seleccionar_Todo->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0));
        action_Deshacer->setText(QApplication::translate("MainWindow", "&Deshacer", 0));
        action_Deshacer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        action_Rehacer->setText(QApplication::translate("MainWindow", "&Rehacer", 0));
        action_Rehacer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0));
        action_Borrar->setText(QApplication::translate("MainWindow", "&Borrar", 0));
        action_Borrar->setShortcut(QApplication::translate("MainWindow", "Backspace", 0));
        action_Ejecutar_Archivo->setText(QApplication::translate("MainWindow", "&Ejecutar Archivo", 0));
        action_Ejecutar_Archivo->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0));
        action_Cambiar_Fuente->setText(QApplication::translate("MainWindow", "&Tipo", 0));
        action_Color->setText(QApplication::translate("MainWindow", "&Color", 0));
        menu_Archivo->setTitle(QApplication::translate("MainWindow", "&Archivo", 0));
        menu_Editar->setTitle(QApplication::translate("MainWindow", "&Editar", 0));
        menu_Fuente->setTitle(QApplication::translate("MainWindow", "&Fuente", 0));
        menu_Ejecutar->setTitle(QApplication::translate("MainWindow", "&Ejecutar", 0));
        menu_Ayuda->setTitle(QApplication::translate("MainWindow", "&Ayuda", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
