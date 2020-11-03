#include <iostream>
using namespace std;

int firstIndex(int *a,int key, int size, int i=0){
	// Base condition
	if(i > size){
		return -1;
	}
	if(a[i] == key){
		return i;
	}
	return firstIndex(a,key,size, i+1);
}

int lastIndex(int*a, int key, int size, int i=0){
	// Base condition
	if(i > size){
		return -1;
	}
	int index = lastIndex(a,key,size, i+1);

	if(a[i] == key and index == -1){
		return i;
	}
	return index;
}

void allindex(int *a, int key, int size, int i=0){
	if(i > size){
		cout << endl;
		return;
	}
	if(a[i] == key){
		cout << i << " ";
	}
	allindex(a, key, size, i+1);
	return;
}

int firstIndex2(int *a, int size, int key){
	if(size < 1){
		return -1;
	}
	if(a[0] == key){
		return 0;
	}
	int ans = firstIndex2(a+1, size-1, key);
	return (ans == -1) ? -1 : ans++;
}

int lastIndex2(int *a, int size, int key){
	if(size < 1){
		return -1;
	}
	int ans = lastIndex2(a+1,size-1,key);
	if(a[0] == key){
		return 0;
	}

	return (ans == -1) ? -1 : ans+1;	
}





int main(){
	// Program to find the first index of the array
	int a[10] = {1,3,3,4,5,6,4,5,2,5};

	int index = firstIndex(a,10,10);
	cout << index << endl;
	cout << firstIndex2(a,10,10) << endl;


	index = lastIndex(a,2,10);
	cout << index << endl;
	cout << lastIndex2(a,10,2) << endl;

	allindex(a,10,10);
}