#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long int t;
	cin >> t;
	vector<long long int> resultar;
	for(long long int i=0;i<t;i++){
		long long int n;
		cin >> n;
		vector<int> cars(n,0);
		for(long long int j=0;j<n;j++){
			cin >> cars[j];
			}
		long long int count = 1;
		int prev = cars[0];
		for(long long int j=1;j<n;j++){
			if(cars[j]<=prev){
				count++;
				}
			if(cars[j]<prev){
				prev = cars[j];
				}
			}
		resultar.push_back(count);
		}
	for(long long int i=0;i<t;i++){
		cout << resultar[i] << endl;
		}
	return 0;
}
