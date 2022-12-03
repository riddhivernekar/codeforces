#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        float sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum/n==1){cout<<"0"<<endl;}
        else if(sum/n!=1&&(sum-n)>0){cout<<sum-n<<endl;}
        else {cout<<"1"<<endl;}
        
    }
	// your code goes here
	return 0;
}
