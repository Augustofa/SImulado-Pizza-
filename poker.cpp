#include <bits/stdc++.h>

using namespace std;

int main(){
    int ult = -1;
    int cont = 1;
    int start = 0;
    bool res = true;
    int max = 5;

    int vet[6];
    for(int j = 0; j < 5; j++){
        cin >> vet[j];
    }
 
    sort(vet, vet+5);
    if(vet[0] == 1){ 
        vet[5] = 14;
        start++;
    }

    for(int i = start; i < max; i++){
        int n = vet[i];
        if(n == 1 && cont == 4){
            continue;
        }
        if(n != ult+1 && ult != -1){
            res = false;
            break;
        }
        ult = n;
        cont++;
    }


    if(res){
        cout << "S\n";
    }else{
        cout << "N\n";
    }
}