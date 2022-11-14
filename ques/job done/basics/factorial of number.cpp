long factorial(long a){
    if ( a==0){
        return 1;
    }
for(int i = a-1 ; i>=1 ; i--){
    a = a*i;
}
return a;
}