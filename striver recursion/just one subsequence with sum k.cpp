#include <iostream>
using namespace std;
#include <vector>
bool subseq_with_k(int index,int k, string ques, vector <int> ans){
if(index>=ques.length()){
    int sum = 0;
    for(int i : ans){
        sum = sum + i;
    }
    if(sum==k){
      for(int i : ans)
        cout<<i<<" ";
    return true;
    }
    return false;
}
int num = ques[index] - 48;
ans.push_back(num);
if(subseq_with_k(index+1,k,ques.substr(0,index)+ques.substr(index),ans))
    return 1;
ans.pop_back();
if(subseq_with_k(index+1,k,ques.substr(0,index)+ques.substr(index),ans))
    return 1;
return 0;
}
int main(){
    vector<int> ans; 
subseq_with_k(0,9,"2313",ans);
}