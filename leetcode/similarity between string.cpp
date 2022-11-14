#include<iostream>
using namespace std;
bool similar(string &a ,string &b);
int main()
{


}
bool similar(string &a , string &b){
int n = a.length();
for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<n and i<b.length() ; j++){
        if(b[i]==a[j])
            return true;
    }

}
return false;


}
