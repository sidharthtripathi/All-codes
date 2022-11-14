#include <iostream>
#include <vector>
using namespace std;

void print_maze_paths(int sr,int sc, int dr, int dc, string psf){
	if(sr>dr or sc>dc){
		return;
	}
	if(sr==dr and sc==dc){
		cout<<psf<<endl;
		return;
	}
	print_maze_paths(sr+1,sc,dr,dc,psf+"h");
	print_maze_paths(sr,sc+1,dr,dc,psf+"v");
}

int main(){

	print_maze_paths(1,1,3,3,"");
}
