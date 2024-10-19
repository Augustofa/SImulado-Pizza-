#include <bits/stdc++.h>

using namespace std;

int main(){
    int vet[3];
    cin >> vet[0] >> vet[1] >> vet[2];

    int soma = min(10 - vet[0], vet[0]);

    for(int i = 0; i < 2; i++){
        int p1, p2;
        if(vet[i] < vet[i+1]){
            p1 = vet[i+1] - vet[i];
            p2 = vet[i] + (10 - vet[i+1]);
        }else{
            p1 = vet[i] - vet[i+1];
            p2 = vet[i+1] + (10 - vet[i]);
        }
        soma += min(p1,p2);
    }

    cout << soma << "\n";
}