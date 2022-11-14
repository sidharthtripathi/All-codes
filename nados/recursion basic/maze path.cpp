#include <iostream>
using namespace std;
#include <vector>
vector <string> maze_path (int sr, int sc , int er,int ec);
int main(){

vector <string> paths = maze_path(1,1,3,3);
for(string &i : paths){
    cout<<i<<endl;
}
}
vector <string> maze_path (int sr, int sc , int er,int ec){
if(sr == er and sc == ec){
    vector <string > base = {""};
    return base;
}

    vector <string> path1;
    if(sr<er)
     path1=maze_path(sr+1 , sc, er ,ec);
    vector <string > path2;
    if(sc<ec)
    path2=maze_path(sr,sc+1,er ,ec);
    vector <string> ans;
    for(string i : path2){
        ans.push_back('h'+i);
    }
    for(string i : path1){
        ans.push_back('v'+i);
    }
    return ans;

}
