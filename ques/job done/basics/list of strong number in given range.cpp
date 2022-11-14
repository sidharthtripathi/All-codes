    #include<iostream>
    using namespace std;
    long factorial(long);
    bool check_strong_number(int);
    int main(){
        cout<<"type in range for strong numbers: ";
        int s, e;
        cin>>s>>e;
         for(int i =s ; i<=e ; i++){
        if(check_strong_number(i)){
          cout<<i<<endl;
        }
    }
}


bool check_strong_number(int a){
    int init,rem=0,ans=0;
    init = a;
    while(a){
        rem = a%10;
        ans = ans+factorial(rem);
        a= a /10;
    }
    bool strong_number = ( ans == init);
    return strong_number;


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