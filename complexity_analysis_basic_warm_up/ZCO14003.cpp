#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin >> n;
	vector<long long int> probar(n,0);
	for(int i=0;i<n;i++){
		cin >> probar[i];
		}
	sort(probar.begin(),probar.end());
	long long int maxcost = INT_MIN;
	for(int i=0;i<n;i++){
		long long int tempcost = probar[i]*(n-(i));
		if(tempcost>maxcost){
			maxcost = tempcost;
			}
		}
	cout << maxcost;
	return 0;
}
