    #include<iostream>
    using namespace std;
    int main(){
    cout<<"asci values of all characters: "<<endl;
    char a;
    int i =65,e=0;
   again:
    for(i  ; i<=90+e ; i++){
        cout<<(a=i)<<" " <<i<<endl ;
    }
    cout<<"============"<<endl;
    i=i+6;
    e=32;
    if(i<=122){
    goto again;
    }



}