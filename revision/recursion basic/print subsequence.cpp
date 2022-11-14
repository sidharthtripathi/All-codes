#include <iostream>
using namespace std;
#include <vector>

void getsubseq(string ques, string ans=""){
	if(ques==""){
		cout<<ans<<endl;
		return;
	}

	getsubseq(ques.substr(1),ans+ques[0]);
	getsubseq(ques.substr(1),ans);
}
int main(){

	getsubseq("abcd");
}