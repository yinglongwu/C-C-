#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i < n+1; i++) {
        for (int j = 0; j < abs(4-i); j++)
            cout<<' ';
        for (int j=abs(3-i); j < i+4; j++)
            if (i+j>=5&&i+j<=11) cout<<'*';
        cout<<endl;
    }
    return 0;
}

