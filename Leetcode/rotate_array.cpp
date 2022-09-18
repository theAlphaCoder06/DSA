#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n);

        for(int i = 0; i<n; i++){
            temp[(i+k)%n]=nums[i];
        }
        nums = temp;
    }
    void printArray(vector<int> nums){
        for (int i = 0; i < nums.size(); i++)
        {
            cout<<nums[i]<<" ";
        }
        
    }
};

int main()
{
    vector<int> nums{1,2,3,4,5,6,7};
    int k = 3;

    Solution obj;
    obj.rotate(nums, k);
    obj.printArray(nums);

    return 0;
}