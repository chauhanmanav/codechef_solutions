#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    vector<int> digits; //yaha mujhe originally nhi pata ki kitne digits honge so i have used vector without size declaration..taaki push_back use kr paau.
    while(n>0){
        int unit_digit = n%10;//find unit digit first.
        digits.push_back(unit_digit);
        n = n/10; //unit digit le liya...now remove that digit.
    }
    //now our vector digits contain all the digits of the original number in reverse order.
    //lets say original number was 356.
    //then our vector digit = {6,5,3}
    //ab mujhe answer banana h..so follow the below logic.
    int result = 0; //isme mera answer rhega.
    int place_value = 1;
    //maths vaali place value hai....unit's place, ten's place and so on.
    for(int i=digits.size()-1;i>=0;i--){
        result = result + (digits[i]*place_value);
        place_value = place_value*10;
    }
    return result;
}

int main(){
    int t; //total number of testcases.
    cin >> t; //vriable declare krte hi sbse pehle value input lo.
    vector<int> resultar; 
    //vector<int> resultar(t);
    //jb bhi testcases vaale cques ho..to result ko hamesa ek vector me store krna h uske baad last me print krenge.
    for(int i=0;i<t;i++){
        int n;
        cin >> n; //again notice..variable declare krte hi sbse pehle input lo.
        //testcases vaale question me to have better understanding..hamesa saare inputs lekar ek new function me send kro...and us function se keval result ko return kro...to confusion nhi hogi kbhi.
        int result = solve(n);
        resultar.push_back(result);
        //resultar[i] = result;
    }
    for(int i=0;i<resultar.size();i++){
        cout << resultar[i] << endl;
    }
    return 0;
}