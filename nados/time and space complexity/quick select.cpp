 #include <bits/stdc++.h>
using namespace std;
void swap(int* a , int  i , int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;

}
int quick_select(int* a , int n , int kth){
	if(kth>n)
		return -1;
	int pivot = a[n-1];
	int i = 0;
	for(int j = 0 ; j<n ;j++){
		if(a[j]<=pivot){
			swap(a,i,j);
			i++;
		}

	}
	if(kth-1<i-1){
		return quick_select(a,i-1,kth);
	}
	else if(kth-1>i-1){
		return quick_select(a+i,n-i+1,kth);
	}
	else{
		return pivot;
	}
}

int main(){
int n;cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
	cin>>a[i];
}
int kth; cin>>kth;
cout<<quick_select(a,n,kth);
	
}
