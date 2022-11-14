#include<iostream>
using namespace std;
int main(){
int n1;
cin>>n1;
int* a = new int[n1];
for(int i =0 ; i<n1; i++){
    cin>>a[i];
}
int n2;
cin>>n2;
int* b = new int[n2];
for(int i =0 ; i<n2; i++){
    cin>>b[i];
}
int n3 = max(n1,n2);
int* sum = new int[n3];
//int c=0;
int d=0;
int i=n1;
int j=n2;
int k=n3;
while(k>=0){
        if(n1>n2){
    if(j>=0)
    sum[k]=a[k]-b[j];
    else
    sum[k]=a[k];
        }
    else{
    if(i>=0)
    sum[k]=b[k]-a[i];
    else
    sum[k]=b[k];
    }
    k--;
    j--;
    i--;

}
for(int i = 0 ; i<n3; i++){
    cout<<sum[i];
}


}
