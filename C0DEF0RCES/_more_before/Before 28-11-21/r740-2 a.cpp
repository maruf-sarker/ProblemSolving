#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t; while(t--)
    {
        int n; cin >> n;
        int cnt{0};
        int a[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
        }
        if(is_sorted(a,a+n))
            {
                cout << 0 << endl;
            }
        else{
            while( !is_sorted(a,a+n) )
            {
                for(int j=0 ; j <n-1 ; j++)
                {
                    if(a[j]> a[j+1]) swap(a[j],a[j+1]);

                }
                cnt++;

            }
            cout << cnt+1 << endl;
        }


    }

    return 0;
}
