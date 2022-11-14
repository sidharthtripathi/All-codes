#include<iostream>
#include<cmath>
double fact(int a);
int one(int a);
using namespace std;
int main(){
double x;
cout<<"type input in degree: ";
cin>>x;
int y=0;
int test=0;
int neg_test=0;
if(x>360){
    while(x>=360){
        x=x-360;
    }
}
else if(x<-360){
    while(x<=-360){
        x=x+360;
    }
}
if(x<0){
    x=x*-1;
    neg_test=-1;
}
if(x>180 and x<=360){
    y=x-180;
    x=180-y;
    test=-1;

}
if(x>90 and x<=180){
    y = x-90;
    x=90-y;
}
x=(x*3.14)/180;
double ans = 0 ;
for(int i = 1 ; i<=15 ; i++){
    int n = (2*i)-1;
   ans = ans + (one(i)*pow(x,n))/fact(n);

}
if(test==-1){
  if(neg_test==-1){
    cout<<ans;
  }
  else cout<<-ans;
}

else{
    if(neg_test==-1){
        cout<<-ans;
    }
    else
        cout<<ans;
}



}
int one(int a){
if(a%2==0){
    return -1;
}
else
    return 1;

}
double fact(int a){
int ans=1;
while(a>0){
    ans=ans*a;
    a--;
}
return ans;

}


