    void swap(int* a , int i , int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;

}
    void bubbleSort(int a[], int n)
    {   
        // Your code here
        if(n==1)
        return;
        for(int i = 1 ; i<n ; i++){
            if(a[i]<a[i-1])
            swap(a,i,i-1);
        }
        bubbleSort(a,n-1);
    }