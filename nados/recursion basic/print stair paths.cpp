#include <iostream>
#include <vector>
using namespace std;

void print_stair_paths(int n , string ans){
	if(n==0)
		cout<<ans<<endl;
	if(n<0)
		return;

	print_stair_paths(n-1,ans+"1");
	print_stair_paths(n-2,ans+"2");
	print_stair_paths(n-3,ans+"3");


}

int main(){

	print_stair_paths(3,"");
}
