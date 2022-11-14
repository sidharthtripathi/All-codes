#include <iostream>
using namespace std;
#include <climits>
class stack{
public:
	int index = 0;
	int capacity;
	stack(int cap){
		capacity = cap;
	}
	int* arr = new int[capacity];
	void push(int a){
			if(index>=capacity){
			int* newarr = new int[capacity*2];
			for(int i = 0 ; i<capacity ; i++){
				newarr[i] = arr[i];
			}
			delete[] arr;
			arr = newarr;
		}
		arr[index] = a;
		index++;
		}
	int peek(){
		return arr[index-1];
	}
	int pop(){
		if(index<=0){
			cout<<"Underflow !"<<endl;
			return INT_MIN;
		}
		index--;
		return arr[index];

	}
	int size(){
		return index;
	}
	bool isempty(){
		if(index == 0){
			return true;
		}
		else false;
	}


};

int main(){	

}