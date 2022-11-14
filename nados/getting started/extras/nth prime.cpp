    #include <iostream>
    using namespace std;
    bool isprime(int a);
    int nth_prime(int ite);
    int main(){
    int a;
    cin>>a;
    cout<<nth_prime(a);

    }


    int nth_prime(int ite){
        int i = 1;
        int iteration=0;
        while(1){
            if(isprime(i)){
                iteration++;
                if(iteration == ite){
                    return i;
                }
            }
            i++;
        }
    }




    bool isprime(int a){
    if(a==1){
        return false;
    }
    int ite=2;
    while(ite<a){
        if(a%ite==0){
            return false;
        }
        ite++;
    }
    return true;
    }


