#include <iostream>
#include <vector>
using namespace std;
void remove_element(vector <int> &ques,int target);
int main(){
vector <int> a;
int n;
cin>>n;
for(int i = 0 ; i<n; i++){
    int temp;
    cin>>temp;
    a.push_back(temp);
}
int target;
cin>>target;
remove_element(a,target);
for(int &i:a){
    cout<<i<<" ";
}
}
void remove_element(vector <int> &ques,int target){
vector <int> ans;
int n = ques.size();
for(int i = 0 ; i<n ; i++){
    if(ques[i]!=target){
        ans.push_back(ques[i]);
    }
}
ques=ans;



}
New folder