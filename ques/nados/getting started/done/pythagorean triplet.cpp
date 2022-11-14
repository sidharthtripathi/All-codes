bool pytha_triplet(int a , int b , int c){
if(a>b and a>c){
    return a*a == b*b + c*c;
}
else if(b>a and b>c){
    return b*b == c*c + a*a;
}
else
    return c*c == a*a + b*b;


}