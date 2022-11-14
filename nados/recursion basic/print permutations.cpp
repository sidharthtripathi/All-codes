#include <iostream>
using namespace std;

void print_permutations(string ques , string ans=""){
if(ques.length() == 0 ){
	cout<<ans<<endl;
	return;
}


for(int i = 0 ; i<ques.length() ; i++){
	char char_at_i = ques[i];
	string lques = ques.substr(0,i);
	string rques = ques.substr(i+1);
	string roq = lques + rques;
	print_permutations(roq,ans+char_at_i);
}


}
int main(){

print_permutations("abc");
}
