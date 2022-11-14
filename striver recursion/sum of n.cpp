functional way
......................................

#include <iostream>
using namespace std;
int sum_of_n(int n){
	if(n==1)
		return n;
	return n + sum_of_n(n-1);
}
int main(){
	
cout<<sum_of_n(10);

}
.......................................

parametrized way

void print_n_sum(int i , int sum){
	if(i<0){
		cout<<sum;
		return;
	}
	print_n_sum(i-1,sum+i);
}
...........................................