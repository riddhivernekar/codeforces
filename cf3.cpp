#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {int v,a=0;
    cin>>v;
    for(int i=1;i<=v;i++)
    {
        a++;
        if(a%3==0 || a%10==3)
    {a++;
        if(a%3==0 || a%10==3)
    {a++;}
    }
    }
    cout<<a<<endl;
    }
	// your code goes here
	return 0;
}
