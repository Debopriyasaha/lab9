#include<iostream>
using namespace std;

int main(){
int arr[10]={18,24,17,5,13,4,6,36,8,54};

//print of array by normal index method
int i;
	for(i=0; i<10; i++){
		cout<< arr[i] <<endl;
	}

//print of array by pointer method
int *p=arr;
	for(i=0; i<10; i++){
		cout<< *(p+i) <<endl;
	}

return 0;
}