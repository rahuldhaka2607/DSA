class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());

    //     for(int i=0;i<nums.size()-1;i++){
    //         if(nums[i]==nums[i+1]){
    //             return nums[i];
    //         }
    //     }
    // return -1;
    // visited array
        // int ans = -1;

        // // visited solution
        // for (int i = 0; i < nums.size(); i++) {
        //     int index = abs(nums[i]) - 1;

        //     // already visited?
        //     if (nums[index] < 0) {
        //         ans = index + 1;
        //         break;
        //     }

        //     // mark visited
        //     nums[index] *= -1;
        // }

        // return ans;  
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
};