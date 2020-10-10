#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::iniUI()
{



    data=new QLineEdit("");

    button_num0=new QPushButton("0");
    button_num1=new QPushButton("1");
    button_num2=new QPushButton("2");
    button_num3=new QPushButton("3");
    button_num4=new QPushButton("4");
    button_num5=new QPushButton("5");
    button_num6=new QPushButton("6");
    button_num7=new QPushButton("7");
    button_num8=new QPushButton("8");
    button_num9=new QPushButton("9");
    button_numA=new QPushButton("A");
    button_numB=new QPushButton("B");
    button_numC=new QPushButton("C");
    button_numD=new QPushButton("D");
    button_numE=new QPushButton("E");
    button_numF=new QPushButton("F");

    button_bin=new QPushButton("bin");
    button_oct=new QPushButton("oct");
    button_hex=new QPushButton("hex");

    button_equal=new QPushButton("=");
    button_jia=new QPushButton("+");
    button_jian=new QPushButton("-");
    button_cheng=new QPushButton("*");
    button_chu=new QPushButton("/");
    button_square=new QPushButton("X^Y");
    button_mod=new QPushButton("%");
    button_left=new QPushButton("(");
    button_right=new QPushButton(")");
    button_point=new QPushButton(".");
    button_ln=new QPushButton("ln");
    button_log=new QPushButton("log");
    button_cos=new QPushButton("cos");
    button_sin=new QPushButton("sin");
    button_tan=new QPushButton("tan");
    button_more=new QPushButton(">");
    button_less=new QPushButton("<");
    button_isequal=new QPushButton("==");
//    button_fang=new QPushButton("1/x");
    button_GCD=new QPushButton("最大公约数");
    button_LCM=new QPushButton("最小公倍数");


    button_clear=new QPushButton("clear");
    button_clearall=new QPushButton("clearall");


    connect(button_clearall,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_bin,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_oct,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_hex,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_clear,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_jia,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_jian,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_cheng,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_chu,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_square,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_left,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_right,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_mod,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_equal,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_point,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_ln,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_log,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_cos,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_sin,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_tan,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_more,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_less,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_isequal,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
//    connect(button_fang,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_GCD,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_LCM,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));







    connect(button_num0,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_num1,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_num2,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_num3,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_num4,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_num5,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_num6,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_num7,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_num8,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_num9,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_numA,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_numB,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_numC,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_numD,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_numE,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));
    connect(button_numF,SIGNAL(clicked(bool)),this,SLOT(button_option_clicked()));


    //布局
    data->setFixedHeight(45);
    button_num0->setMinimumHeight(45);
    button_num1->setMinimumHeight(45);
    button_num2->setMinimumHeight(45);
    button_num3->setMinimumHeight(45);
    button_num4->setMinimumHeight(45);
    button_num5->setMinimumHeight(45);
    button_num6->setMinimumHeight(45);
    button_num7->setMinimumHeight(45);
    button_num8->setMinimumHeight(45);
    button_num9->setMinimumHeight(45);
    button_numA->setMinimumHeight(45);
    button_numB->setMinimumHeight(45);
    button_numC->setMinimumHeight(45);
    button_numD->setMinimumHeight(45);
    button_numE->setMinimumHeight(45);
    button_numF->setMinimumHeight(45);

    button_equal->setMinimumHeight(45);
    button_jia->setMinimumHeight(45);
    button_jian->setMinimumHeight(45);
    button_cheng->setMinimumHeight(45);
    button_chu->setMinimumHeight(45);
    button_square->setMinimumHeight(45);
    button_mod->setMinimumHeight(45);
    button_left->setMinimumHeight(45);
    button_right->setMinimumHeight(45);
    button_clear->setMinimumHeight(45);
    button_hex->setMinimumHeight(45);
    button_oct->setMinimumHeight(45);
    button_bin->setMinimumHeight(45);
    button_clearall->setMinimumHeight(45);
    button_point->setMinimumHeight(45);
    button_ln->setMinimumHeight(45);
    button_log->setMinimumHeight(45);
    button_cos->setMinimumHeight(45);
    button_sin->setMinimumHeight(45);
    button_tan->setMinimumHeight(45);
    button_more->setMinimumHeight(45);
    button_less->setMinimumHeight(45);
    button_isequal->setMinimumHeight(45);
//    button_fang->setMinimumHeight(40);
    button_GCD->setMinimumHeight(45);
    button_LCM->setMinimumHeight(45);





    QGridLayout * layout = new QGridLayout;

   layout->addWidget(data,1,1,1,6,Qt::Alignment());

   layout->addWidget(button_GCD,2,6,Qt::Alignment());
   layout->addWidget(button_hex,2,5,Qt::Alignment());
   layout->addWidget(button_oct,2,4,Qt::Alignment());
   layout->addWidget(button_bin,2,3,Qt::Alignment());
   layout->addWidget(button_log,2,2,Qt::Alignment());
   layout->addWidget(button_ln,2,1,Qt::Alignment());

   layout->addWidget(button_square,3,1,Qt::Alignment());
   layout->addWidget(button_left,3,2,Qt::Alignment());
   layout->addWidget(button_right,3,3,Qt::Alignment());
   layout->addWidget(button_mod,3,4,Qt::Alignment());
   layout->addWidget(button_cos,3,5,Qt::Alignment());

   layout->addWidget(button_LCM,3,6,Qt::Alignment());

   layout->addWidget(button_jia,4,1,Qt::Alignment());
   layout->addWidget(button_jian,4,2,Qt::Alignment());
   layout->addWidget(button_cheng,4,3,Qt::Alignment());
   layout->addWidget(button_chu,4,4,Qt::Alignment());
   layout->addWidget(button_sin,4,5,Qt::Alignment());
   layout->addWidget(button_tan,4,6,Qt::Alignment());

   layout->addWidget(button_num5,5,1,Qt::Alignment());
   layout->addWidget(button_num6,5,2,Qt::Alignment());
   layout->addWidget(button_num7,5,3,Qt::Alignment());
   layout->addWidget(button_num8,5,4,Qt::Alignment());
   layout->addWidget(button_num9,5,5,Qt::Alignment());
   layout->addWidget(button_equal,5,6,Qt::Alignment());

   layout->addWidget(button_num0,6,1,Qt::Alignment());
   layout->addWidget(button_num1,6,2,Qt::Alignment());
   layout->addWidget(button_num2,6,3,Qt::Alignment());
   layout->addWidget(button_num3,6,4,Qt::Alignment());
   layout->addWidget(button_num4,6,5,Qt::Alignment());
   layout->addWidget(button_point,6,6,Qt::Alignment());

   layout->addWidget(button_numA,7,1,Qt::Alignment());
   layout->addWidget(button_numB,7,2,Qt::Alignment());
   layout->addWidget(button_numC,7,3,Qt::Alignment());
   layout->addWidget(button_numD,7,4,Qt::Alignment());
   layout->addWidget(button_numE,7,5,Qt::Alignment());
   layout->addWidget(button_numF,7,6,Qt::Alignment());

   layout->addWidget(button_more,8,1,Qt::Alignment());
   layout->addWidget(button_less,8,2,Qt::Alignment());
   layout->addWidget(button_isequal,8,3,Qt::Alignment());
   layout->addWidget(button_clearall,8,5,1,2,Qt::Alignment());


     layout->addWidget(button_clear,8,4,Qt::Alignment());

   layout->setMargin(12);
   setLayout(layout);
//   centerWindow->setLayout(layout);
}

int Widget::matchingboth(QString &str1, const char *str2)
{
    for(int i=0;i<str1.length();i++){
        for(unsigned int j=0;j<strlen(str2);j++){
            if(str1[i]==str2[j]){
                return i;
            }
        }
    }
    return -1;
}

int Widget::lastmatchingboth(QString &str1, const char *str2)
{
    for(int i=str1.length();i>0;i--){
        for( int j=0;j<(int)strlen(str2);j++){
            if(str1[i]==str2[j]){
                return i;
            }
        }
    }
    return -1;
}

void Widget::button_option_clicked()
{
    static int ClearLine=0;
    static int jingzhi=10;
    static int bracket_cnt=0;//圆括号计数
    QPushButton *btn=dynamic_cast<QPushButton*>(sender());
    QString line=data->text();
    QString text;
    if(btn->text()=="X^Y"){
        text="^";
    }else if(btn->text()=="最大公约数"){
        text="G";
    }else if(btn->text()=="最小公倍数"){
        text="L";
    }else{
        text=btn->text();
    }
    if(ClearLine){
        data->setText("");
        line.clear();
        ClearLine=0;
        jingzhi=10;
    }else if(text=="hex"||text=="oct"||text=="bin"){   //处理进制
        QString tmp=line.right(1);

        if(tmp.length()&&(tmp[0]==")"||tmp[0]==".")){  //0x 前不能有右括号，小数点
            return;
        }
        if(tmp.length()&&matchingboth(tmp,"0123456789ABCDEFxb")!=-1){
            return;
        }
        if(text=="hex"){
            line+="0x";
            jingzhi=16;
        }else if(text=="oct"){
            line+="0h";
            jingzhi=8;
        }else if(text=="bin"){
            line+="0b";
            jingzhi=2;
        }
    }else if((text>="0"&&text<="9")||(text>="A"&&text<="F")){
        QString tmp=line.right(1);
        if(tmp.length()&&tmp[0]==")"){  //数字前面不能有右括号
            return;
        }
        if((text>="A"&&text<="F")&&jingzhi!=16){
            return;
        }
        if(text>="8"&&jingzhi==8){
            return;
        }
        if(text>="2"&&jingzhi==2){
            return;
        }
        line+=text;
    }else if(text=="."){
        QString tmp=line.right(1);
        if(tmp.length()){   //小数点前必须为数字
            if(matchingboth(tmp,"0123456789")==-1){  //没找到数字
                return;
            }
        }else{
            return;   //小数点前为空
        }

        int pos=lastmatchingboth(line,"+-*/.()%^sng");//碰到加减乘除就会停，这样就把搜索范围控制在一个小数点内了
        if(pos!=-1 &&line[pos]=="."){       //一串数字只能有一个小数点
            return ;
        }
        line+=text;
    }else if(text=="+"||text=="-"){    //如何区分十进0和8进制负号位
        QString tmp=line.right(1);

        if(tmp.length()&&(tmp[0]=="."||tmp[0]=="b"||tmp[0]=="x"||tmp[0]=="h")){
            return;     //加减号前面不能为小数点,b,x,h
        }

        tmp=line.right(2);
        if(tmp.length()==2){
            if((tmp=="ln"||tmp=="og")&&text=="-"){
                return;
            }
        }
//        if(tmp.length()==2){
//            if(tmp[1]=="0"&&jingzhi==8&&(matchingboth(tmp,"+-/*^%(")==0)){  //避免8进制0前缀与8进制0弄混
//                return;
//            }
//        }else if(tmp.length()==1&&jingzhi==8&&tmp[0]=="0"){
//            return;
//        }

        if(tmp.length()==2){        //前面不能有连续2次加减乘除，连续2位可以免去负号的影响
            if(tmp[0]=="+"||tmp[0]=="-"||tmp[0]=="*"||tmp[0]=="/"||tmp[0]=="("||tmp[0]=="^"||tmp[0]=="%"){
                if(tmp[1]=="+"||tmp[1]=="-"||tmp[1]=="*"||tmp[1]=="/"||tmp[1]=="^"||tmp[1]=="%"){
                    return;
                }
            }
        }
        line+=text;
        jingzhi=10;
    }else if(text=="*"||text=="/"||text=="^"||text=="%"||text=="log"||text==">"||text=="<"||text=="=="||text=="G"||text=="L"){  //乘除  平方
        QString tmp=line.right(1);
        if(tmp.length()){       //不能有连续的2次运算符
            if(matchingboth(tmp,"(.+-*/^%bxg><=GLh")!=-1){
                return;
            }
        }else{
            return;
        }
//        tmp=line.right(2);
//        if(tmp.length()==2){
//            if(tmp[1]=="0"&&jingzhi==8&&(matchingboth(tmp,"+-/*^%(")==0)){  //避免8进制0前缀与8进制0弄混
//                return;
//            }
//        }else if(tmp.length()==1&&jingzhi==8&&tmp[0]=="0"){
//            return;
//        }
        line+=text;
        jingzhi=10;
    }else if(text=="cos"||text=="sin"||text=="tan"||text=="ln"){
        if(!line.isEmpty()){
            QString tmp=line.right(1);
            if(tmp.length()){       //不能有连续的2次运算符
                if(matchingboth(tmp,"0123456789ABCDEFxbh.ns")!=-1){
                    return;
                }
            }
        }
        line+=text;
        jingzhi=10;
    }else if(text=="("){   //左括号
        QString tmp=line.right(1);
        if(tmp.length()){
            if(matchingboth(tmp,")0123456789ABCDEFxbh.")!=-1){
                return;
            }
        }
        tmp=line.right(2);
        if(tmp.length()==2){
            if(tmp[0]=="+"||tmp[0]=="-"||tmp[0]=="/"||tmp[0]=="*"||tmp[0]=="^"||tmp[0]=="%"){
                if(tmp[1]=="+"||tmp[1]=="-"||tmp[1]=="/"||tmp[1]=="*"||tmp[1]=="^"||tmp[1]=="%"){
                    return;
                }
            }
        }
        line+=text;
        bracket_cnt++;
        jingzhi=10;
    }else if(text==")"){   //右括号
        QString tmp=line.right(1);
        if(bracket_cnt==0){
            return;
        }
        if(tmp.length()){
            if(matchingboth(tmp,"+-*/.(^%xbsngh")!=-1){
                return;
            }
        }else{
            return;
        }
        line+=text;
        bracket_cnt--;
        jingzhi=10;
    }else if(text=="clear"){
        if(jingzhi==16||jingzhi==2||jingzhi==8){
                   QString tmp=line.right(2);
                    if(tmp[1]=="x"||tmp[1]=="b"||tmp[1]=="h"){
                           line.chop(2);
                           jingzhi=10;
                    }else if(line.length()){
                        line.chop(1);
                    }
               }else{
                   QString tmp=line.right(2);
                   if(tmp.length()==2){
                         if(tmp=="an"||tmp=="os"||tmp=="og"||tmp=="in"){
                              line.chop(3);
                         }else if(tmp=="ln"||tmp=="=="){
                            line.chop(2);
                         }
                   }
                   tmp=line.right(1);
                   if(tmp.length()==1){
                       if(tmp[0]=="x"||tmp[0]=="b"||tmp[0]=="h"){
                           line.chop(2);
                       }
                       else{
                           line.chop(1);
                       }
                   }
       }

    }else if(text=="clearall"){
        line.clear();
        bracket_cnt=0;
        jingzhi=10;
    }else if(text=="="&&line.length()){
        QString ret=Result(line);
        if(ret==NULL){
            line+=":";
            line+="请注意除数为0或其他不能小于等于0的情况";
        }else if(ret=="Error"){
            line+=":";
            line+="格式出错";
        }else{
            line +="=";
            line +=ret;
        }
        ClearLine=1;
    }
    data->setText(line);
}

QString Widget::vildnum(QString str)
{
    QString num;
    if(str.indexOf(".")==-1){
        return str;
    }
    while(str.length()>1){        //可以防止结果为0.000时0被除掉

         num=str.right(1);
         if(num=="."||num=="0"){
                str.chop(1);
                if(num=="."){
                    return str;
                }
         }else{
              return str;
         }
    }
    return str;
}

QQueue<QString> Widget::Split(const QString &exp)
{
    QQueue<QString> ret;
    QString num="";
    QString hanshu="";
    for(int i=0;i<exp.length();i++){
        if(exp[i]=="."||(exp[i]>="0"&&exp[i]<="9")||(exp[i]>="A"&&exp[i]<="F")||exp[i]=="x"||exp[i]=="b"||exp[i]=="h"){
            num+=exp[i];
        }
        else if(exp[i]=="("||exp[i]==")"||exp[i]=="*"||exp[i]=="/"||exp[i]=="^"||exp[i]=="%"||exp[i]==">"||exp[i]=="<"||exp[i]=="G"||exp[i]=="L"){
            if(!num.isEmpty()){
                ret.enqueue(num);
                num.clear();
            }
            ret.enqueue(exp[i]);
        }else if((exp[i]=="c"&&exp[i+1]=="o")||(exp[i]=="s"&&exp[i+1]=="i")||(exp[i]=="t"&&exp[i+1]=="a")||(exp[i]=="l"&&exp[i+1]=="o")){
            if(!num.isEmpty()){
                ret.enqueue(num);
                num.clear();
            }

            for(int j=0;j<3;j++){
                 hanshu+=exp[i+j];
            }
            i=i+2;
            ret.enqueue(hanshu);
            hanshu.clear();
        }else if((exp[i]=="l"&&exp[i+1]=="n")||(exp[i]=="="&&exp[i+1]=="=")){
            if(!num.isEmpty()){
                ret.enqueue(num);
                num.clear();
            }
            for(int j=0;j<2;j++){
                 hanshu+=exp[i+j];
            }
            i=i+1;
            ret.enqueue(hanshu);
            hanshu.clear();
        }
        else if(exp[i]=="+"||exp[i]=="-"){
            if(num.isEmpty()){
                num+=exp[i];
            }else{
                ret.enqueue(num);
                num.clear();
                ret.enqueue(exp[i]);
            }
        }
    }
    //遍历完成

    if(!num.isEmpty()){
        ret.enqueue(num);
        num.clear();
    }

    return ret;
}

QQueue<QString> Widget::Transfer(QQueue<QString> &exp)
{
        QStack<QString> stack;
        QQueue<QString> ret;
        bool num_ok;
        bool ok;
        QString symbol;

        while(!exp.isEmpty()){
            symbol=exp.dequeue();
            if(symbol.length()>=2){
                if(symbol.startsWith("0x")){
                        int val;
                        symbol=symbol.mid(2);
                        val=symbol.toInt(&ok,16);
                        symbol=symbol.setNum(val,10);
                }else if(symbol.startsWith("-0x")){
                    int val;
                    symbol=symbol.mid(3);
                    val=symbol.toInt(&ok,16);
                    symbol=symbol.setNum(val,10);
                    symbol="-"+symbol;
                }else if(symbol.startsWith("+0x")){
                    int val;
                    symbol=symbol.mid(3);
                    val=symbol.toInt(&ok,16);
                    symbol=symbol.setNum(val,10);
                    symbol="+"+symbol;
                }
                else if(symbol.startsWith("0b")){
                    symbol=symbol.mid(2);
                    int val=symbol.toInt(&ok,2);
                    symbol=symbol.setNum(val,10);
                }else if(symbol.startsWith("-0b")){
                    int val;
                    symbol=symbol.mid(3);
                    val=symbol.toInt(&ok,2);
                    symbol=symbol.setNum(val,10);
                    symbol="-"+symbol;
                }else if(symbol.startsWith("+0b")){
                    int val;
                    symbol=symbol.mid(3);
                    val=symbol.toInt(&ok,2);
                    symbol=symbol.setNum(val,10);
                    symbol="+"+symbol;
                }
                else if(symbol.startsWith("0h")){
                    int val;
                    symbol=symbol.mid(2);
                    val=symbol.toInt(&ok,8);
                    symbol=symbol.setNum(val,10);
                }else if(symbol.startsWith("-0h")){
                    int val;
                    symbol=symbol.mid(3);
                    val=symbol.toInt(&ok,8);
                    symbol=symbol.setNum(val,10);
                    symbol="-"+symbol;
                }else if(symbol.startsWith("+0h")){
                    int val;
                    symbol=symbol.mid(3);
                    val=symbol.toInt(&ok,8);
                    symbol=symbol.setNum(val,10);
                    symbol="+"+symbol;
                }
            }
            symbol.toDouble(&num_ok);//如果symbol是数字字符串则会被转成double，同时num_ok为true

            if(num_ok==true){
                stack.push(symbol);//数字入栈；
            }else if(symbol=="L"||symbol=="G"){
                while(!stack.isEmpty()&&(stack.top())!="("){
                    ret.enqueue(stack.pop());
                }
                stack.push(symbol);
            }
            else if(symbol==">"||symbol=="<"||symbol=="=="){
                while(!stack.isEmpty()&&(stack.top())!="("){
                    ret.enqueue(stack.pop());
                }
                stack.push(symbol);
            }else if(symbol=="+"||symbol=="-"){
                while (!stack.isEmpty()&&(stack.top())!="(") {
                   ret.enqueue(stack.pop());
                }
                stack.push(symbol);
            }else if(symbol=="*"||symbol=="/"||symbol=="%"){
                while (!stack.isEmpty()&&(stack.top()!="(")&&(stack.top()!="+")&&(stack.top()!="-")) {
                   ret.enqueue(stack.pop());
                }
                stack.push(symbol);
            }else if (symbol=="^") {
                while (!stack.isEmpty()&&(stack.top()!="(")&&(stack.top()!="+")&&(stack.top()!="-")&&(stack.top()!="*")&&(stack.top()!="/")&&(stack.top()!="%")) {
                   ret.enqueue(stack.pop());
                }
                stack.push(symbol);
            }else if(symbol=="cos"||symbol=="sin"||symbol=="tan"||symbol=="log"||symbol=="ln"){
                while (!stack.isEmpty()&&(stack.top()!="(")&&(stack.top()!="+")&&(stack.top()!="-")&&(stack.top()!="*")&&(stack.top()!="/")&&(stack.top()!="%")&&(stack.top()!="^")) {
                   ret.enqueue(stack.pop());
                }
                stack.push(symbol);
            }
            else if(symbol=="("){
                stack.push(symbol);
            }else if(symbol==")"){
                while (!stack.isEmpty()&&(stack.top())!="("){
                   ret.enqueue(stack.pop());
                }
                if((stack.top())=="("){
                    stack.pop();
                }
            }
        }
        while(!stack.isEmpty()&&(stack.top())!="("){
            ret.enqueue(stack.pop());
        }
        return ret;

}

QString Widget::QCalculate(QString &l, QString &op, QString &r)
{
    double left,right,result;
    QString ret="";
    left=l.toDouble();
    right=r.toDouble();

    if(op=="+"){
        result=left+right;
    }else if(op=="-"){
        result=left-right;
    }else if(op=="*"){
        result=left*right;
    }else if(op=="/"){
        if( (right>(-0.000000000000001)) && (right<(0.000000000000001)) ){    //判断除数为0
                return NULL;
        }else{
            result=left/right;
        }
    }else if(op=="%"){
        if( (right>(-0.000000000000001)) && (right<(0.000000000000001)) ){    //判断除数为0
                return NULL;
        }else{
            result=(int)left%(int)right;
        }
    }else if(op=="^"){
        result=pow(left,right);
    }else if(op=="log"){
        if((left<(0.000000000000001))||(right<(0.000000000000001))){
            return NULL;
        }else{
            result=qLn(right)/qLn(left);
        }
    }else if(op==">"){
        if(left>right){
            result=1;
        }else{
            result=0;
        }
    }else if(op=="<"){
        if(left<right){
            result=1;
        }else{
            result=0;
        }
    }else if(op=="=="){
        if(left==right){
            result=1;
        }else{
            result=0;
        }
    }else if(op=="L"){
        int a=(int)left;
        int b=(int)right;
        if(a==0||b==0){
            return NULL;
        }
        int res;
        int mid;
        if(b>a){
            mid=b;
            b=a;
            a=mid;
        }
        while (a%b) {
           res=a;
           a=b;
           b=res%b;
        }
        result=left*right/b;

    }else if(op=="G"){
        int a=(int)left;
        int b=(int)right;
        if(a==0||b==0){
            return NULL;
        }
        int res;
        int mid;
        if(b>a){
            mid=b;
            b=a;
            a=mid;
        }
        while (a%b) {
           res=a;
           a=b;
           b=res%b;
        }
        result=b;
    }

   ret.sprintf("%f",result);
   return ret;
}

QString Widget::HCalculate(QString &op, QString &r)
{
    double right,result;
    QString ret="";
    if(!r.isEmpty()){
        right=r.toDouble();
        if(op=="cos"){
            result=qCos(right);
        }else if(op=="sin"){
            result=qSin(right);
        }else if(op=="tan"){
            result=qTan(right);
        }else if(op=="ln"){
            if(right>0){
                result=qLn(right);
            }else{
                return NULL;
            }
        }
        ret.sprintf("%f",result);
        return ret;
    }else{
         return NULL;
    }

}



QString Widget::Calculate(QQueue<QString> &exp)
{
    QStack<QString> stack;
    QString symbol,L,R,op,ret;
    bool num_ok;

    while(!exp.isEmpty()){
        symbol=exp.dequeue();

        symbol.toDouble(&num_ok);

        if(num_ok){
            stack.push(symbol);  //数字压栈
        }else{
            if((symbol=="+")||(symbol=="-")||(symbol=="*")||(symbol=="/")||(symbol=="%")||(symbol=="^")||(symbol=="log")||(symbol==">")||(symbol=="<")||(symbol=="==")||symbol=="G"||symbol=="L"){
                if(stack.size()<2){  //栈中数字小于2但有运算符
                    return "Error";
                }
                R=stack.pop();
                L=stack.pop();
                ret=QCalculate(L,symbol,R);
            }else{
                if(stack.isEmpty()){
                    return "Error";
                }
                R=stack.pop();
                ret=HCalculate(symbol,R);
            }
            if(ret==NULL){
                return ret;
            }
            stack.push(ret);
        }
    }
    if(stack.size()==1){    //遍历完成
        return vildnum(stack.pop());//处理结果后面的多于的0和小数点
    }
    else{
        return "Error";
    }
}

QString Widget::Result(const QString &exp)
{
    QQueue<QString> q=Split(exp);
    q=Transfer(q);
    return Calculate(q);
}
