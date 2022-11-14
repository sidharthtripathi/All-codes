#include <iostream>
#include <vector>
using namespace std;
int binary_s(vector <int> &a,int target){
int s = 0;
int e = a.size()-1;
int m ;
while(s<=e){
    m=(s+e)/2;
    if(a[m]==target){
        return m;
    }
    else if(target>a[m]){
        s=m+1;
    }
    else{
        e=m-1;
    }
}

return -1;
}
int main(){
vector <int> ques;
int n;
cin>>n;
for(int i = 0 ; i<n ; i++){
    int temp;
    cin>>temp;
    ques.push_back(temp);
}
int target;
cin>>target;
cout<< binary_s(ques,target);

}

