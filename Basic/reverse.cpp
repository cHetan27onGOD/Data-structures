#include <iostream>
#include<string>
using namespace std;

int main() {
    string n, rev = "";
    cin >> n;

    for (int i = n.length() - 1; i >= 0; i--) {
        rev =rev+ n[i];   // concatenate character
    }

    cout << rev;
    return 0;
}