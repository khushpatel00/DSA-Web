#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 0 || j == 4 || (i == j && i <= 3 && j <= 2) || (i + j == 4 && i <= 3 && j >= 2)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
