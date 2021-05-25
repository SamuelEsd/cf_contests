#include<bits/stdc++.h>
using std::vector;
using std::string;
using std::cin;
using std::cout;

int main(){
    int testcases;
    cin >> testcases;

    for(int z = 0; z < testcases; z++){
        int x, y;
        cin >> x >> y;
        string instructions;
        cin >> instructions;

        int u,d,l,r;
        u = 0;
        d = 0;
        l = 0;
        r = 0;

        for(int i = 0; i < instructions.size(); i++){
            if(instructions[i] == 'U'){
                u++;
            }
            else if (instructions[i] == 'D')
            {
                d++;
            }
            else if (instructions[i] == 'L')
            {
                l++;
            }
            else
            {
                r++;
            }    
        }

        bool possible_x = false;
        bool possible_y = false;
        if(x > 0){
            possible_x = (r >= x)?true:false;
        }
        else{
            possible_x = (l >= abs(x))?true:false;
        }

        if(y > 0){
            possible_y = (u >= y)?true:false;
        }
        else{
            possible_y = (d >= abs(y))?true:false;
        }
    
        string result = (possible_x && possible_y)?"YES":"NO";
        cout << result << "\n";
    }
 
    return 0;
}