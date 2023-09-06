#include <iostream>
using namespace std;

void move(int n, char A, char B, char C) {
    if (n == 1)
    cout << "Move 1 disk from " << A << " to " << B << endl;
    else {
        move(n-1, A, C, B);
        move(1, A, B, C);
        move(n-1, C, B, A);
    }
}

int main() {
    int n = 3;
    move(n, 'A', 'B', 'C');
    return 0;
}