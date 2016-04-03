#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main(){
	int number;
	int sum=0;
	ifstream filein("file.in",ios::in);
	if(!filein){
		cerr << "Failed opening" <<endl;
		exit(1);
	}
	filein >> number;
	vector<int>w(number);
	for(int i=0;i<number;i++)
		filein >> w.at(i);
	sort(w.begin(),w.end());
    for(int i=3;i<number;i++)
		sum=sum+w.at(i);
	cout << sum <<endl;
	return 0;
}
