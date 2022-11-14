    #include<iostream>
    using namespace std;
    void swapi(int a[]);
    int main(){
        int n;
        cin>>n;
    int * a = new int[n];
    for(int i = 0 ; i<n ; i++){
        cin>>a[i];
    }
    //bubble sort
    for(int i =0 ; i<n ; i++){
        for(int j = 0 ; j<(n-i)-1 ;  j++){
            if(a[j]>a[j+1]){
            swapi(a+j);
        }
        }

    }
    for(int i = 0 ; i<n ; i++){
        cout<<a[i]<<endl;
    }


    }
    void swapi(int a[]){
    int temp;
    temp=*a;
    *a=*(a+1);
    *(a+1)=temp;

    }
