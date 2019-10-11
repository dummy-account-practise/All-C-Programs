#include<conio.h>
#include<iostream.h>
#define large(a,b,c)(a>b?(a>c?a:c):(b>c?b:c))
class largest
{
public:
int a,b,c;
inline void big()
{
cout<<"\n by using inline function\n";
if(a>b && a>c)
cout<<a<<" is the largest number.";
else if(b>a && b>c)
cout<<b<<" is the largest number.";
else
cout<<c<<" is the largest number.";
}};
void main()
{
clrscr();
int p,q,r,flag;
largest l;
cout<<"MADE BY ANKUR\n";
cout<<"\n Enter 3 numbers:";
cin>>p>>q>>r;
l.a=p;
l.b=q;
l.c=r;
l.big();
flag=large(p,q,r);
cout<<"\n Using macros largest number is:"<<flag;
getch();
}
