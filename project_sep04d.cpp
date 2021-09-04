#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,k,n,cnt=0,a;
    cin>>t;
    while(t--){
        cnt++;
        int sum = 0,l=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            sum = sum + abs(a);
            if(a<0){
                l++;
            }
            
        }
        if(l == n){
            printf("Case %d: inf\n",cnt);
        }
        else{
           int gcd = __gcd(sum,n-l);
            int t1 = sum/gcd;
            int t2 = (n-l)/gcd;
            
        }
        }
 cout<<"Case "<< cnt<<":"<<t1<<"/"<<t2<<endl;
    return 0;
}