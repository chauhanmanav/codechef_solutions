#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> resultar;
	int n;
	int flag = 0;
	while(cin >> n){
		if(n!=42 && flag==0){
			resultar.push_back(n);
			}
		else if(n==42){
			flag = 1;
			}
		}
	for(int i=0;i<resultar.size();i++){
		cout << resultar[i] << endl;
		}
	return 0;
}
