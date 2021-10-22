#include<iostream>
using namespace std;

void fact(int n)
{
int temp=1;
for(int i=1;i<=n;i++)
{
temp*=i;
}
cout<<"Factorial of entered number is = "<<temp<<endl;
}

int main()
{
int n;
cout<<"Enter a number = ";
cin>>n;
fact(n);
}
