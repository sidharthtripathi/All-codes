#include <iostream>
using namespace std;
//implementing stock span using arrays
void stock_span(int* a , int n){
	for(int i = 0  ; i<n ; i++){
		int count = 0;
		int j = i;
			while(a[j]<=a[i] and j>=0){
				count++;
				j--;
			}
			cout<<count<<endl;
	}
}
int main(){
	
int stocks[]  = {13,15,12,14,16,8,6,4,10,30};
stock_span(stocks,10);

}