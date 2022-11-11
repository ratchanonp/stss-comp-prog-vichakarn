#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int stick[n];

    for (int i = 0; i < n; i++)
        cin >> stick[i];
    sort(stick, stick + n);

    if (n < 3)
        cout << "no" << endl;
    else if (stick[0] + stick[1] > stick[n - 1])
        cout << "no" << endl;
    else
        cout << "yes" << endl;
}