a#include<iostream>

using namespace std;
void fun1(int);
void fun2(int);

void fun1(int a)
{
	if (a==0) 
	{
	return;
    }
	cout<<a;
	fun2(a-2);
	cout<<a;
 } 

void fun2(int b){
	if(b==0) 
	{
	return;
    }
	cout<<b;
	fun1(++b);
	cout<<b;
}
int main()
{
	int n;
	cin>>n;
	fun1(n);
	return 0;
}
 
