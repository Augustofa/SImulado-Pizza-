#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int v;
        cin >> v;

        bitset<16> val(v);
        bool start = false;
        for(int i = val.size()-1; i >= 0; i--){
            if(val[i] != 0){
                start = true;
            }
            if(start){
                cout << val[i];
            }
        }
        if(!start){
            cout << 0;
        }
        cout << "\n";
    }
}