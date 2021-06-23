class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0 ) 
        return 0 ;
        int current_index = 1;
        for (int i = 1 ;i < nums.size() ; i ++) {
            if(nums[i-1] != nums[i]) {
                nums[current_index] = nums[i];
                current_index++;
            }
        }
        return current_index;

    }
};