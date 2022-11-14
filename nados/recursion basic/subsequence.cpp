#include <iostream>
#include <vector>
using namespace std;

vector <string> subsequece(string &s){
if(s==""){
    vector <string> a = {""};
    return a;
}
char c = s[0];
string substring = s.substr(1);
vector <string> sub_string_sequence = subsequece(substring);
vector <string > ans;
for(auto i : sub_string_sequence){
    ans.push_back(i);
}
for(auto i : sub_string_sequence){
    ans.push_back(c+i);
}

return ans;

}

int main(){
    string a;
    cin>>a;
   vector <string >  s = subsequece(a);
   for(string &i : s){
    cout<<i<<endl;
   }

}
