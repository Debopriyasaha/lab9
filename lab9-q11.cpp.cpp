//lab9-q1

#include<iostream>
using namespace std;

int main(){
// variables
int i;
double d;
float f;
char c;

//pointing to variables
int *ip = &i;	
double *dp =&d;
float *fp =&f;
char *cp =&c;



	cout << "Size of integer pointer " << sizeof(ip) <<endl;
	cout << "Size of double pointer " << sizeof(dp) <<endl;
	cout << "Size of float pointer " << sizeof(fp) <<endl;
	cout << "Size of character pointer " << sizeof(cp) <<endl;

	cout << "size of integer variable " << sizeof(i) <<endl;
	cout << "size of double variable " << sizeof(d) <<endl;
	cout << "size of float variable " << sizeof(f) <<endl;
	cout << "size of character variable " << sizeof(c) <<endl;

return 0;
}		  
