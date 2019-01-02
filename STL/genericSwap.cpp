#include<iostream>
using namespace std;

//Creating a generic function swap using template

template <class X>
void swapFunc(X &a, X &b){
	X tp;
	tp = a;
	a = b;
	b = tp;
	
	cout<<"Swapped elements values of a and b are "<<a<<" and"<<b<<"respectively"<<endl;
}

int main(){
	int a = 10,b=20;
	float c = 10.5,d = 20.5;
	
	swapFunc(a,b);
	swapFunc(c,d);
	
	return 0;
}
