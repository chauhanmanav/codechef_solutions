#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	vector<long long int> resultar;
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		long long int count = 0;
		int num = 5;
		while(num<=n){
			int temp = n/num;
			count = count + temp;
			num = num*5;
			}
		resultar.push_back(count);
		}
	for(int i=0;i<t;i++){
		cout << resultar[i] << endl;
		}
	return 0;
}
