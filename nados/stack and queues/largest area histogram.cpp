#include <iostream>
using namespace std;
#include <stack>
int histogram(int* a , int n ){
	int* li = new int[n];
	li[0] = -1;
	stack <int> ans;
	ans.push(0);
	for(int i = 1 ; i<n ; i++){
		while(ans.size()>0 and a[i]<=a[ans.top()])
			ans.pop();
		if(ans.empty())
			li[i] = -1;
		else
			li[i] = ans.top();
		ans.push(i);
	}
	//for right index
	stack <int> ans2;
	int* ri = new int[n];
	ri[n-1] = n;
	ans2.push(n-1);
	for(int i = n-2 ; i>=0 ; i--){
		while(ans2.size()>0 and a[i]<=a[ans2.top()])
			ans2.pop();
		if(ans2.empty())
			ri[i] = n;
		else
			ri[i] = ans2.top();
		ans2.push(i);
	}
		int max_area = 0;
	for(int i = 0 ; i<n ; i++){
		int area = (ri[i] -li[i] - 1)*a[i];
		if(area>max_area)
			max_area = area;
	}
	return max_area;


}
int main(){
	int n;
	cin>>n;
	int* a = new int[n];
	for(int i = 0 ; i<n ; i++)
		cin>>a[i];
	cout<<histogram(a,n);
}