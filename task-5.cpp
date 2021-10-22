#include<iostream>
using namespace std;

int fact(int n)
{
int temp=n;
if(n==1)
	return temp;
else{
temp=temp*fact(n-1);
}
return temp;
}

int main()
{
int n;
cout<<"Enter a number = ";
cin>>n;
int x=fact(n);
cout<<"Factorial of entered number is = "<<x<<endl;
}
