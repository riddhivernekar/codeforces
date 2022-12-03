#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int m1=min(a,b);
        int m2=min(c,d);
        int x1=max(a,b);
        int x2=max(c,d);
        if(x1>m2&&x2>m1){cout<<"yes"<<endl;}
        else{cout<<"no"<<endl;}
    }
	// your code goes here
	return 0;
}
