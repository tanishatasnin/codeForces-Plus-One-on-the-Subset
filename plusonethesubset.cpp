#include <bits/stdc++.h>
using namespace std;
int main()
{
               int t, n, i;
               cin >> t;
               while (t--)
               {
                              cin >> n;
                              int a[n + 9];
                              for (i = 0; i < n; i++)
                                             cin >> a[i];
                              sort(a, a + n);
                              cout << a[n - 1] - a[0] << endl;
               }
               return 0;
}
