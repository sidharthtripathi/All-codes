#include <iostream>
using namespace std;
class two_stack{
public:
	int capacity;
	int* arr;
	int top1;
	int top2;
	two_stack(int cap){
		capacity = cap;
		arr = new int[capacity];
		top1 = -1;
		top2 = capacity;
	}
	void push1(int x){
		if(top1<top2-1){
			top1++;
			arr[top1] = x;
		}
		else{
			cout<<"overflow! "<<endl;
			return;
		}
	}
	void push2(int x){
		if(top1<top2-1){
			top2--;
			arr[top2] = x;
		}
		else{
			cout<<"overflow! "<<endl;
			return;
		}
	}
	int pop1(){
		if(top1==-1){
			cout<<"underflow! "<<endl;
			return -1;
		}
		int val =  arr[top1];
		top1--;
		return val;
	}
		int pop2(){
		if(top2==capacity){
			cout<<"underflow! "<<endl;
			return -1;
		}
		int val =  arr[top2];
		top1++;
		return val;
	}




};
int main(){



}