#include<iostream>
using namespace std;

int main(){
	
	int a=2, b=3, c=b;	//declare variable
	int *ptr = &a;	 	//point to a
	c = *ptr;	
	
	//printing value a, b and *ptr
	cout << "variable 1= " << a <<endl;
	cout << "variable 2 = " << c << endl;
	cout << "pointer  " << *ptr <<endl;

	ptr = &b;

	//printing value a, b and *ptr
	cout << "variable 1" << a <<endl;
	cout << "variable 2" << b << endl;
	cout << "pointer " << *ptr <<endl;

return 0;
}
	
