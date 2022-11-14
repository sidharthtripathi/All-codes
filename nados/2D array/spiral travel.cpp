#include <iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
int a[m][n];
for(int i = 0 ; i<m ; i++){
    for(int j = 0 ; j<n ; j++){
        cin>>a[i][j];
    }
}
int minr=0,minc=0;
int maxr=m-1,maxc=n-1;
int ite=0;
while(ite<m*n){
    //left wall
    for(int i = minr,j=minc ; i<=maxr and ite<m*n ; i++){
        cout<<a[i][j]<<" ";
        ite++;
    }
    minc++;
    //bottom wall
    for(int i = maxr , j=minc ; j<=maxc and ite<m*n ; j++){
        cout<<a[i][j]<<" ";
        ite++;
    }
    maxr--;
    //left wall
    for(int i = maxr , j=maxc ; i>=minr and ite<m*n ; i--){
        cout<<a[i][j]<<" ";
        ite++;
    }
    maxc--;
    for(int i = minr,j=maxc ; j>=minc and ite<m*n ; j--){
        cout<<a[i][j]<<" ";
        ite++;
    }
    minr++;

}

}
