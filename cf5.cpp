#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,i=0;
        cin>>n;
        int y=1;
    while(sum<n){
        sum=sum+y;
        y+=2;
        i++;
    }
    cout<<i<<endl;
    }
    
	return 0;
}
