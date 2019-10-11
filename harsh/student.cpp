#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Student
{
private :
int m1,m2,m3,m4,m5,r;
char name[50];
float d;
public:
void input()
{
cout<<"enter the name";
gets(name);
cout<<"\n enter the roll number";
cin>>r;
cout<<"enter the marks in five subjects";
cin>>m1>>m2>>m3>>m4>>m5;
}
void calc()
{
d=(m1+m2+m3+m4+m5)/5;
}
void stream()
{
if(d>=96)
{
cout<<"branch is computer science";
}
else if(d>=91 &&d<=95)
{
cout<<"branch is electronics";
}
else if(d>=86 &&d<=90)
{
cout<<"branch is mechanical";
}
else if (d>=81&&d<=85)
{
cout<<"branch is electrical";
}
else if(d>=76&&d<=80)
{
cout<<"branch is chemical";
}
else if(d>=71&&d<=75)
{
cout<<"branch is civil";
}
}
void owner()
{
cout<<"\n made by Harsh jain";
cout<<"\n Enrollment number is 01676803117";
}
};
void main()
{
clrscr();
Student s;
s.input();
s.calc();
s.stream();
s.owner();
getch();
}

