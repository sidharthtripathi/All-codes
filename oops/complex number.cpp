#include <iostream>
using namespace std;
class comp{
private:
    int real;
    int imagi;
public:
comp(int r, int i){
real = r;
imagi = i;
}
void add(comp &n){
real = real + n.real;
imagi = imagi + n.imagi;
}
void display(){
cout<<real<<" + "<<imagi<<'i';
}
void product(comp &b){
int r = real;
real = r*b.real - imagi*b.imagi;
imagi = r*b.imagi + imagi*b.real;
}

};
int main()
{
comp r(1,1);
comp r2(3,5);
r.product(r2);
r.display();

}
