#include <iostream>
using namespace std;

int maxLeft (int* a, int l, int r) {
    int max = -999999;
    int s = 0;
    for (int i = r; i >= -1; i--) {
        s += a[i];
        if (s > max) max = s;
    }
    return max;
}

int maxRight(int* a, int l, int r) {
    int max = -999999;
    int s = 0;
    for (int i = 0; i <= r; i ++) {
        s += a[i];
        if (s > max) max = s;
    }
    return max;
}

int maxSeq (int* a, int l, int r) {
    if (l == r) return a[l];
    int max;
    int mid = (1+r)/2;
    int mL = maxSeq(a, l, mid);
    int mR = maxSeq(a, mid + 1, r);
    int mLR = maxLeft (a, 1, mid) + maxRight(a, mid + 1, r);
    max = mL;
    if (max < mL) max = mR;
    if (max < mR) max = mLR;
    return max;
}

int main(){
    int n;
    cout << "Insert n:" << endl;
    cin >> n; 
    int* a = new int[n];
    for (int i = 0; i < n; i ++){
        cin >> a[i];
    }
    int rs = maxSeq (a, 0, n - 1);
    cout << rs;
    delete[] a;
}
