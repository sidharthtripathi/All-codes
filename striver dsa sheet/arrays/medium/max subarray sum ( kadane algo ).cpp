brute force method
.................................
int max_subarray(int* a , int n ){
    int maxi = 0;
for(int i = 0 ; i<n ; i++){
    for(int j = i ; j<n; j++){
        int sum = 0;
        for(int k = i  ; k<=j ; k++){
            sum = sum + a[k];
        }
        maxi = max(maxi,sum);
    }
}
return maxi;
}
......................................
int max_sub(int*a , int n ){
    int current_sum = a[0];
    int overall_best = a[0];
    for(int i = 1; i<n; i++){
        if(a[i]+current_sum > a[i])
            current_sum = current_sum +a[i];
        
        else
            current_sum = a[i];
        if(current_sum > overall_best)
            overall_best = current_sum;
        
    }
    return overall_best;
}
...........................
check out pepcoding vids for better and best understanding of kadane algo
