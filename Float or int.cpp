#include <bits/stdc++.h>
using namespace std;

int main(){
    double num;
    int x;
    cin >> num;
    x = num ;
    if (x == num){
        cout <<"int "<< x;
    }else{
        cout <<"float "<< x <<" "<<num-x;
    }

    return 0;

}

