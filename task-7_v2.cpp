#include<iostream>
using namespace std;
void swap(int &a , int &b)
{
int temp=a;
a=b;
b= temp;
}
int main()
{
int a,b;
cout<<"Enter two numbers =";
cin>>a>>b;
cout<<"Value of a and b before swapping ="<<a<<" "<<b<<endl;
swap(a,b);
cout<<"Value of a and b after swapping ="<<a<<" "<<b<<endl;
return 0;
}
