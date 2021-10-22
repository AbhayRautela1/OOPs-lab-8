#include<iostream>
using namespace std;
int main()
{
int arr[] = {10,20,30};

cout << *arr;

cout << arr;

arr++;                    //<----

cout << *arr;
}

/*This thing doesn't make any sense as we can't simply increase the base address of a array we have to specify how by how much we have to increase this and store in the another element than it would work fine

simply do this 
int arr[] = {10,20,30};

cout << *arr;

cout << arr;

cout << *(arr+1);
}



OUTPUT 
1- 10
2- base address
3-20
*/
