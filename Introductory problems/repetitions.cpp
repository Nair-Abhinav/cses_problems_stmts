#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    int count = 1;
    int maxcount = 1;
    for(int i = 1 ; i < n ; i++){
        if(s[i] == s[i-1]){  
            count++;
        }else{
            count = 1;
        }
        maxcount = max(maxcount,count);
    }
    cout<<maxcount<<endl;
    return 0;
}