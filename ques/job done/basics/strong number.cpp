int strong_number(){  
  int a,init,rem=0,ans=0;
	cin>>a;
    init = a;
    while(a){
        rem = a%10;
        ans = ans+factorial(rem);
        a= a /10;
    }
	cout<<ans;
}




long factorial(long a){
    if ( a==0){
        return 1;
    }
for(int i = a-1 ; i>=1 ; i--){
    a = a*i;
}
return a;
}