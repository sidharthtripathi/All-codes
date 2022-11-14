#include <iostream>
using namespace std;
int maximum(int a[],int n,int  &ite);
int main(){
    int a[3][3];
    for(int i = 0 ; i < 3 ; i++){
        for(int j =0 ; j< 3; j++){
            cin>>a[i][j];
        }
    }

    int b[3]{0};
    int sum;
    for(int i =0 ; i< 3; i++){
        for(int j =0 ; j< 3; j++){
            b[i]=b[i]+a[i][j];
        }
    }
    int index;
    cout<<maximum(b,3,index)<<endl;
    cout<<index;


}
int maximum(int a[],int n,int& ite){
        int maxi=a[0];
        for(int i =0 ; i<n ;i++){
            if(a[i]>maxi){
                maxi=a[i];
                ite=i;
            }
        }
        return maxi;

}

