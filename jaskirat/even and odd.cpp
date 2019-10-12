#include <stdlib.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n;
	cout<<"enter the number";
	cin>>n;
	if(n%2==0){
		cout<<"number is even";
	}
	else{
		cout<<"number is odd";
	}
	system("PAUSE");
	getch();
	return 0;
}
