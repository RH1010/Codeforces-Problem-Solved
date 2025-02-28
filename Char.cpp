#include <bits/stdc++.h>
using namespace std;

int main(){
   char ch;
    cin>> ch;

    if(ch >= 65 and ch <= 90)
        cout << (char)(ch + 32) << endl;
    else
        cout << (char)(ch - 32) << endl;
}
