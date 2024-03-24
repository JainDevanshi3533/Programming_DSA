class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans= 0;
        for(int i=0;i<nums.size();){
            if(nums[i]<0){
                ans= i;
                break;
            }
            else{
                // cout<<"i-> "<<i <<"   nums[i] -> "<<nums[i]<<endl;
                int temp = nums[i];
                nums[i]=nums[i]*-1;
                i =temp;
                // cout<<"i-> "<<i <<"   nums[i] -> "<<nums[i]<<endl;        
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) nums[i]=nums[i]*-1;
        }
        return ans;
    }
};