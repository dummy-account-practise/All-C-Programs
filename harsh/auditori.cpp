#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
class Audi
{
char name[20],id[10];
static int no;
public:
void getdata();
void owner();
};
int Audi::no=0;
void Audi::getdata()
{
cout<<"Enter the name:";
gets(name);
cout<<"Enter ID:";
gets(id);
no+=1;
cout<<"Total Guests:"<<no;
}
void Audi::owner()
{
cout<<"\nMade by Harsh Jain";
cout<<"\nEnrollment no is 01676803117";
}
void main()
{
clrscr();
Audi ob;
char ch='y';
while(ch=='y')
{
cout<<"\nEnter the entry(y or n) :";
cin>>ch;
if(ch=='y')
{
ob.getdata();
ob.owner();
}
else
exit(0);
}
getch();
}








