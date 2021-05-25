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
        vector<int> nums(n,0);

        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        int nums_left = 0;

        int c0 = 0;
        int c1 = 0;
        int c2 = 0;

        int cmax = n/3;

        for(int i = 0; i < n; i++){
            c0 += nums[i]%3 == 0?1:0;
            c1 += nums[i]%3 == 1?1:0;
            c2 += nums[i]%3 == 2?1:0;
        }

        vector<int> remainders {c0,c1,c2};

        int i = 0;
        while(!(remainders[0] == remainders[1] && remainders[1] == remainders[2])){
            if(remainders[i] > cmax){
                int dif = remainders[i] - cmax;
                nums_left += dif;
                remainders[i] -= dif;
                remainders[(i+1)%3] += dif;
            }
            i = (i+1)%3;
        }
        
        cout << nums_left << "\n";

    }

    return 0;
}