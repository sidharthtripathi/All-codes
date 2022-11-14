void nsetl(int* a , int n){
	int* b = new int[n];
	stack <int> ans;
	b[0] = -1;
	ans.push(a[0]);
	for(int i = 1; i<n ; i++){
		while(ans.size()>0 and a[i]<=ans.top())
			ans.pop();
		if(ans.size()==0)
			b[i] = -1;
		else
			b[i] = ans.top();
		ans.push(a[i]);
	}
	for(int i = 0 ; i<n ; i++)
		cout<<b[i]<<" ";
}