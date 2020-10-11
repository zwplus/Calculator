#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPushButton>
#include<QLineEdit>
#include<QLayout>
#include<QString>
#include <QStack>
#include <QQueue>
#include <math.h>







namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

  private:

    QLineEdit *data;//输出行

    QPushButton *button_clear;//回退一格
    QPushButton *button_clearall;//清除全部
    QPushButton *button_equal;//=
    QPushButton *button_jia;//+
    QPushButton *button_jian;//-
    QPushButton *button_cheng;//*
    QPushButton *button_chu;//  /
    QPushButton *button_square;// 平方
    QPushButton *button_point;//小数点
    QPushButton *button_mod;//求余
    QPushButton *button_rooting;
    QPushButton *button_left; //左括号
    QPushButton *button_right;//右括号

    QPushButton *button_num0;
    QPushButton *button_num1;
    QPushButton *button_num2;
    QPushButton *button_num3;
    QPushButton *button_num4;
    QPushButton *button_num5;
    QPushButton *button_num6;
    QPushButton *button_num7;
    QPushButton *button_num8;
    QPushButton *button_num9;
    QPushButton *button_numA;
    QPushButton *button_numB;
    QPushButton *button_numC;
    QPushButton *button_numD;
    QPushButton *button_numE;
    QPushButton *button_numF;
//    QPushButton *button_numH;

    //进制表示位
    QPushButton *button_bin;
    QPushButton *button_oct;
    QPushButton *button_hex;

public:
    void iniUI();

    int matchingboth(QString &str1,const char *str2);   //匹配str1和str2，判断str1中是否含有str2的字符
    int lastmatchingboth(QString &str1,const char *str2);//反向匹配str1和str2

private slots:
    void button_option_clicked();


public:
    QString vildnum(QString str);

    QQueue<QString> Split(const QString& exp);//分离前缀
    QQueue<QString> Transfer(QQueue<QString>& exp);//中缀转后缀

    QString QCalculate(QString& l,QString& op,QString& r );//计算2数值

    QString Calculate(QQueue<QString>& exp);//计算后缀表达式

    QString Result(const QString& exp);//计算函数





private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
