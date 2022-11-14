#include <iostream>
using namespace std;

int main(){
string a;
cin>>a;
int ans;
char char_ans;
for(int i =0 ; i< a.length(); i++){
        int ite=0;
    for(int j =0 ; j<a.length(); j++){
        if(a[i]==a[j]){
            ite++;
        }
    }
 if(i==0){
    ans=ite;
 }
 if(ans<=ite){
    ans=ite;
    char_ans = a[i];

 }


}
cout<<char_ans<<" " << ans << " times";

}