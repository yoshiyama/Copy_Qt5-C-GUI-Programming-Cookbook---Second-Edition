#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "myclass.h"

namespace Ui {
class MainWindow;
}
//Inheritance
class MainWindow : public QMainWindow//基本クラスはQMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

signals:
	void doNow();

private slots:
	void on_pushButton_clicked();

private:
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
