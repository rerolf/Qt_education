#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class helloworld; }
QT_END_NAMESPACE

class helloworld : public QWidget
{
    Q_OBJECT

public:
    helloworld(QWidget *parent = nullptr);
    ~helloworld();

private:
    Ui::helloworld *ui;
};
#endif // HELLOWORLD_H
