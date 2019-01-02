#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	string s,s1;
	s = "Hello";
	s1 = "Hello";

	if(s.compare(s1)==0){
		cout<<s<<"is equal to "<<s1<<endl;
	}
	else{
		cout<<s<<"is not equal to "<<s1<<endl;
	}
	
	s.append("World");
	cout<<s<<endl;
	printf("%s\n",s.c_str());
	
	if(s.compare(s1)==0)
		cout<<s<<"is equal to"<<s1<<endl;
	else
		cout<<s<<"is not equal to"<<s1<<endl;

	return 0;
}
