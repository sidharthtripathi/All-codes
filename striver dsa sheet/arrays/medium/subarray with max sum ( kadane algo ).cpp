vector <int> max_sub(int*a , int n ){
    vector <int> subset;
    vector <int> overall_subset;
    subset.push_back(a[0]);
    int current_sum = a[0];
    int overall_best = a[0];
    for(int i = 1; i<n; i++){
        if(a[i]+current_sum > a[i]){
            current_sum = current_sum +a[i];
            subset.push_back(a[i]);
        }
        
        else{
            current_sum = a[i];
            subset.clear();
            subset.push_back(a[i]);
        }
        if(current_sum > overall_best){
            overall_best = current_sum;
            overall_subset = subset;
        }
        
    }
    return overall_subset;
}