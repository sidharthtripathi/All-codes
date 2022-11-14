#include <iostream>
using namespace std;
void bubble(int a[],int n);
void insertion(int a[],int n);
void merge_sorted(int a[],int n , int b[],int m);
int main(){
int n ;
int m;
cin>>n;
int *b = new int[m];
int *a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}

cin>>m;
for(int i = 0 ; i<m ; i++){
    cin>>b[i];
}
merge_sorted(a,n,b,m);

}
void merge_sorted(int a[],int n ,int b[],int m){
int *c = new int[n+m];

    for(int i = 0 , j = 0 ,k=0; i<n or  j<m;k++ ){
        if(a[i]<b[j]){
                if(i>=n){
                    c[k]=b[j];
                    j++;
                }
            else{
            c[k]=a[i];
            i++;
            }
        }
        else{
            if(j>=m){
                c[k]=a[i];
                i++;
            }
            else{
            c[k]=b[j];
             j++;
            }
        }


    }
for(int i = 0 ; i<m+n ; i++){

    cout<<c[i]<<" ";


}




}
