#include <iostream>
using namespace std;
int bio(int n,int r);
int main(){
cout<<bio(7,3);


}
int bio(int n,int r ){
if(r==0)
    return 1;
return bio(n,r-1)*(n-r+1)/r;

}

