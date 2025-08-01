#include<bits/stdc++.h>
using namespace std;
int n;
string str;
unordered_map<string, int> word;
vector<int> dp;
int mod = 1e9 + 7;
int solve(int idx){
    if(idx == n){
        return 1;
    }
    if(dp[idx] != -1){
        return dp[idx];
    }
    long long ans = 0;
    for(int i = idx; i < n; i++){
        string sub = str.substr(idx, i - idx + 1);       
        if(word.count(sub)){
            ans = (ans + solve(i + 1)) % mod;
        }
    }
    return dp[idx] = ans;
}

int main(){
    cin >> str;
    n = str.size();
    dp.resize(n + 1, -1);
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        string s;
        cin >> s;
        word[s]++;
    }
    int result = solve(0);
    cout << result << endl;
    return 0;
}