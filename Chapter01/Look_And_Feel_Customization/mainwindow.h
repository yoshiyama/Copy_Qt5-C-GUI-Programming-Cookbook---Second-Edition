#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//名前空間によって，変数・関数名のスコープを名前空間に限定することができます．つまり，このようにSample名前空間内．．．やさしいC+ 高橋麻奈著
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
