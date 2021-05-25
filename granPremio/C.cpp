#include<bits/stdc++.h>
using std::vector;
using std::string;
using std::cin;
using std::cout;

int main(){
    int n, m;
    cin >> n >> m;
    // Matriz de entrada
    vector<vector<double>> matriz(n,vector<double>(n,0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }

    

    // Matriz de vprobas a los postes en el tiempo i
    vector<vector<double>> dp(m,vector<double>(n,0));

    for(int i = 0; i < m; i++){
        for(int k = 0; k < m; k++){
            // agregas cada anterior
            // por su 
            dp[0][i] += matriz[k][i];
        }
        dp[0][i] /= m;
    }


    for(int tiempo = 1; tiempo < n; tiempo++){
        for(int poste = 0; poste < m; poste++){
            for(int k = 0; k < m; k++){
                // agregas cada anterior
                // por su 
                dp[tiempo][poste] += dp[tiempo-1][k]*matriz[k][poste];
            }
        }   
    }

    for(int i = 0; i < m; i++){
        cout << dp[dp.size()-1][i] << "\n";
    }
    return 0;
}