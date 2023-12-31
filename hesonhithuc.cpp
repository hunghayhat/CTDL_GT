#include <iostream>
using namespace std;
#define MAX 100

int m[MAX][MAX];

int C (int k, int n) {
    if (k == 0 || k == n)
    m[k][n] = 1;
    else {
        if (m[k][n] < 0){
            m[k][n] = C(k - 1, n - 1) + C(k - 1, n - 1);
        }
    }
    return m[k][n];
}

int main(){
    for (int i = 0; i < MAX; i ++) 
    for (int j = 0; j < MAX; j ++)
    m[i][j] = -1;
    cout << C(16,32);
}
