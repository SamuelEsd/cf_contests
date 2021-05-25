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
        vector<vector<int>> repetitions;

        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            if(nums[i] == nums[0]){
                counter++;
            }
        }
        if (counter == 1)
        {
            cout << 1 << "\n";
        }
        else{
            int index = 0;
            for (int i = 0; i < n; i++)
            {
                if (nums[i] != nums[0])
                {   
                    cout << i+1 << "\n";
                    break;
                }
            }
            
        }

    }

    return 0;
}