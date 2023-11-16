Sample Input 1:
9
Sample Output 1:
2
3
5
7
Sample Input 2:
20
Sample Output 2:
2
3
5
7
11
13
17
19

  OUTPUT:

#include <iostream>
using namespace std;

void sieveOfSundaram(int n) {
    int newN = (n - 1) / 2;
    bool marked[newN + 1];
    for (int i = 0; i <= newN; i++)
        marked[i] = false;

    for (int i = 1; i <= newN; i++) {
        for (int j = i; (i + j + 2 * i * j) <= newN; j++) {
            marked[i + j + 2 * i * j] = true;
        }
    }

    if (n >= 2)
        cout << 2 << endl;

    for (int i = 1; i <= newN; i++) {
        if (marked[i] == false)
            cout << 2 * i + 1 << endl;
    }
}

int main() {
    int n;
    cin >> n;
    sieveOfSundaram(n);
    return 0;
}
