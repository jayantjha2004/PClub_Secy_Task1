#include <iostream>

using namespace std;

int main()
{
    //solution
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;
        if (a % 4 == 1) {
            cout << "Alice\n";
        }
        else cout << "Bob\n";
    }

}

