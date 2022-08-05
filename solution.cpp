class Solution {
public:
    int bs_high(vector<int> nums,int t){
        int l=0,h=nums.size()-1;
       
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]<t){
                l=m+1;
            }
            else if(nums[m]>t){
                h=m-1;
            }
            else{
                if(m<nums.size()-1 && nums[m]==nums[m+1]){
                    l=m+1;
                }
                else{
                    return m;
                }
            }
        }
        return -1;
    }
    int bs_low(vector<int> nums,int t){
        int l=0,h=nums.size()-1;
       
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]<t){
                l=m+1;
            }
            else if(nums[m]>t){
                h=m-1;
            }
            else{
                if(m>0 && nums[m-1]==nums[m]){
                    h=m-1;
                }
                else{
                    return m;
                }
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a;
        a.push_back(bs_low(nums,target));
        a.push_back(bs_high(nums,target));
        return a;
    }
};
