#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
class stacki{
private:
    int nextindex = 0;
    int* arr;
    int capacity=4;
    public:
    stacki(){
    arr = new int[capacity];
    }
    void push(int data){
    if(nextindex==capacity){
    int* newarr = new int[capacity*2];
    for(int i = 0 ; i<capacity ; i++){
        newarr[i]=arr[i];

    }
    capacity = capacity*2;
    delete arr;
    arr = newarr;
    }
    arr[nextindex]=data;
    nextindex++;
    }
    int pop(){
        if(nextindex==0){
            cout<<"all elements gone !"<<endl;
            return 0;
        }
        nextindex--;
       return arr[nextindex];

    }
    int top(){
        if(nextindex==0){
            cout<<"Empty stack ! "<<endl;
            return -1;
        }
    return arr[nextindex-1];
    }
    bool isEmpty(){
    return nextindex==0;

    }

};


#endif // STACK_H_INCLUDED
