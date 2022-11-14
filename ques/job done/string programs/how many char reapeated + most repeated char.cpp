#include <iostream>
using namespace std;
int main(){
string a;
getline(cin,a);
char final_char;
int size_of_string = a.length();
int final_ans;
for(int i =0 ; i<size_of_string; i++){
        int num=0;
    for(int j =0 ; j < size_of_string; j++){
        if(a[i]==a[j]){
            num++;
        }
    }
if(i==0){
    final_ans=num;
}
if(num>=final_ans){
    final_ans=num;
    final_char=a[i];
}
    cout<<a[i]<<" " << num <<" times"<<endl;
}
cout<<"==========================="<<endl;
cout<<final_char<<" " << final_ans<<" times";


}