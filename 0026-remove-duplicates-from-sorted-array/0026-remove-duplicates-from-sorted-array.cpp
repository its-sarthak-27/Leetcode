class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=0;
    
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[n]){
                n++;
                nums[n]=nums[j];

            }
        }

        return n+1;
    }
};