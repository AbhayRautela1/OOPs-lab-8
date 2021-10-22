#include<iostream>
#include<cmath>
using namespace std;

int series(int x)
{
int a,temp=pow(x,x)+x;
if(x==0)
	return temp;
else{
	a=pow((x-1),(x-1))+(x-1);
	temp=temp*a;
	series(x-1);
}
return temp;
}
int main()
{
int n;
cout<<"Enter a number = ";
cin>>n;
cout<<"Answer is = "<<series(n)<<endl;
return 0;
}
