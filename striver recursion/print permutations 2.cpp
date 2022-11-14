#include <iostream>
using namespace std;
void swap(int* ques,int i , int j){
    int temp = ques[i];
    ques[i] = ques[j];
    ques[j] = temp;
}
void print_permutations_2(int index , int* ques , int n){
    if(index == n ){
        for(int i = 0 ; i<n ; i++)
            cout<<ques[i]<<" ";
            cout<<endl;
            return;
    }
    for(int i = index ; i<n ; i++){
            swap(ques,i,index);
            print_permutations_2(index+1,ques,n);
            swap(ques,i,index);
        }
}
int main(){
  int ques[] = {1,2,3};
  print_permutations_2(0,ques,3);
}