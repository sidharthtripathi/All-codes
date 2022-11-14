#include <iostream>
using namespace std;
#include <vector>
vector <string> path(int n);
int main(){
    int n;
    cin>>n;
vector <string> paths = path(n);
for(string &i : paths){
    cout<<i<<endl;
}
}
vector <string> path (int n){
if(n==0){
    vector <string> base = {""};
    return base;
}
else if(n<0){
    vector <string> base;
    return base;
}
vector <string> path1 = path(n-1);
vector <string> path2 = path(n-2);
vector <string> path3 = path(n-3);
vector <string> ans;
for(string &i:path1){
    ans.push_back('1'+i);

}
for(string &i:path2){
    ans.push_back('2'+i);

}
for(string &i:path3){
    ans.push_back('3'+i);

}
return ans;

}
