#include<iostream>
using namespace std;
int main()
{
int a = 10;

int *p;

int **q;

p = &a;
cout << *p<<endl;
q = &p;
a=**q+10;


cout << **q<<endl;
}
