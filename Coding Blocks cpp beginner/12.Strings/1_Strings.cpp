#include <iostream>
#include <string>
using namespace std;

int main(){
	// ASSIGNMENT
	string s0;
	string s1("Hello");
	string s2 = "Hello World!";
	string s3(s2); //copy s2
	string s4 = s3;

	char a[] = {'a','b','c','\0'};
	string s5(a);

	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;

	if(s0.empty()){
		cout<< "s0 is an empty string"<<endl;
	}

	// MODIFICATION
	
	//Append
	s0.append("I love C++ ");
	cout<<s0<<endl;
	s0 += "and Python.";
	cout<<s0<<endl;

	//Erase
	cout<<s0.length()<<endl;
	s0.clear();
	cout<<s0.length()<<endl;
	

	// COMPARISION
	s0 = "Apple";
	s1 = "Mango";
	cout<< s1.compare(s0) << endl;  // return an int ==0 equal, > 0 or < 0 

	// Overloaded Operator 
	s1 < s0; // Works same as above
	s1 > s0;

	if(s1 > s0){
		cout<<"Mango is lexi greater than Apple" <<endl;
	}	


	// Index
	cout<< s1[0] << endl;

	// FIND SUBSTRINGS

	string s = "I want to have apple juice";
	int idx = s.find("juice");
	cout<<idx << endl; 

	// ERASE SUBSTRING
	string word = "apple ";
	int len = word.length();
	idx = s.find(word);
	cout<<s << endl; 

	s.erase(idx, len);
	cout<<s << endl; 
	
	//Substring from index
	cout << s.substr(1,6) << endl;

	// ITERATION
	// Using index by integer 
	for(int i=0; i<s2.length(); i++){
		cout<<s2[i]<<" ";
	}
	cout<<endl;

	//Using string iterator class
	for(auto it=s2.begin(); it!= s2.end(); it++){
		// it is the iterator 
		// auto == string::iterator
		cout<<(*it)<<",";
	}
	cout<<endl;

	//Using character
	for(char ch:s2){
		cout<<ch<<".";
	}
	cout<<endl;








}