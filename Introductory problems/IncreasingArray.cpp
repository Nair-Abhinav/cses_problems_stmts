#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    long long moves = 0;
    long long prev = a[0];
    for(int i = 1 ; i < n ; i++){
        if(a[i] < prev){
            moves += (prev - a[i]);
        }else{
            prev = a[i];
        }
    }
    cout<<moves<<endl;
    return 0;
}