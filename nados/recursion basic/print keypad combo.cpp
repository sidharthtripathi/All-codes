#include <iostream>
#include <vector>
using namespace std;
vector <string> keypad = {"?!","abc","def","ghi","jkl","mno","pqrs","tu","vw","xyz"};
void printkpc(string ques , string ans){
if(ques.length() == 0){

	cout<<ans<<endl;
	return;
}

int fchar = ques[0] - 48 ;

string roq = ques.substr(1);
string keys = keypad[fchar];
for(int i = 0 ; i<keys.length() ; i++){
	char cho = keys[i];
	printkpc(roq,ans+cho);
}


}

int main(){

	printkpc("123","");

}
