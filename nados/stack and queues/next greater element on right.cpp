#include <iostream>
using namespace std;
#include <stack>
void ngetr(int a[] , int n){
	int* b = new int[n];
	stack <int> ans;
	ans.push(a[n-1]);
	b[n-1] = -1;
	for(int i = n-2 ; i>=0 ; i--){
		while(ans.size()>0 and a[i]>=ans.top()){
			ans.pop();
		}
		if(ans.size()==0)
			b[i] = -1;
		else
			b[i] = ans.top();
		ans.push(a[i]);

	}
	for(int i = 0 ; i<n ; i++){
		cout<<b[i]<<" ";
	}
	return;

}
int main(){
	int n;
	cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n;  i++){
	cin>>a[i];
}
ngetr(a,n);

}