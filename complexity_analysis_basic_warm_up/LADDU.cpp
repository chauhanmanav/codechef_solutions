#include<bits/stdc++.h>

using namespace std;

int solve(int total,string origin){
	if(origin=="INDIAN"){
		return total/200;
		}
	return total/400;
	}

int main(){
	int t;
	cin >> t;
	vector<long long int> resultar;
	for(int i=0;i<t;i++){
		int n;
		string origin;
		cin >> n >> origin;
		int total = 0;
		for(int j=0;j<n;j++){
			string activity;
			cin >> activity;
			if(activity=="CONTEST_WON"){
				int rank;
				cin >> rank;
				int bonus = 20-rank;
				if(bonus<0){
					bonus = 0;
					}
				total = total + 300 + bonus; 
				}
			else if(activity=="TOP_CONTRIBUTOR"){
				total = total + 300;
				}
			else if(activity=="BUG_FOUND"){
				int severity;
				cin >> severity;
				total = total + severity;
				}
			else if(activity=="CONTEST_HOSTED"){
				total = total + 50;
				}
			}
		int months = solve(total,origin);
		resultar.push_back(months);
		}
	for(int i=0;i<resultar.size();i++){
		cout << resultar[i] << endl;
		}
	return 0;
}
