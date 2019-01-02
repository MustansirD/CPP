#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v;
	vector<int>::iterator v_it;
	v.push_back(5);	//Inserts 5 at the end of the vector. That is currently it is at position 0
	v.push_back(100);
	v.push_back(105);
	cout<<"size of vector is "<<v.size()<<endl;
	cout<<"last element in vector is "<<v.back()<<endl;
	
	v_it = v.begin();	//return a iterator to the first element in the vector
	cout<<"first element in the vector"<<*v_it<<endl;

	v_it = v.end();		//returns iteraotr pointing to a position which is next to the last
				//element of the vector
	cout<<"last element in the vector "<<*v_it<<endl;
	
	cout<<"Accessing values of a vector using at() function"<<endl;
	cout<<"value at 0 location is "<<v.at(0)<<endl;	//returns reference to element at positiom
//	cout<<"value at ranadom location is "<<v.at(100)<<endl;	//out of range core dump

	cout<<v.empty()<<endl;//returns a boolean value: 0 if vector is non empty and 1 when it is.
	
	v.pop_back();	//removes last element from the vector.
	//Note always remove the last elemetn and then assign an iterator or lese it will give garbage
	cout<<v.empty()<<endl;
	cout<<v.size()<<endl;
	v.pop_back();
	cout<<v.empty()<<endl;
	cout<<v.size()<<endl;
	v.pop_back();
	v.pop_back();
//	v.pop_back();
//	v.pop_back();
	cout<<v.empty()<<endl;
	cout<<v.size()<<endl;
	return 0;
}
