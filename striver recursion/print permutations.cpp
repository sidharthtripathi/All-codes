#include <iostream>
using namespace std;
#include <vector>
void print_permutations(int *index,int* ques ,int n, vector <int> &ans){
    if(ans.size() == n){
        for(int i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i  = 0 ; i<n ; i++){
        if(index[i] == 0){
            ans.push_back(ques[i]);
            index[i] = 1;
            print_permutations(index,ques,n,ans);
            index[i] = 0;
            ans.pop_back();
        }
        
    }


}
int main(){
    int index[] = {0,0,0};
    int ques[] = {1,2,3};
    vector <int> ans;
    print_permutations(index,ques,3,ans);
}