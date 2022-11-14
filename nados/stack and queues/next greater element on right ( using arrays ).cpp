#include <iostream>
using namespace std;
int* ngetr(int* a , int n){
	int* b = new int[n];
	bool found;
	for(int i = 0 ; i<n ; i++){
		found = false;
		for(int j = i ; j<n ; j++){
			if(a[j]>a[i]){
				b[i] = a[j];
				found = true;
				break;
			}
		}
		if(found==false)
		b[i] = -1;
	}
	return b;
}
int main(){
	int n;
	cin>>n;
	int* a = new int[n];
	for(int i = 0 ; i<n ; i++){
		cin>>a[i];
	}
	int *b = ngetr(a,n);
	for(int i = 0 ; i< n; i++){
		cout<<b[i]<<endl;
	}

}