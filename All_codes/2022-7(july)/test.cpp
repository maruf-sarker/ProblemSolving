
#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

 //   ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
        for (int i=0 ; i< 30; i++)
        {
            cout << n << endl;
            n/=2;
        }
    }

    return 0;
}
