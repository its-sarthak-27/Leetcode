class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        
        int maximum = *max_element(candies.begin(), candies.end());

        vector<bool> result(n);

        for (int i = 0; i < n; i++) {
            int sum = candies[i] + extraCandies;
            if (sum >= maximum) {
                result[i] = true;
            } else {
                result[i] = false;
            }
        }

        return result;
    }
};
