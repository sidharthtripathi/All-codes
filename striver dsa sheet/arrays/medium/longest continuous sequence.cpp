int max_conti_sub(int* a , int n){
    sort(a,a+n);
    int count = 0;
    int max_count = 0;
    for(int i = 1; i<n ; i++){
        if(a[i] == a[i-1]+1)
            count++;
        else{
            max_count = max(count+1, max_count);
            count = 0;
        }
    }
    return max_count;
} 