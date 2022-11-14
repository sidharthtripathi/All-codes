#include<iostream>
using namespace std;
int main(){
int row ;
cin>>row;
int f_spc=row/2,s_spc=0;
for(int i =1 ; i <=row; i++){
    for(int j = 1; j<=f_spc ; j++){
        cout<<"\t";
    }
    cout<<"*";
    for(int j = 1 ; j<= s_spc ; j++){
        cout<<"\t";
    }
    if(!(i==1 or i==row)){
        cout<<"*";
    }
    cout<<endl;
    if(i>=(row/2)+1){
        s_spc= s_spc -2;
        f_spc++;
    }
    else{
        s_spc= s_spc+2;
        f_spc--;
    }

}
}
