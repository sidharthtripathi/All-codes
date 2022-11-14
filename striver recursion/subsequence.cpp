#include <iostream>
using namespace std;
#include <vector>
void print_sub(int index , string ques , vector <char> ans){
if(index>=ques.length()){
    for(char i:ans){
        cout<<i;
    }
    cout<<endl;
    return;
}
ans.push_back(ques[index]);
print_sub(index+1,ques.substr(0,index)+ques.substr(index),ans);
ans.pop_back();
print_sub(index+1,ques.substr(0,index)+ques.substr(index),ans);

return;
}
int main(){
    vector <char> ans;
    print_sub(0,"abc",ans);

}

..........................................................................

void print_sub(string ques , string ans = "",int index = 0){
if(ques.length()==0){
    cout<<ans<<endl;
    return;
}
print_sub(ques.substr(0,index)+ques.substr(index+1),ans+ques[index],index);
print_sub(ques.substr(0,index)+ques.substr(index+1),ans,index);

}
......................................
