    int zeroes = 0;
    int ones  = 0 ;
    int twos  = 0;
    for(int i = 0 ; i<n ; i++){
        if(a[i]==0)
            zeroes++;
        else if(a[i]==1)
            ones++;
        else
            twos++;
    }
    for(int i = 0 ;i<n ; i++){
        if(i<zeroes)
            a[i] = 0;
        else if(i>=zeroes and i<ones+zeroes)
            a[i] = 1;
        else
            a[i] = 2;
    }
................................................
using national flag algorithm


void sorting(int* a , int n ){
int lo = 0;
int hi = n-1;
int mid = 0;
while(lo<=hi){
    if(a[mid]==0){
        swap(a,low,mid);
        low++;
        mid++;
    }
    else if(a[mid]==1)
        mid++;
    else{
        swap(a,mid,high){
            high--;
            mid++;
        }
    }
}

}