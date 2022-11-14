#include <iostream>
using namespace std;

inline void fit_in_sorted(int* a , int n , int val){
	// n is size of sorted array
	int i = n-1;
for( i ; i>=0 ; i--){
	if(val < a[i]){
		a[i+1] = a[i];
	}
	else{
		a[i+1] = val;
		//a[i] = val;
		return;
	}
}
a[0] = val;
return;

}

void insertion(int* a , int n){
 for(int i = 0 ; i<n-1 ; i++){
 	int j = i+1;
 	// fitting jth element in ith sorted array
 	fit_in_sorted(a,i+1,a[j]);
 }

}



int main(){
	int n;
	cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
	cin>>a[i];
}
int val; cin>>val;
insertion(a,n);
for(int i = 0 ; i<n ; i++){
	cout<<a[i]<<" ";
}
}