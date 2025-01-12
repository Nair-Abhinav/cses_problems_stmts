#include<bits/stdc++.h>
#include<MATH.H>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(2<=n<=2*pow(10,6)){
        int arr[n-1];
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        int sumOfArray = 0;
        for(int i=0;i<n-1;i++){
            sumOfArray += arr[i];
        }
        int sumOfN = n*(n+1)/2;
        cout<<sumOfN-sumOfArray;
    }
}