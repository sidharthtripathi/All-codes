#include <iostream>
using namespace std;
#include <vector>
void subseq_with_k(int index,int k, string ques, vector <int> ans){
if(index>=ques.length()){
    int sum = 0;
    for(int i : ans){
        sum = sum + i;
    }
    if(sum==k){
        for(int i : ans)
            cout<<i<<" ";
        cout<<endl;
    }
    
    return;
}
int num = ques[index] - 48;
ans.push_back(num);
subseq_with_k(index+1,k,ques.substr(0,index)+ques.substr(index),ans);
ans.pop_back();
subseq_with_k(index+1,k,ques.substr(0,index)+ques.substr(index),ans);
return;
}
int main(){
    vector<int> ans; 
subseq_with_k(0,3,"2313",ans);

}
...............................................................

void print_sub(string ques ,int k, string ans = "",int index = 0){
if(ques.length()==0){
    int sum = 0;
    for(int i = 0 ; i<ans.length() ; i++){
        int num = ans[i] - 48;
        sum = sum + num;
    }
    if(sum==k)
    cout<<ans<<endl;
    return;
}
print_sub(ques.substr(0,index)+ques.substr(index+1),k,ans+ques[index],index);
print_sub(ques.substr(0,index)+ques.substr(index+1),k,ans,index);

}