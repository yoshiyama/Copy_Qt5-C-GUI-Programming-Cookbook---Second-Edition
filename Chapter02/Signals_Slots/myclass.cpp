#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent)
{
}

void MyClass::doSomething()
{
    QProcess *process = new QProcess(this);
    QString file = "explorer";
    QStringList arguments {" ."};
//    QMessageBox::information(nullptr, "Hello", "Button has been clicked!");
    process->start(file,arguments);
}
