#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, y, m, d;
    cin>> n;

    y = n/365;
    n %= 365;
    m = n/30;
    n %= 30;
    d = n;

    cout<< y << " years" << endl;
    cout<< m << " months" << endl;
    cout<< d << " days" << endl;

}
