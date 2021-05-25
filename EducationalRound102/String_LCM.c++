#include<bits/stdc++.h>
using std::vector;
using std::string;
using std::cin;
using std::cout;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int k = 0; k < test_cases; k++){
        string s, t;
        cin >> s >> t;

        string lcm_s = "";

        int i = 0;
        int j = 0;
        bool z = true;
        while(i != 0 || j != 0 || z == true){
            if(s[i] != t[j]){
                cout << "-1\n";
                z = true;
                break;
            }
            else
            {
                lcm_s += s[i];
                i = (i+1)%s.size();
                j = (j+1)%t.size();
            }
            z = false;
        }
        if(!z){
            cout << lcm_s << "\n";
        }
    }
    return 0;
}