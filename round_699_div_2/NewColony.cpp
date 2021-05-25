#include<bits/stdc++.h>
using std::vector;
using std::string;
using std::cin;
using std::cout;

int main(){
    int testcases;
    cin >> testcases;

    for(int z = 0; z < testcases; z++){
        int n_mountains, boulders;
        cin >> n_mountains >> boulders;
        
        vector<int> mountains(n_mountains,0);

        for(int i = 0; i < n_mountains; i++){
            cin >> mountains[i];
        }

        int k = 0;
        for(int i = 1; i < n_mountains; i++){
            int dif = mountains[i-1]-mountains[i];
            boulders += (dif < 0)?dif*(n_mountains.count(mountains[i-1])):0;

            if(boulders <= 0){
                k = i;
                break;
            }
        }

        if(boulders > 0){
            cout << -1 << "\n";
        }
        else{
            cout << k << "\n";
        }

    }
 
    return 0;
}