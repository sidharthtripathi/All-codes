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
int i=0,j=0;
int dir = 0;
while(i<=m-1 and j<=n-1){
if(a[i][j]==1){
    dir++;
    if(dir==4){
        dir=0;
    }
}
if(dir==0){
    i=i;
    j++;
}
else if(dir ==1){
    i++;
    j=j;
}
else if(dir == 2){
    i=i;
    j--;
}
else{
    j=j;
    i--;
}

}
if(i>m-1)
    i=i-1;
if(j>n-1)
    j--;
cout<<i<<endl<<j<<endl;


}
