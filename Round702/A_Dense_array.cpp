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

        for(int i = 1; i < n; i++){
            int min = std::min(nums[i-1],nums[i]);
            int max = std::max(nums[i-1],nums[i]);

            while (ceil((double)max/(double)min) > 2)
            {
                min *= 2;
                nums_left++;
            }
        }
        cout << nums_left << "\n";

    }

    return 0;
}