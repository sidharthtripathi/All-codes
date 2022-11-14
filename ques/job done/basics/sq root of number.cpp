    #include<iostream>
    using namespace std;
    int main(){
    int a;
    cin>>a;
    int h=0,ite = 1;
    while(a>0){
        a=a-ite;
        ite=ite+2;
        h++;
    }
    if(a<0){
        cout<<"not a perfect sq";
    }
    else
    cout<<h;

}