#include<iostream.h>
#include<conio.h>
class bank
  {
  protected:
  int amount,num,depo,with;
  char name[100];
  public:
  bank()
  {}
  void input()
  {
  cout<<"enter account number";
  cin>>num;
  cout<<"enter name of account holder ";
  cin>>name;
  cout<<"enter amount in account";
  cin>>amount;
  }
  void deposite(depo)
  {
  amount=amount+depo;
  }
  void display()
  {
  cout<<"name:"<<name<<"\namount:"<<amount;
  }
  virtual void process()=0;
  };
class saving:public bank
{
int with,depo,d;
public:
saving()
{}
void process(int with)
{
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
void process(int with)
{
cout<<"enter limit of removing money";
cin>>e;
f=amount-with;
if(f<e)
cout<<"you cannot withdraw";
else
amount=f;
}
};
void main()
{
int x,y,z,depo,with;
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
{
  cout<<"enter amount to deposite";
  cin>>depo;
  b->deposite();}
else
{cout<<"enter amount to withdraw";
cin>>with;
 b->process(with);}
b->display();
getch();
}
