#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t;// for(int T=0 ; T<=t ; T++)
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i=0 ; i<n ; i++)
            cin >> a[i];
      //  cout <<"Case " << T  <<": ";
       // if(n==1 && a[i]==1) cout << "Bob" << endl;
        int ans=0;
        for(int i=0 ; i<n ;i++)
        {
           // if(a[i]>1)
            {
               // int x =a[i];
               if(a[i]%2)
               a[i]-=1;
                ans^=a[i];
               // ans^=a[i]/2;
                //a[i]/=2;
            }
        }
        if(ans==0) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }

    return 0;
}
