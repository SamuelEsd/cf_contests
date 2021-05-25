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

        vector<long long> nums(n+2,0);
        for (int i = 0; i < n + 2; i++)
        {
            cin >> nums[i];
        }
        sort(nums.begin(),nums.end());

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }

        if(sum == nums[n] || sum == nums[n+1]){
            for (int i = 0; i < n; i++)
            {
                cout << nums[i] << " ";
            }
            cout << "\n";
            continue;
        }

        int wanted = (sum + nums[n]) - nums[n+1];
        bool found = false;
        for (int i = 0; i < n+1; i++)
        {
            if(wanted == nums[i]){
                found = true;
                break;
            }
        }
        
        bool erased = false;
        if(found){
            for (int i = 0; i < n+1; i++)
            {
                if(wanted != nums[i]){
                    cout << nums[i] << " ";
                }
                else if (erased)
                {
                    cout << nums[i] << " ";
                }
                else{
                    erased = true;
                }
                
            }   
        }
        else{
            cout << "-1";
        }
        cout << "\n";
        continue;


        
    }

    return 0;
}