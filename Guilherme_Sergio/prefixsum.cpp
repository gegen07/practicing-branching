#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct FenwickTree {
    vector<int> bit;  // binary indexed tree
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n, 0);
    }

    FenwickTree(vector<int> a) : FenwickTree(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }

    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};


int main(){
    FenwickTree tree(6);

    tree.add(0, 5);
    tree.add(1, 6);
    tree.add(2, 7);
    tree.add(3, 8);
    tree.add(4, 9);
    tree.add(5, 10);

    for(int i = 0; i < 6; i++){
        cout << tree.sum(i) << " ";
    }

    return 0;
}