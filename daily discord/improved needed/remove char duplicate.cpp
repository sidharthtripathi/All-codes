#include <iostream>
using namespace std;
inline void remove_char(string &s , int a);
inline void remove_char_range(string &s , int si , int e);
void remove_duplicate(string &s , int k);
int main(){
string s;
cin>>s;
int k;
cin>>k;
remove_duplicate(s,2);
cout<<s;

}
void remove_duplicate(string &a , int k){
int i = 0;
while(a[i]){
    if(a[i]==a[i+1]){
        int j = i+1;
        int ite = 2;
        while(a[j]==a[j+1]){
            ite++;
            j++;
        }
        if(ite==k){
            remove_char_range(a,i,j);
            i=-1;
        }


    }
    i++;
}



}



inline void remove_char(string &s , int a){

while(s[a]){
    s[a]=s[a+1];
    a++;
}

}
inline void remove_char_range(string &s , int si , int e){
int l = e-si+1;
for(int i = 1; i<=l; i++ ){
    remove_char(s,si);
}



}