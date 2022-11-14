#include<iostream>
using namespace std;
int main(){
int a[3][3];
for(int i =0 ; i<3; i++){
    for(int j =0 ; j< 3; j++){
        cin>>a[i][j];
    }
}
int ans[3][3]{0};
for(int i =0 ; i< 3 ;i++){
    for(int j =0 ; j<3 ;j++){
        for(int k =0 ; k<3 ; k++){
            ans[i][j]= ans[i][j]+ (a[i][k]*a[k][j]);
        }
    }
}
for(int i =0 ; i<3; i++){
    for(int j =0 ; j< 3; j++){
        cout<<ans[i][j]<<"\t";
    }
    cout<<endl;
}



}

