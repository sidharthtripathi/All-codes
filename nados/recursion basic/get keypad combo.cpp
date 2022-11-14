#include <iostream>
using namespace std;
#include <vector>
vector <string> get_kpc(string ques, string keys[]){
if(ques.length()==1){
	int key = ques[0] - 48;
	string key_press_combos = keys[key];
	vector <string> base_case = {key_press_combos};
	return base_case;
}
vector <string> rest_ans = get_kpc(ques.substr(1),keys);
	int key = ques[0] - 48;
	string key_press_combos = keys[key];
	vector <string> ans;
	for(int i  = 0 ; i<key_press_combos.length() ; i++){
		for(string k : rest_ans){
			ans.push_back(key_press_combos[i]+k);
		}
	}
	return ans;


}

int main(){
string keys[] = {"!@","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};
vector <string> ans = get_kpc("03",keys);
for(string i : ans){
	cout<<i<<endl;
}

}