void stock_span(int* a , int n){
	int* b = new int[n];
	stack <int> ans;
	b[0] = 1;
	ans.push(0);
	for(int i = 1; i<n ; i++){
		while(ans.size()>0 and a[i]>=a[ans.top()])
			ans.pop();
		if(ans.empty())
			b[i] = i+1;
		else
			b[i] = i - ans.top();
		ans.push(i);
	}
	for(int i = 0 ; i<n ; i++)
		cout<<b[i]<<" ";

}