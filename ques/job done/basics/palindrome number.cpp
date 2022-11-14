// can test only upto for 10 digits


#include <iostream>
using namespace std;
int main() {
    unsigned long int a;
    cin>>a;
    // if wanted to test more than 10 digits,update size of array here in below line
    int num[10]{0};
    int ite =0;
    while(a>0){
        num[ite]=a%10;
        a=a/10;
        ite++;
    }
    int test;
    for(int i = 0 ; i<ite/2 ; i++){
        if(num[i]!=num[(ite-1)-i]){
            test=0;
        }

    }
    if(test==0){
        cout<<"not palindrome";
    }
    else
        cout<<"yes";
}