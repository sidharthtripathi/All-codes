#include <iostream>
using namespace std;
#include <stack>
bool matching(char a , char b){
	if(a=='(' and b==')')
		return true;
	else if(a=='[' and b==']')
		return true;
	else if(a=='{' and b=='}')
		return true;
	else 
		return false;
}
bool balanced_paranthesis(string ques){
stack <char> paranthesis;
for(int i = 0 ; i<ques.length() ; i++){
	if(ques[i]=='(' or ques[i] == '{' or ques[i] == '['){
		paranthesis.push(ques[i]);
	}
	else{
		if(paranthesis.empty()){
			return false;
		}
		else if(matching(paranthesis.top(),ques[i])== false){
			return false;
		}
		else{
			paranthesis.pop();
		}
	}
}
if(paranthesis.empty()){
	return true;
}
else
return false;

}
int main(){
	
cout<<balanced_paranthesis("{}((}}");


}