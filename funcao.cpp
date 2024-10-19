#include <bits/stdc++.h>

using namespace std;

int main(){
    map<char,int> mapa = {
        {'{',1},
        {'}',1},
        {'[',2},
        {']',2}, 
        {'(',3},
        {')',3}
    };

    map<char,char> refs = {
        {'{','}'}, 
        {'[',']'}, 
        {'(',')'}
    };

    string s;
    getline(cin, s);
    int i = 1;

    stack<char> st;
    st.push('a');
    bool res = true;

    for(auto c : s){
        // cout << c << " " << i << "\n";
        if(st.size() == 1 && mapa[c] != 0){
            // cout << "a" << c << "\n";
            if(!refs[c]){
                res = false;
                break;
            }else{
                st.push(refs[c]);
                i = mapa[c] + 1;
            }
        }else if(c == st.top()){
            st.pop();
            i--;
        }else if(mapa[c] == i){
            // cout << "b" << c << "\n";
            st.push(refs[c]);
            i++;
        }else if(mapa[c] != 0){
            // cout << c << "\n";

            res = false;
            break;
        }
    }

    // cout << st.top() << "res\n";

    if(st.size() > 1){
        res = false;
    }

    if(res){
        cout << 1 << "\n";
    }else{
        cout << 0 << "\n";
    }
}   