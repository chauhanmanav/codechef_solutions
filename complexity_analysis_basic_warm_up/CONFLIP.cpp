#include<bits/stdc++.h>

using namespace std;

int solve(int i,int n,int q){
	int i_rem = n/2;
	int count;
	if(q==i){
		count = i_rem;
		}
	else{
		count = n-i_rem;
		}
	return count;
	}

int main(){
	int t;
	cin >> t;
	vector<long long int> resultar;
	for(int i=0;i<t;i++){
		int g;
		cin >> g;
		for(int j=0;j<g;j++){
			int i,n,q;
			cin >> i >> n >> q;
			int result = solve(i,n,q);
			resultar.push_back(result);
			}
		}
	for(int i=0;i<resultar.size();i++){
		cout << resultar[i] << endl;
		}
	return 0;
}
