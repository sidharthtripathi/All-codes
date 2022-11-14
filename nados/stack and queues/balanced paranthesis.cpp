#include <iostream>
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
bool matching(char a , char b){
	if(a=='{' and b == '}')
		return true;
	else if(a=='(' and b == ')')
		return true;
	else if(a=='[' and b == ']')
		return true;
	else
		return false;

}
bool balanced_paranthesis(string ques){
stack <char> ans;
for(int i = 0 ; i<ques.length() ; i++){
	if(ques[i] == '(' or ques[i] == '{' or ques[i] == '['){
		ans.push(ques[i]);
	}
	else if(ques[i] == ')' or ques[i] == '}' or ques[i] == ']'){
		if(ans.empty())
			return false;
		else if(matching(ans.top(),ques[i]) == false)
			return false;
		else
			ans.pop();
		
	}
}
	if(ans.empty())
		return true;
	else
		return false;
}


int main(){
	cout<<balanced_paranthesis("(())");
}