#include<bits/stdc++.h>
using std::vector;
using std::string;
using std::cin;
using std::cout;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i = 0; i < test_cases; i++){
        int n, d;
        cin >> n >> d;
        vector<int> nums(n,0);

        for(int j = 0; j < n; j++){
            cin >> nums[j];
        }
        sort(nums.begin(), nums.end());
        if(nums[n-1] <= d){
            cout << "YES\n";
        }   
        else if(nums[0]+nums[1] <= d){
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    return 0;
}