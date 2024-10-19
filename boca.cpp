#include <bits/stdc++.h>

using namespace std;

int compare(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b){
    // cout << a.first << " " << b.first << "\n";
    if(a.second.first != b.second.first){
        return a.second.first > b.second.first;
    }
    if(a.second.second != b.second.second){
        return a.second.second < b.second.second;
    }
    return a.first < b.first;
        
}

int main(){
    int n, m;

    cin >> n >> m;
    

    // vector<pair<int, int>>v(n+1, {0, 0});
    vector<pair<int,pair<int, int>>> v(n+1, {0, {0, 0}});

    while(m--){
        int c, min, t, p=20;
        char q;

        cin >> c >> q >> min >> t;
        t--;
        v[c].first = c;
        v[c].second.first++;
        v[c].second.second += (t*p) + min;
    }

    for(int i = 1; i <= n; i++){
        if(v[i].first == 0){
            // cout << "a" << i << "\n";
            v[i].first = i;
        }
    }

    vector<int> pos;

    // for(int i = 0; i < n; i++){
    //     pair<int,int> min = {INT32_MAX, INT32_MAX};
    //     int minPos;
    //     for(int j = i; j < n-1; j++){
    //         if(v[j].first){

    //         }
    //     }
    // }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<n+1; i++){
        if(v[i].first == 0){
            continue;
        }
        cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << "\n";
    }
}