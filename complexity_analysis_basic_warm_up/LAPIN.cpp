#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    //ab dekho..is question me apne ko string ko 2 halves me divide krna h
    //and then check ki if dono half me same characters..same number of times aaye hain ya nhi.
    // to sbse pehle 2 frequency array banayenge.
    vector<int> freq_lefthalf(26,0);
    vector<int> freq_righthalf(26,0);//vector ki size 26 li h..kuki alphabets 26 hi hote hain.
    int size_of_string = s.length();
    for(int i=0;i<size_of_string/2;i++){
        //current_character is s[i];
        freq_lefthalf[int(s[i])-97] = freq_lefthalf[int(s[i])-97] + 1;
    }
    //left half calculate krte waqt probelm nhi h...right half ko check krte waqt antar aayega
    //jese rotor ki length 5 h...to(5/2) is 2 to 0,1 ye to lefthalf me agye.
    // but then right half k liye decide krna pade ga ki kis index se start krna h.
    // to odd k case (5/2)+1 se start and even k case me (size/2) se start krna h..
    // ye logic tb banega jab copy pr try kroge.
    int startidx;
    if(size_of_string%2==0){
        startidx = size_of_string/2;
    }
    else{
        startidx = (size_of_string/2) + 1;
    }
    for(int i=startidx;i<size_of_string;i++){
        freq_righthalf[int(s[i])-97] = freq_righthalf[int(s[i])-97] + 1;
    }
    //ab dono freq array bana liye..now simply check them element wise....agar khin bhi difference agya..then we return No..vrna sab same hai to yes return.
    int flag = 0;
    for(int i=0;i<26;i++){
        if(freq_lefthalf[i]==freq_righthalf[i]){
            continue;
        }
        else{
            flag = 1;
            break;
        }
    }
    string result;
    if(flag==0){
        result = "YES";
    }
    else{
        result = "NO";
    }
    return result;
}

int main(){
    int t; //total number of testcases.
    cin >> t; //vriable declare krte hi sbse pehle value input lo.
    vector<string> resultar; 
    //vector<int> resultar(t);
    //jb bhi testcases vaale cques ho..to result ko hamesa ek vector me store krna h uske baad last me print krenge.
    for(int i=0;i<t;i++){
        string s;
        cin >> s; //again notice..variable declare krte hi sbse pehle input lo.
        //testcases vaale question me to have better understanding..hamesa saare inputs lekar ek new function me send kro...and us function se keval result ko return kro...to confusion nhi hogi kbhi.
        string result = solve(s);
        resultar.push_back(result);
        //resultar[i] = result;
    }
    for(int i=0;i<resultar.size();i++){
        cout << resultar[i] << endl;
    }
    return 0;
}