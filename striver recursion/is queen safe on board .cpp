bool issafe(vector<string> &test,int r,int c){
//for row testing
    int temp_r = r;
    int temp_c = c;
    for(int i = temp_c; i>=0 ; i--){
        if(test[r][i] == 'Q')
            return false;
    }

// for backward diagonal up
    temp_r = r;
    temp_c = c;
    while(temp_r>=0 and temp_c>=0){
        if(test[temp_r][temp_c]=='Q')
            return false;
        temp_r--;
        temp_c--;
    }
// for bakward diagonal down
    temp_r = r;
    temp_c = c;
    while(temp_r<test.size() and temp_c>=0){
        if(test[temp_r][temp_c]=='Q')
            return false;
        temp_r++;
        temp_c--;
    }
    return true;

}



..........................................
parameters are a vector of string (representing the board) and position of placing a new queen there