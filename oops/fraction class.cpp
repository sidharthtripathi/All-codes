#include <iostream>
using namespace std;
class fraction{
private:
    int num;
    int deno;
public:
fraction(){};
fraction(int num , int deno){
this->num = num;
this->deno = deno;
}
void add(fraction f2){
fraction f3;
f3.num = (num*f2.deno) + (f2.num*deno);
f3.deno = deno * f2.deno;
int a=f3.num,b=f3.deno,chotu;
if(a>=b)
chotu = b;
else
    chotu = a;

int hcf=1;
int ite = 1;
while(ite<=chotu){
    if(a%ite==0 and b%ite==0)
        hcf = ite;
    ite++;
}

num=f3.num/hcf;
deno=f3.deno/hcf;
}
void display(){
cout<<num<<'/'<<deno;
}

};
int main()
{
fraction f1(10,2);
fraction f2(6,2);
f1.add(f2);
f1.display();


}
