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
//linear search
int d;
cin>>d;
for(int i =0 ; i< n ; i++){
    if(a[i]==d){
        cout<<i<<endl;
        return i;
    }

}
cout<<"not found";


    }
    void swapi(int a[]){
    int temp;
    temp=*a;
    *a=*(a+1);
    *(a+1)=temp;

    }
