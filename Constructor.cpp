#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			
		}
		
		int addition(int x,int y)
		{
			return x+y;
		}

		int substraction(int x,int y)
		{
			return x-y;
		}

		int multiplication(int x, int y)
		{
			return x*y;
		}
		
		int division(int x, int y)
		{
			return x/y;
		}
		
	
};

int main()
{
	
	A obj; // constructor called automatically
	int a,b;
	cout<<"Enter value a: ";
	cin>>a;
	cout<<"Enter value b: ";
	cin>>b;

	obj.addition(a,b);
	obj.substraction(a,b);
	obj.multiplication(a,b);
	obj.division(a,b);
	
	return 0;
}