double pow(double ,double);
double fact(int a);
int one(int a);
double sin(double);
double cos(double);
double tan(double);
double cosec(double);
double sec(double);
double cot(double);
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
double pow(double base, double power){
double result=1;
for(int i = 1 ; i<=power ; i++){
    result = result*base;
}
return result;
}
double sin(double x){
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
    return ans;
  }
  else
    return -ans;
}

else{
    if(neg_test==-1){
        return -ans;
    }
    else
        return ans;


}
}
double cos(double x){
return sin(90-x);

}
double tan(double x){
return sin(x)/cos(x);
}
double cosec(double x){
return 1/sin(x);
}
double sec(double x){
return 1/cos(x);
}
double cot(double x){
return 1/tan(x);
}
