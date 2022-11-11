/*
    TASK: TOI.cpp
    LANG: C++
    AUTHOR: Ratchanon Panmas
    Center: WU
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int var[26] = {0};
    char command;
    cin >> command;
    while (command != '!')
    {
        char key1;
        char key2;
        int value;
        switch (command)
        {
        case '=':
            cin >> key1 >> value;
            var[key1 - 65] = value;
            break;
        case '#':
            cin >> key1;
            cout << var[key1 - 65] << "\n";
            break;
        case '+':
            cin >> key1 >> key2;
            var[key1 - 65] += var[key2 - 65];
            break;
        case '-':
            cin >> key1 >> key2;
            var[key1 - 65] -= var[key2 - 65];
            break;
        case '*':
            cin >> key1 >> key2;
            var[key1 - 65] *= var[key2 - 65];
            break;
        case '/':
            cin >> key1 >> key2;
            var[key1 - 65] /= var[key2 - 65];
            break;
        }
        cin >> command;
    }
    cout << "!\n";
    return 0;
}
