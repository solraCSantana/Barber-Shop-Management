/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *adicionarCliente;
    QAction *buscarCliente;
    QAction *novoFuncionario;
    QAction *excluirFuncionario;
    QAction *adicionarServico;
    QAction *listarServicos;
    QAction *novoAcento;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_14;
    QTableWidget *tbwServicos;
    QMenuBar *menubar;
    QMenu *menuClientes;
    QMenu *menuFuncion_rios;
    QMenu *menuServi_os;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(692, 419);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(800, 600));
        adicionarCliente = new QAction(MainWindow);
        adicionarCliente->setObjectName(QString::fromUtf8("adicionarCliente"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icones/cliente.png"), QSize(), QIcon::Normal, QIcon::Off);
        adicionarCliente->setIcon(icon);
        buscarCliente = new QAction(MainWindow);
        buscarCliente->setObjectName(QString::fromUtf8("buscarCliente"));
        buscarCliente->setIcon(icon);
        novoFuncionario = new QAction(MainWindow);
        novoFuncionario->setObjectName(QString::fromUtf8("novoFuncionario"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icones/barbeiro.png"), QSize(), QIcon::Normal, QIcon::Off);
        novoFuncionario->setIcon(icon1);
        excluirFuncionario = new QAction(MainWindow);
        excluirFuncionario->setObjectName(QString::fromUtf8("excluirFuncionario"));
        excluirFuncionario->setIcon(icon1);
        adicionarServico = new QAction(MainWindow);
        adicionarServico->setObjectName(QString::fromUtf8("adicionarServico"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/icones/maquina.png"), QSize(), QIcon::Normal, QIcon::Off);
        adicionarServico->setIcon(icon2);
        listarServicos = new QAction(MainWindow);
        listarServicos->setObjectName(QString::fromUtf8("listarServicos"));
        listarServicos->setIcon(icon2);
        novoAcento = new QAction(MainWindow);
        novoAcento->setObjectName(QString::fromUtf8("novoAcento"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/icones/acento.png"), QSize(), QIcon::Normal, QIcon::Off);
        novoAcento->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMaximumSize(QSize(800, 511));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setTabletTracking(false);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab_14 = new QWidget();
        tab_14->setObjectName(QString::fromUtf8("tab_14"));
        tbwServicos = new QTableWidget(tab_14);
        tbwServicos->setObjectName(QString::fromUtf8("tbwServicos"));
        tbwServicos->setGeometry(QRect(0, 0, 621, 361));
        tabWidget->addTab(tab_14, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 692, 21));
        menuClientes = new QMenu(menubar);
        menuClientes->setObjectName(QString::fromUtf8("menuClientes"));
        menuFuncion_rios = new QMenu(menubar);
        menuFuncion_rios->setObjectName(QString::fromUtf8("menuFuncion_rios"));
        menuServi_os = new QMenu(menubar);
        menuServi_os->setObjectName(QString::fromUtf8("menuServi_os"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy2);
        toolBar->setIconSize(QSize(32, 32));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);

        menubar->addAction(menuClientes->menuAction());
        menubar->addAction(menuFuncion_rios->menuAction());
        menubar->addAction(menuServi_os->menuAction());
        menuClientes->addSeparator();
        menuClientes->addSeparator();
        menuClientes->addAction(adicionarCliente);
        menuClientes->addAction(buscarCliente);
        menuFuncion_rios->addAction(novoFuncionario);
        menuFuncion_rios->addAction(excluirFuncionario);
        menuServi_os->addAction(adicionarServico);
        menuServi_os->addAction(listarServicos);
        toolBar->addAction(adicionarCliente);
        toolBar->addSeparator();
        toolBar->addAction(novoFuncionario);
        toolBar->addSeparator();
        toolBar->addAction(novoAcento);
        toolBar->addSeparator();
        toolBar->addAction(adicionarServico);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        adicionarCliente->setText(QApplication::translate("MainWindow", "Adicionar", nullptr));
#ifndef QT_NO_TOOLTIP
        adicionarCliente->setToolTip(QApplication::translate("MainWindow", "Adicionar novo cliente", nullptr));
#endif // QT_NO_TOOLTIP
        buscarCliente->setText(QApplication::translate("MainWindow", "Buscar", nullptr));
#ifndef QT_NO_TOOLTIP
        buscarCliente->setToolTip(QApplication::translate("MainWindow", "Buscar por um cliente", nullptr));
#endif // QT_NO_TOOLTIP
        novoFuncionario->setText(QApplication::translate("MainWindow", "Novo", nullptr));
#ifndef QT_NO_TOOLTIP
        novoFuncionario->setToolTip(QApplication::translate("MainWindow", "Adicionar um novo funcion\303\241rio", nullptr));
#endif // QT_NO_TOOLTIP
        excluirFuncionario->setText(QApplication::translate("MainWindow", "Editar", nullptr));
#ifndef QT_NO_TOOLTIP
        excluirFuncionario->setToolTip(QApplication::translate("MainWindow", "Deletar um funcion\303\241rio", nullptr));
#endif // QT_NO_TOOLTIP
        adicionarServico->setText(QApplication::translate("MainWindow", "Adicionar", nullptr));
#ifndef QT_NO_TOOLTIP
        adicionarServico->setToolTip(QApplication::translate("MainWindow", "Adicionar novo servicio", nullptr));
#endif // QT_NO_TOOLTIP
        listarServicos->setText(QApplication::translate("MainWindow", "Listar", nullptr));
#ifndef QT_NO_TOOLTIP
        listarServicos->setToolTip(QApplication::translate("MainWindow", "Listar todos servi\303\247os", nullptr));
#endif // QT_NO_TOOLTIP
        novoAcento->setText(QApplication::translate("MainWindow", "Novo", nullptr));
#ifndef QT_NO_TOOLTIP
        novoAcento->setToolTip(QApplication::translate("MainWindow", "Criar um novo acento", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_14), QApplication::translate("MainWindow", "Agenda", nullptr));
        menuClientes->setTitle(QApplication::translate("MainWindow", "Clientes", nullptr));
        menuFuncion_rios->setTitle(QApplication::translate("MainWindow", "Funcion\303\241rios", nullptr));
        menuServi_os->setTitle(QApplication::translate("MainWindow", "Servi\303\247os", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
