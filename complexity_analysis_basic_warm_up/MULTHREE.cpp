#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	vector<string> resultar;
	for(int i=0;i<t;i++){
		long long int k;
		int d0,d1;
		cin >> k >> d0 >> d1;
		vector<int> digits(7,0);
		digits[0] = d0;
		digits[1] = d1;
		int prevsum = d0 + d1;
		for(int j=2;j<7;j++){
			int num = prevsum%10;
			digits[j] = num;
			prevsum = prevsum + num;
			}
		if(k<=7){
			int sumdig = 0;
			for(int j=0;j<k;j++){
				sumdig = sumdig + digits[j];
				}
			if(sumdig%3==0){
				resultar.push_back("YES");
				}
			else{
				resultar.push_back("NO");
				}
			}
		else{
			k = k - 3;
			int s123 = digits[0] + digits[1] + digits[2];
			int s4567 = digits[3] + digits[4] + digits[5] + digits[6];
			long long int quot = k/4;
			int rem = k%4;
			long long int temp; 
			if(rem==0){
				temp = s123 + quot*s4567;
				}
			else{
				int remsum = 0;
				for(int j=3;j<=2+rem;j++){
					remsum = remsum + digits[j];
					}
				temp = s123 + quot*s4567 + remsum;
				}
			if(temp%3==0){
				resultar.push_back("YES");
				}
			else{
				resultar.push_back("NO");
				}
			}
		}
	for(int i=0;i<t;i++){
		cout << resultar[i] << "\n";
		}
	return 0; 
	}
