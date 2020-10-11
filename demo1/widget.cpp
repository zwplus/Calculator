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
    data->setFixedHeight(30);
    button_num0->setMinimumHeight(40);
    button_num1->setMinimumHeight(40);
    button_num2->setMinimumHeight(40);
    button_num3->setMinimumHeight(40);
    button_num4->setMinimumHeight(40);
    button_num5->setMinimumHeight(40);
    button_num6->setMinimumHeight(40);
    button_num7->setMinimumHeight(40);
    button_num8->setMinimumHeight(40);
    button_num9->setMinimumHeight(40);
    button_numA->setMinimumHeight(40);
    button_numB->setMinimumHeight(40);
    button_numC->setMinimumHeight(40);
    button_numD->setMinimumHeight(40);
    button_numE->setMinimumHeight(40);
    button_numF->setMinimumHeight(40);

    button_equal->setMinimumHeight(40);
    button_jia->setMinimumHeight(40);
    button_jian->setMinimumHeight(40);
    button_cheng->setMinimumHeight(40);
    button_chu->setMinimumHeight(40);
    button_square->setMinimumHeight(40);
    button_mod->setMinimumHeight(40);
    button_left->setMinimumHeight(40);
    button_right->setMinimumHeight(40);
    button_clear->setMinimumHeight(40);
    button_hex->setMinimumHeight(40);
    button_oct->setMinimumHeight(40);
    button_bin->setMinimumHeight(40);
    button_clearall->setMinimumHeight(40);






    QGridLayout * layout = new QGridLayout;

   layout->addWidget(data,1,1,1,5,Qt::Alignment());

   layout->addWidget(button_clearall,2,5,Qt::Alignment());
   layout->addWidget(button_hex,2,4,Qt::Alignment());
   layout->addWidget(button_oct,2,3,Qt::Alignment());
   layout->addWidget(button_bin,2,2,Qt::Alignment());
   layout->addWidget(button_numA,2,1,Qt::Alignment());

   layout->addWidget(button_square,3,1,Qt::Alignment());
   layout->addWidget(button_left,3,2,Qt::Alignment());
   layout->addWidget(button_right,3,3,Qt::Alignment());
   layout->addWidget(button_mod,3,4,Qt::Alignment());
   layout->addWidget(button_clear,3,5,Qt::Alignment());

   layout->addWidget(button_jia,4,1,Qt::Alignment());
   layout->addWidget(button_jian,4,2,Qt::Alignment());
   layout->addWidget(button_cheng,4,3,Qt::Alignment());
   layout->addWidget(button_chu,4,4,Qt::Alignment());
   layout->addWidget(button_equal,4,5,Qt::Alignment());

   layout->addWidget(button_num5,5,1,Qt::Alignment());
   layout->addWidget(button_num6,5,2,Qt::Alignment());
   layout->addWidget(button_num7,5,3,Qt::Alignment());
   layout->addWidget(button_num8,5,4,Qt::Alignment());
   layout->addWidget(button_num9,5,5,Qt::Alignment());

   layout->addWidget(button_num0,6,1,Qt::Alignment());
   layout->addWidget(button_num1,6,2,Qt::Alignment());
   layout->addWidget(button_num2,6,3,Qt::Alignment());
   layout->addWidget(button_num3,6,4,Qt::Alignment());
   layout->addWidget(button_num4,6,5,Qt::Alignment());

   layout->addWidget(button_numB,7,1,Qt::Alignment());
   layout->addWidget(button_numC,7,2,Qt::Alignment());
   layout->addWidget(button_numD,7,3,Qt::Alignment());
   layout->addWidget(button_numE,7,4,Qt::Alignment());
   layout->addWidget(button_numF,7,5,Qt::Alignment());

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
        for(int j=0;j<strlen(str2);j++){
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
    }else{
        text=btn->text();
    }
    if(ClearLine){
        data->setText("");
        line.clear();
        ClearLine=0;
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
            line+="0";
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

        int pos=lastmatchingboth(line,"+-*/.()%^");//碰到加减乘除就会停，这样就把搜索范围控制在一个小数点内了
        if(pos!=-1 &&line[pos]=="."){       //一串数字只能有一个小数点
            return ;
        }
        line+=text;
    }else if(text=="+"||text=="-"){    //如何区分十进0和8进制负号位
        QString tmp=line.right(1);

        if(tmp.length()&&(tmp[0]=="."||tmp[0]=="b"||tmp[0]=="x")){
            return;     //加减号前面不能为小数点,b,x
        }

        tmp=line.right(2);
        if(tmp.length()==2){
            if(tmp[1]=="0"&&jingzhi==8&&(matchingboth(tmp,"+-/*^%(")==0)){  //避免8进制0前缀与8进制0弄混
                return;
            }
        }else if(tmp.length()==1&&jingzhi==8&&tmp[0]=="0"){
            return;
        }



        if(tmp.length()==2){        //前面不能有连续2次加减乘除，连续2位可以免去负号的影响
            if(tmp[0]=="+"||tmp[0]=="-"||tmp[0]=="*"||tmp[0]=="/"||tmp[0]=="("||tmp[0]=="^"||tmp[0]=="%"){
                if(tmp[1]=="+"||tmp[1]=="-"||tmp[1]=="*"||tmp[1]=="/"||tmp[1]=="^"||tmp[1]=="%"){
                    return;
                }
            }
        }
        line+=text;
        jingzhi=10;
    }else if(text=="*"||text=="/"||text=="^"||text=="%"){  //乘除  平方
        QString tmp=line.right(1);
        if(tmp.length()){       //不能有连续的2次运算符
            if(matchingboth(tmp,"(.+-*/^%bx")!=-1){
                return;
            }
        }else{
            return;
        }
        tmp=line.right(2);
        if(tmp.length()==2){
            if(tmp[1]=="0"&&jingzhi==8&&(matchingboth(tmp,"+-/*^%(")==0)){  //避免8进制0前缀与8进制0弄混
                return;
            }
        }else if(tmp.length()==1&&jingzhi==8&&tmp[0]=="0"){
            return;
        }
        line+=text;
        jingzhi=10;
    }else if(text=="("){   //左括号
        QString tmp=line.right(1);
        if(tmp.length()){
            if(matchingboth(tmp,")0123456789ABCDEFxb.")!=-1){
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
            if(matchingboth(tmp,"+-*/.(^%xb")!=-1){
                return;
            }
        }else{
            return;
        }
        tmp=line.right(2);
        if(tmp.length()==2){
            if(tmp[1]=="0"&&jingzhi==8&&(matchingboth(tmp,"+-/*^%(")!=-1)){  //避免8进制0前缀与8进制0弄混
                return;
            }
        }else if(tmp.length()==1&&jingzhi==8&&tmp[0]=="0"){
            return;
        }
        line+=text;
        bracket_cnt--;
        jingzhi=10;
    }else if(text=="clear"){
        if(jingzhi==16||jingzhi==2){
                   QString tmp=line.right(2);
                    if(tmp[1]=="x"||tmp[1]=="b"){
                           line.chop(2);
                           jingzhi=10;
                    }else if(line.length()){
                        line.chop(1);
                    }
               }else if(jingzhi==8){
                   QString tmp=line.right(2);
                   if(tmp.length()==2){
                       QString s=tmp.left(1);
                       if(tmp[1]==0&&(matchingboth(s,"01234567")==-1)){
                           line.chop(1);
                           jingzhi=10;
                       }else{
                           line.chop(1);
                       }
                   }else if(tmp.length()==1){
                       line.chop(1);
                       jingzhi=10;
                   }
       }else{
           QString tmp=line.right(1);
           if(tmp.length()==1){
               if(tmp[0]=="x"||tmp[0]=="b"){
                   line.chop(2);
               }else{
                   line.chop(1);
               }
           }

       }

    }else if(text=="clearall"){
        line.clear();
        bracket_cnt=0;
    }else if(text=="="&&line.length()){
        QString ret=Result(line);
        if(ret==NULL){
            line+=":";
            line+="除数不能为0";
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

    for(int i=0;i<exp.length();i++){
        if(exp[i]=="."||(exp[i]>="0"&&exp[i]<="9")||(exp[i]>="A"&&exp[i]<="F")||exp[i]=="x"||exp[i]=="b"){
            num+=exp[i];
        }
        else if(exp[i]=="("||exp[i]==")"||exp[i]=="*"||exp[i]=="/"||exp[i]=="^"||exp[i]=="%"){
            if(!num.isEmpty()){
                ret.enqueue(num);
                num.clear();
            }
            ret.enqueue(exp[i]);
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
                }else if(symbol.startsWith("0b")){
                    symbol=symbol.mid(2);
                    int val=symbol.toInt(&ok,2);
                    symbol=symbol.setNum(val,10);
                }else if(symbol.left(1)=="0"){
                    int val;
                    symbol=symbol.mid(1);
                    val=symbol.toInt(&ok,8);
                    symbol=symbol.setNum(val,10);
                }
            }
            symbol.toDouble(&num_ok);//如果symbol是数字字符串则会被转成double，同时num_ok为true

            if(num_ok==true){
                stack.push(symbol);//数字入栈；
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
            }else if(symbol=="("){
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
    }

   ret.sprintf("%f",result);
    return ret;
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
            if(stack.size()<2){  //栈中数字小于2但有运算符
                return "Error";
            }
            R=stack.pop();
            L=stack.pop();
            ret=QCalculate(L,symbol,R);
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
