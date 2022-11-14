#include <iostream>
#include <climits>
using namespace std;

class stack{
private:
	int capacity;
	int* array = new int[capacity];
	int next_index = 0 ;

public:
	stack (){
		capacity = 4;
	}

	void push(int data){
		if(next_index == capacity){
			capacity = capacity*2;
			int* new_data = new int[capacity];
			for(int i = 0 ; i<next_index; i++){
				new_data[i] = array[i];
			}
			delete[] array;
			array = new_data;
			

		}
		array[next_index] = data;
		next_index ++;
	}
	int top(){
		if(next_index==0){
			cout<<"stack is empty !"<<endl;
			return INT_MIN;
		}
		return array[next_index-1];
	}
	int pop(){
		if(next_index == 0){
			cout<<"stack is empty !"<<endl;
			return INT_MIN;
		}
		int d = array[next_index-1];
		next_index --;
		return d;
	}
	int size(){
		return next_index;
	}
	bool is_empty(){
		if(next_index==0)
			return true;
		else
			return false;
	}


};
int main(){
stack a;
for(int i = 1 ; i<=10 ; i++ ){
	int data; 
	cin>>data;
	a.push(data);
}
for(int i = 1 ; i<=10 ; i++ ){

	cout<<a.pop()<<endl;
}


}
