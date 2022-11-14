==================
initial try
=============
#include<iostream>
using namespace std;
int main(){
int a[3][3];
for(int i =0 ; i<3; i++){
    for(int j =0 ; j< 3; j++){
        cin>>a[i][j];
    }
}
for(int i=0 ; i<3; i++){
    for(int j =0 ; j<3 ; j++){
        if(i%2==0)
        cout<<a[j][i]<<"\t";
        if(i%2==1)
            cout<<a[2-j][i]<<"\t";
    }
    cout<<endl;
}


}

