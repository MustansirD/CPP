#include<iostream>
#include<vector>

using namespace std;

int main(){
	//create a vector to store int
	vector<int> vec;
	int i;
	
	//display the original size of vec
	cout<<"vector size = "<<vec.size()<<endl;
	
	//push 5 values into the vector
	for(i=0;i<5;i++){
		vec.push_back(i);
	}

	//display extended size of vec
	cout<<"extended vector size="<<vec.size()<<endl;
	
	//access 5 values from the vector
	for(i=0;i<5;i++){
		cout<<"values of vec["<<i<<"]="<<vec[i]<<endl;
	}

	//use iterator to access the values
	return 0;
}