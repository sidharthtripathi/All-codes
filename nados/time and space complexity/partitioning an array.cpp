 #include <bits/stdc++.h>
using namespace std;
void swap(int* a , int  i , int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;

}
void partition(int* a , int n , int pivot){
int i = 0 , j = 0;
while(j<n){
	if(a[j]<=pivot){
		swap(a,j,i);
		i++;
		j++;
	}
	else{
		j++;
	}


}


}

int main(){
int n;cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
	cin>>a[i];
}
int pivot; cin>>pivot;
partition(a,n,pivot);
for(int i = 0 ; i<n; i++){
	cout<<a[i]<< " ";
}
	
}
