#include<iostream>
using namespace std;
int main()
{
int *p={10,20,30};      //error we cant store a array in pointer variable which is used to holds the address
cout<<*p;
p++;
cout<<*p;
return 0;
}
//for resolving this array just declare this array in a array and then pass its address to pointer variable *p;
