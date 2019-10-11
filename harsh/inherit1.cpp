#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Student
{
private:
char name[20];
int rollno;
public:
void getdata()
{
cout<<"enter the name of student:";
gets(name);
cout<<" enter the roll number:";
cin>>rollno;
}
void showdata()
{
cout<<"\nname:"<<name;
cout<<"\n roll number: "<<rollno;
}};
class Exam:public Student
{
private:
char subject[20];
int marks;
void getdetails()
{
cout<<" enter the subject:";
cin>>subject;
cout<<" enter the marks:";
cin>>marks;
}
void showdetails()
{
cout<<"\nsubject:"<<subject;
cout<<"\nmarks:"<<marks;
showdata();
}};
class Result:public Exam
{
public:
void showresult()
{
cout<<"your result is :";
showdetails();
 }
 void owner()
 {
 cout<<"\n Made by Harsh Jain";
 cout<<"\n Enrollment number is 01676803117";
 }};
 void main()
 {
 clrscr();
 Result r;
 r.getdata();
 r.getdetails();
 r.showresult();
 getch();
 }












