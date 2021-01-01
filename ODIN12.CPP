#include<iostream.h>
#include<conio.h>
class bank
  {
  protected:
  int amount,num,depo;
  char c[100];
  public:
  bank()
  {}
  void input()
  {
  cout<<"enter account number";
  cin>>num;
  cout<<"enter name of account holder ";
  cin>>c;
  cout<<"enter amount in account";
  cin>>amount;
  }
  void deposite()
  {
  cout<<"enter amount to deposite";
  cin>>depo;
  amount=amount+depo;
  }
  void display()
  {
  cout<<"name:"<<c<<"\namount:"<<amount;
  }
  virtual void process()=0;
  };
class saving:public bank
{
int with,depo,d;
public:
saving()
{}
void process()
{
cout<<"enter amount to withdraw";
cin>>with;
d=amount-with;
if(d<500)
cout<<"you cannot wihdraw";
else
amount=d;
}
};
class current:public bank
{
int depo,with,e,f;
public:
current()
{}
void process()
{
cout<<"enter limit of removing money";
cin>>e;
cout<<"enter amount to withdraw";
cin>>with;
f=amount-with;
if(f<e)
cout<<"you cannot withdraw";
else
amount=f;
}
};
void main()
{
int x,y,z;
bank *b;
clrscr();
b->input();
cout<<"enter 1 for saving or 2 for current";
cin>>x;
if(x==1)
b=new saving();
else
b=new current();
cout<<"enter 1 for deposite and 2 for withdraw";
cin>>y;
if(y==1)
b->deposite();
else
b->process();
b->display();
getch();
}