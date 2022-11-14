#include <iostream>
#include <vector>
using namespace std;
void remove_duplicates(int ques[],int n);
int main(){

int n;
cin>>n;
int* ques = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>ques[i];
}
remove_duplicates(ques,n);
}
void remove_duplicates(int ques[],int n){
vector <int> ans;
for(int i=0;i<n ; i++){
    if(ques[i]!=ques[i+1]){
        ans.push_back(ques[i]);
    }
}
for(int &i:ans){
    cout<<i<<" ";
}


}
