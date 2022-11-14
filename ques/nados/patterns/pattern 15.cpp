#include<iostream>
using namespace std;
int main(){
int n ;
cin>>n;
int num=1,spc=n/2;
for(int i =1 ; i<=n ; i++){
    int pnum=0;
    if(i>(n/2)+1){
        pnum=(n-i)+1;
    }
    else{
     pnum=i;
    }
    for(int j =1 ; j<=spc; j++){
        cout<<"\t";
    }
    for(int j = 1 ;j<=num;j++ ){
        cout<<pnum<<"\t";
        if(j>=i){
            pnum--;
        }
        else{
        pnum++;
        }
    }
    if(i>=(n/2)+1){
        num=num-2;
        spc++;
    }
    else{
        num=num+2;
        spc--;
    }
    cout<<endl;




}
}


