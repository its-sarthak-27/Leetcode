class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int n = nums.size();
        
        int count2=0;

        for(int i=0;i<n;i++){

            int count1=0;
            while(nums[i]!=0){
                nums[i] = nums[i]/10;
                count1++;
            }

            if(count1%2==0)
            count2++;
        }

        return count2;
    }
};