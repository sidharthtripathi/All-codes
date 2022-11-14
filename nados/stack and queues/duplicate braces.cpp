"#include <iostream>
using namespace std;
#include <stack>
bool duplicate_brace(string ques){
	stack <int> ans;
	for(int i = 0 ; i<ques.length() ; i++){
		if(ques[i] == ')'){
			if(ans.top()=='('){
				return true;
			}
			else{
				while(ans.top()!='('){
					ans.pop();
				}
				ans.pop();
			}
		}
		else{
			ans.push(ques[i]);
		}
	}
	return false;
}

int main(){
	cout<<duplicate_brace("(A+b)(cc+)");
}