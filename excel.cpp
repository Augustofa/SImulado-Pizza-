#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int l1, l2;

    l1 = ((n-1)/26) - 1;
    l2 = ((n-1)%26) + 1;
    
    char c1, c2;
    c2 = 'A' + l2;
    if(l1 >= 0){
        c1 = 'A' + l1;
        cout << c1;
    }
    cout << (char) (c2 - 1 )<< "\n";
}