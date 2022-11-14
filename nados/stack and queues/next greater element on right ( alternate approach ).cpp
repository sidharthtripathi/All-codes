#include <iostream>
using namespace std;
#include <stack>
void ngetr(int* a , int n){
	stack <int> ans;
	int* b = new int[n];
	ans.push(0);
	for(int i = 1; i<n ;i++){
		while(ans.size()>0 and a[i]>=a[ans.top()]){
			int pos = ans.top();
			b[pos] = a[i];
			ans.pop();
		}
		ans.push(i);
	}
	while(ans.size()>0){
		int pos = ans.top();
		b[pos] = -1;
		ans.pop();
	}
	for(int i = 0 ; i<n; i++){
		cout<<b[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	int* a = new int[n];
	for(int i = 0 ; i<n ; i++){
		cin>>a[i];
	}
	ngetr(a,n);
}