/*
List
List is a sequence container which takes constant time in inserting and removing elements. List in STL is implemented as Doubly Link List.

The elements from List cannot be directly accessed. For example to access element of a particular position ,you have to iterate from a known position to that particular position. 
*/

#include<iostream>
#include<list>

using namespace std;

int main(){
	list<int> l;
	list<int>::iterator l_it;

	l.push_back(4);	//adds a new element at the end of list,after its
			//current last element
	l.push_back(5);

	//l.size() returns the number of elements in a list
	cout<<"size of list is "<<l.size()<<endl;

	//l.push_front adds element at the beginning of the list,after its
	//current first element
	l.push_front(100);
	l.push_front(101);

	cout<<"size after pushing 2 elements in  front is "<<l.size()<<endl;
//-----------------------------------------------------------------------------
	l_it = l.begin();//returns reference to the first element in the list
	
	cout<<"first element accessed via reference is "<<*l_it<<endl;

//----------------------------------------------------------------------------
	
	//l.end() returns an iterator refererring to the theoretical element
	//which follows the last element
	l_it = l.end();

	cout<<"value of the theoretical element after the last element is "<<*l_it<<endl;

	cout<<"print all the elements of the list "<<endl;
	
	for(l_it=l.begin();l_it!=l.end();l_it++){
		cout<<*l_it<<endl;
	}

//--------------------------------------------------------------------------
	//remove all the occurence of element from the list
	l.remove(5);

	cout<<"printing after removing the occurence of a particular element"<<endl;
	cout<<"size of lsit after removing occurence of a partuicular element";
	cout<<l.size()<<endl;
	
	for(l_it = l.begin();l_it!=l.end();l_it++){
		cout<<*l_it<<endl;
	}

//-------------------------------------------------------------------------

	l.pop_back();//removes last element from the list
	
	cout<<"print the elements after removing from the list"<<endl;
	
	for(l_it=l.begin();l_it!=l.end();l_it++){
		cout<<*l_it<<endl;
	}

//--------------------------------------------------------------------------
	l.pop_front();
	cout<<"print the element after removing the front element from the list"<<endl;
	
	for(l_it = l.begin();l_it!=l.end();l_it++){
		cout<<*l_it<<endl;
	}	
	

	return 0;

	
}
