#include <iostream>
using namespace std;
#include <vector>
void subseq_with_k(int index,int k, string ques, vector <int> ans,int &count){
if(index>=ques.length()){
    int sum = 0;
    for(int i : ans){
        sum = sum + i;
    }
    if(sum==k){
      count++;
    }
    
    return;
}
int num = ques[index] - 48;
ans.push_back(num);
subseq_with_k(index+1,k,ques.substr(0,index)+ques.substr(index),ans,count);
ans.pop_back();
subseq_with_k(index+1,k,ques.substr(0,index)+ques.substr(index),ans,count);
return;
}
int main(){
    vector<int> ans; 
    int count = 0;
subseq_with_k(0,3,"2313",ans,count);
cout<<count;
}