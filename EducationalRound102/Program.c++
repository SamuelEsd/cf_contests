#include<bits/stdc++.h>
using std::vector;
using std::string;
using std::cin;
using std::cout;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int k = 0; k < test_cases; k++){
        int n, m;
        cin >> n >> m;
        
        string s;
        cin >> s;

        // Pre Prossessing
        // 0 min  1 max
        vector<vector<int>> instructions(n,vector<int> {0,0,0});
        if(s[0] == '+'){
            instructions[0][3] += 1;
            instructions[0][1] += 1;
        }
        else
        {
            instructions[0][3] -= 1;
            instructions[0][0] -= 1;
        }
        
        for(int i = 1; i < n; i++){
            if(s[i] == '+'){
                instructions[i][3] = instructions[i-1][3]+1;
                if(instructions[i][3] > instructions[i-1][1]){
                    instructions[i][1] = instructions[i][3];
                }
                else
                {
                    instructions[i][1] = instructions[i-1][1];
                }
                instructions[i][0] = instructions[i-1][0];
            }
            else
            {
                instructions[i][3] = instructions[i-1][3]-1;
                if(instructions[i][3] < instructions[i-1][0]){
                    instructions[i][0] = instructions[i][3];
                }
                else
                {
                    instructions[i][0] = instructions[i-1][0];
                }
                instructions[i][1] = instructions[i-1][1];
            }   
        }
        

        for(int i = 0; i < m; i++){
            int l, r;
            cin >> l >> r;
            if(l == 1 && r == n){
                cout << "|1|\n";
                continue;
            }
            if(r == n){
                cout << instructions[l-2][1]-instructions[l-2][0]+1 << "\n";
                continue;
            }
            else
            {
                cout << "No sé xd\n";
            }
        }

    }
    return 0;
}