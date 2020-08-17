#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	MyClass* myclass = new MyClass;
	connect(this, &MainWindow::doNow, myclass, &MyClass::doSomething);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//    QMessageBox::information(this, "Hello", "Button has been clicked!");
    emit doNow();
    //Eng, Lee Zhi. Qt5 C++ GUI Programming Cookbook: Practical recipes for building cross-platform GUI applications, widgets, and animations with Qt 5, 2nd Edition (p.56). Packt Publishing. Kindle 版.
}
