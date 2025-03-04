#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1 , n2, result;
    char op, eq;
    cin >> n1 >> op >> n2 >> eq >> result;

    if(op == '+'){
        if(n1 + n2 == result)
            cout << "Yes" << endl;
        else
            cout << n1 + n2 << endl;
    }
    else if(op == '-'){
        if(n1 - n2 == result)
            cout << "Yes" << endl;
        else
            cout << n1 - n2 << endl;
    }
    else {
        if(n1 * n2 == result)
            cout << "Yes" << endl;
        else
            cout << n1 * n2 << endl;
    }
    return 0;

}
