#include<iostream>
#include<vector> //need to have this

using namespace std;



int main()
{
	//How to declare a vector
	vector<string> articles = {"hi", "hello", "bye"}; //default initialization, svec has not elements, C++ 11
	
	//you can initialize like this
	vector<int> test;
	//give test some values
	vector<int> test1(test); //copies elements of test into test1
	vector<int> test2 = test; // copies elements of test into test2
	vector<string> test3 = test; // gives an error because test3 is supposed to hold strings
	
	//you can also initialize like this
	vector<string> v1{"a", "an", "the"};
	
	//you can also initialize a vector from a count and a element value
	vector<int> count(10, -1); //initializes 10 int elements all of which have value -1
	vector<string> strings(10, "hi"); //initializes 10 string elements all of which have the value "hi"
	
	//value initialized element initializer
	vector<int> emptyCount(10); // ten elements initialized to 0
	vector<string> emptyStrings(10) // ten elements initialized to empty strings
	
	//list initializer or element count?
	vector<int> v1(10); //ten elements with the value 0
	vector<int> v2{10}; //one element with the value 10
	
	//how to add elements to a vector:
	vector<int> v3;
	for(int i =0; i != 100; i++)
	{
		v3.push_back(i); //the push back operator takes a value and pushes that value to the back of the vector
	}
	
	//other vector operations
	v.empty() //Returns true if v is empty; otherwise returns false.
	v.size() //Returns the number of elements in v.
	v.push_back(t)//Adds an element with value t to end of v
	v[n] //Returns a reference to the element at position n in v
	v1=v2 //Replaces the elements in v1 with a copy of the elements in v2
	v1={a,b,c...} //Replaces the elements in v1 with a copy of the elements in the comma-separated list.
	v1==v2 //v1 and v2 are equal if they have the same number of elements and each element in v1 is equal to the corresponding element in v2
	v1!=v2 //v1 and v2 are equal if they have the same number of elements and each element in v1 is equal to the corresponding element in v2
	<,<=,>,>= //same meaning using dictionary ordering
	
	
	
	
	
	
	
	return 0;

}
