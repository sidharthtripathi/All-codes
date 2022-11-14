#include <iostream>
using namespace std;
int main(){
int m,n,o,p;
cin>>m>>n;
int a[m][n];
cout<<"elements of array one "<<endl;
for(int i = 0 ; i<m ; i++){
    for(int j =0 ; j<n ; j++){
        cin>>a[i][j];
    }
}
cin>>o>>p;
int b[o][p];
cout<<"elements of second array"<<endl;
for(int i = 0 ; i<o ; i++){
    for(int j = 0 ; j<p ; j++){
        cin>>b[i][j];
    }
}
if(o!=p){
    cout<<"not valid ";
    return 0;
}
int ans[m][p];
for(int i = 0 ; i<m ; i++){
    for(int j =0 ; j<p ; j++){
        ans[i][j]=0;
        for(int k = 0 ; k<n ; k++){
            ans[i][j]=ans[i][j]+(a[i][k]*b[k][j]);
        }

    }
}
for(int i = 0 ; i<m ; i++){
    for(int j =0 ; j<p ; j++){
    cout<<ans[i][j]<<" ";

    }
    cout<<endl;
}



}
