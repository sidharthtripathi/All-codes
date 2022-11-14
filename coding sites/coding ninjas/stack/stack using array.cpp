class stacki{
private:
    int nextindex = 0;
    int* arr;
    int capacity;
    public:
    stacki(int size_of_stack){
    arr = new int[size_of_stack];
    capacity = size_of_stack;
    }
    void push(int data){
    if(nextindex==capacity){
        cout<<"stack is full !"<<endl;
        return;
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