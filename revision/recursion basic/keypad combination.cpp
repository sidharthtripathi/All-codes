#include <iostream>
using namespace std;
#include <vector>
string codes[10]{".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
vector <string> kpc(string &s){
    if(s==""){
        vector <string> base_case = {""};
        return base_case;
    }
int c = s[0]-48;
string rst_string=s.substr(1);
vector <string> reskpc = kpc(rst_string);
vector <string> ans;

string first_digit = codes[c];
for(int i = 0 ; i<first_digit.length(); i++){
    for(auto j:reskpc){
        ans.push_back(first_digit[i]+j);
    }
}

return ans;

}

int main(){
string a;
cin>>a;
vector <string> ans = kpc(a);
for(string &i:ans){
    cout<<i<<endl;
}

}
