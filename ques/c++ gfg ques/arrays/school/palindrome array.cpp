#include<iostream>
using namespace std;
bool palindrome(int a);
int digits(int a);
int main(){
    int n;
    cin>>n;
int * a = new int[n];
for(int i = 0 ; i<n ; i++){
    cin>>a[i];
}
for(int i = 0 ; i<n; i++){
    if(!palindrome(a[i])){
        cout<<"not a palindrome element string";
        delete []a;
        return 0;
    }
}
cout<<"palindrome string";


}
bool palindrome(int a){
    int n = digits(a);
int *numbers = new int[n];
int i=0;
while(a>0){
    numbers[i]=a%10;
    a=a/10;
    i++;
}
for(int i = 0 ; i<(n/2) ; i++){
    if(numbers[i]!=numbers[(n-1)-i]){
        delete []numbers;
        return false;
    }
}
delete []numbers;
return true;

}
int digits(int a){
    int ite=0;
while(a>0){
    ite++;
    a=a/10;
}
return ite;

}



