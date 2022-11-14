void power_set_subseq(string ques){
    int t_sub = pow(2,ques.length())-1;
    for(int num = 0 ; num<=t_sub ; num++){
        string str = "";
        for(int i = 0 ; i<ques.length() ; i++){
            if(num&(1<<i)){
                str = str + ques[i];
            }
        }
        cout<<str<<endl;
    }
}