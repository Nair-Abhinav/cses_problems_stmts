#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> even;
    vector<int> odd;
    if(n <= 3 && n != 1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    if(n == 1){
        cout<<1<<endl;
        return 0;
    }
    for(int i = 1 ; i <= n ; i++){
        if(i % 2 == 0){
            even.push_back(i);
        }else{
            odd.push_back(i);
        }
    }
    // pattern 
    // find even and odd numbers
    for(int i = 0 ; i < even.size() ; i++){
        cout<<even[i]<<" ";
    }
    for(int i = 0 ; i < odd.size() ; i++){
        cout<<odd[i]<<" ";
    }
    return 0;
}