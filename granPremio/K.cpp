#include<bits/stdc++.h>
using std::vector;
using std::string;
using std::cin;
using std::cout;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> panes(n,0);
    vector<int> ollas(m,0);
    for(int i = 0; i < n; i++){
        cin >> panes[i];
    }
    for(int i = 0; i < m; i++){
        cin >> ollas[i];
    }

    int desperdicio = 0;
    int j = 0;
    for(int i = 0; i < n; i++){
        // si ya no hay ollas alv
        if(j >= m){
            break;
        }
        // si sí ve juntando
        int sopaActual = 0;
        while(j < m){
            sopaActual += ollas[j];
            // si ya te alcansa cuenta el desperdicio y a la que sigue
            if(sopaActual >= panes[i]){
                desperdicio += sopaActual-panes[i];
                j++;
                break;
            }
            j++;
        }      
    }
    while (j < m)       
    {
        desperdicio += ollas[j];
        j++;
    }
    
    cout << desperdicio << "\n";
    return 0;
}