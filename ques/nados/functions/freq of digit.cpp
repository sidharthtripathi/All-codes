int d_cout(int a , int n ){
    int rem=0;
    int counter=0;
    while(a>0){
        rem=a%10;
        if(rem==n)
           counter++;
            a=a/10;


    }
return counter;
}