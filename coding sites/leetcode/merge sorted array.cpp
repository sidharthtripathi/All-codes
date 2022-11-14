#include <iostream>
#include <vector>
using namespace std;
vector <int> merge_sorted(int a[],int n ,int b[],int m){
vector <int> ans;
int i=0,j=0;
while(i<n and j<m){
    if(a[i]<=b[j]){
        ans.push_back(a[i]);
        i++;

    }
    else if(a[i]>b[j]){
        ans.push_back(b[j]);
        j++;
    }
}
if(i>=n){
    while(j<m){
        ans.push_back(b[j]);
        j++;
    }
}
else if(j>=m){
    while(i<n){
        ans.push_back(a[i]);
        i++;
    }
}
return ans;
}
int main(){
int n;
int* a = new int[n];
int m;
int*b = new int[m];
cin>>n;
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
cin>>m;
for(int i = 0 ; i<m ; i++){
    cin>>b[i];
}
vector <int> ans = merge_sorted(a,n,b,m);
for(int i = 0  ;i<n+m ; i++){
    cout<<ans[i]<<" ";
}


}









