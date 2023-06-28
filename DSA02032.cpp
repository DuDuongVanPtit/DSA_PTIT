#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
typedef pair<int, int> ii;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const ll mod = 1e9 + 7;
vector<vector<int>> ans;
int a[20];
vector<int> tmp;
int n, k;

void Try(int i, int sum = 0)
{
    if (sum > k)
        return;
    if (sum == k)
    {
        ans.push_back(tmp);
        return;
    }
    for (int j = i; j <= n; j++)
    {
        tmp.push_back(a[j]);
        // if (sum + a[j] <= k)
        Try(j, sum + a[j]);
        tmp.pop_back();
    }
}

void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    Try(1);
    if (ans.size() == 0)
    {
        cout << -1 << endl;
        return;
    }
    for (auto v : ans)
    {
        cout << "[";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
            if (i < v.size() - 1)
                cout << ' ';
        }
        cout << "]";
    }
    ans.clear();
    tmp.clear();
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    faster();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
