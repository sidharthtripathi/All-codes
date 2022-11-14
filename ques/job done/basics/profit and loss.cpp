    #include<iostream>
    using namespace std;
    int main(){
    cout<<"Enter the CP and SP ";
    int cp,sp;
    cin>>cp>>sp;
    if(cp>sp){
        cout<<"Loss is: "<<cp-sp;
    }
    else
        cout<<"profit is: " <<sp-cp;

}