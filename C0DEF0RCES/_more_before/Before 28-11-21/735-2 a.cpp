#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        ll n; cin >> n;
        ll a[n];
        for(int i=0 ; i<n ; i++)
        {
           cin >> a[i];
        }
        ll m, mx{0};
        for(int i=0;i<n-1;i++)
        {
            m=a[i]*a[i+1];
            if(m>mx)
            {
                mx=m;
            }
        }
        cout << mx << endl;
    }
    return 0;
}
/*
    long long n,a[1000000],i,m,max=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
      scanf("%lld",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
      m=a[i]*a[i+1];
      if(m>max)
      {
        max=m;
      }
    }
    printf("%lld\n",max);
  }
}
*/
