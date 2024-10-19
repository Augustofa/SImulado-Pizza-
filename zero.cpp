#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int mat[n][m], res[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
            res[i][j] = mat[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] == 0){
                for(int k=0; k<m; k++){
                    res[i][k] = 0;
                }
                for(int k=0; k<n; k++){
                    res[k][j] = 0;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << res[i][j];
            if(j<m-1) cout << " ";
        }
        cout << "\n";
    }
    
}