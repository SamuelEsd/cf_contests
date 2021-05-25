#include<bits/stdc++.h>
using std::vector;
using std::string;
using std::cin;
using std::cout;

int main(){
    int testcases;
    cin >> testcases;

    for(int t = 0; t < testcases; t++){
        int n; 
        cin >> n;

        // . false
        // * true
        int x1, y1, x2, y2;
        int counter = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                char t;
                cin >> t;
                if (t == '*')
                {
                    if (counter == 0)
                    {
                        x1 = j;
                        y1 = i;
                        counter++;
                    }
                    else{
                        x2 = j;
                        y2 = i;
                        counter++;
                    }
                }
            }
        }


        int x3, y3, x4, y4;
        if (x1 == x2)
        {
            if(x1+1 >= n){
                x3 = x1-1;
                x4 = x1-1;

                y3 = y1;
                y4 = y2;
            }
            else{
                x3 = x1+1;
                x4 = x1+1;

                y3 = y1;
                y4 = y2;
            }
        }
        else if(y1 == y2)
        {
            if(y1+1 >= n){
                y3 = y1-1;
                y4 = y1-1;

                x3 = x1;
                x4 = x2;
            }
            else{
                y3 = y1+1;
                y4 = y1+1;

                x3 = x1;
                x4 = x2;
            }
        }
        else{
            x3 = x1;
            y3 = y2;

            x4 = x2;
            y4 = y1;
        }


        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == y1 && j == x1){
                    cout << "*";    
                }
                else if(i == y2 && j == x2){
                    cout << "*";    
                }
                else if(i == y3 && j == x3){
                    cout << "*";    
                }
                else if(i == y4 && j == x4){
                    cout << "*";    
                }
                else{
                    cout << ".";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}