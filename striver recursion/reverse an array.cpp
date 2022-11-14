void reverse_array(int* a , int n){
for(int i = 0 , j = n-1 ; i!=j ; i++,j--){
	swapi(a,i,j);
}

}
....................

using recursion ==>>


void reverse_array(int* a , int i, int k ){
	if(i>=k){
		return;
	}
	swapi(a,i,k);
	reverse_array(a,i+1,k-1);


}