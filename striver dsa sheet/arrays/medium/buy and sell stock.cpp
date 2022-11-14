int buy_n_sell_stock(int* a , int n ){
    int current_profit = 0;
    int max_profit = 0;
    for(int i = 0 ; i<n ; i++){
        for(int j = i ; j<n ; j++){
            max_profit = max(a[j]-a[i],max_profit);
        }
    }
    return max_profit;
}
.........................

using o(n) time complexity and o(n) space complexity

int stocks(int* a , int n){
    int b[n];
    b[n-1] = a[n-1];
    for(int i = n- 2; i>=0 ; i--){
        if(a[i]>b[i+1])
            b[i] = a[i];
        else
            b[i] =b[i+1];
        
    }
    int maxi = 0;
    for(int i = 0 ; i<n ; i++){
        maxi = max(b[i]-a[i],maxi);
    }
    return maxi;
}
................................................
using o(n) time complexity

int stocks(int* a , int n){
    int lpsf = INT_MAX;
    int pist = 0;
    int max_profit = 0;
    for(int i = 0 ; i<n; i++){
        if(a[i]<lpsf)
            lpsf = a[i];
        pist = a[i] - lpsf;
        max_profit = max(max_profit,pist);
    }
    return max_profit;
}