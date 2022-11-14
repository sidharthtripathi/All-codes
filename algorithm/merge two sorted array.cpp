int* merge(int* a , int n , int* b , int m){
    int* ans = new int[n+m];
    int i = 0,j=0,k=0;
    while(i<n and j<m){
        if(a[i]<=b[j]){
            ans[k] = a[i];
            i++;
            k++;
        }
        else{
            ans[k] = b[j];
            j++;
            k++;
        }
    }
    if(i>=n){
        while(j<m){
            ans[k] = b[j];
            j++;
            k++;
        }

    }
    else if(j>=m){
        while(i<n){
            ans[k] = a[i];
            i++;
            k++;
        }

    }
    return ans;
}