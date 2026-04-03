#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QVBoxLayout>

#include "viewport/viewport3d.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    auto *viewport = new Viewport3D(ui->viewportHost);
    auto *layout = new QVBoxLayout(ui->viewportHost);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(viewport);
}

MainWindow::~MainWindow()
{
    delete ui;
}
