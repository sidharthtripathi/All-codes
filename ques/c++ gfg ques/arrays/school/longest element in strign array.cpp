    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        string *a = new string[n];
        for(int i =0 ; i<n ; i++){
            cin>>a[i];
        }
        int* arr = new int[n];
        int maxi=a[0].length();
        int index;
        for(int i =0 ; i<n ;i++){
        if(a[i].length()>maxi){
            index = i;
        }

        }
        cout<<a[index];


}



