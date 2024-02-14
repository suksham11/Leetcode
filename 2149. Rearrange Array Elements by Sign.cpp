class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     int n = nums.size();
     vector<int> ans(n,0);
     int postidx = 0 , negidx = 1;

     for(int i=0 ; i<n ; i++){
        if(nums[i] > 0){
            ans[postidx] = nums[i];
            postidx += 2;
        }
        else{
            ans[negidx] = nums[i];
            negidx += 2;
        }
     }
    return ans;
    }
};
