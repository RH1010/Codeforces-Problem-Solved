#include <bits/stdc++.h>
using namespace std;

int main(){
    float x,y,z;
    cin>>x>>y>>z;
    float a,b,c;

    float sum=x+y+z;
    a=min(x,y);
    a=min(a,z);
    c=max(x,y);
    c=max(c,z);

    cout<<a<<endl;
    cout<<sum-(a+c)<<endl;
    cout<<c<<endl;
    cout<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;

    return 0;

}
