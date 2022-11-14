    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        int *a = new int[n];
        for(int i =0 ; i<n ; i++){
            cin>>a[i];
        }
        int k;
        cin>>k;
        int last_k = (n-k)+1;
        int temp=a[k-1];
        a[k-1]=a[last_k -1];
        a[last_k-1]=temp;
        for(int i =0 ; i<n ; i++){
            cout<<a[i]<<" ";
        }



}



