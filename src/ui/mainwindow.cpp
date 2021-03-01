#include <QTabWidget>
#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    twProjectFiles = new QTabWidget(this);
    twProjectFiles->insertTab(0, nullptr, tr("Home"));
    twProjectFiles->setTabsClosable(true);


    setCentralWidget(twProjectFiles);
}

MainWindow::~MainWindow()
{
    delete ui;
}
