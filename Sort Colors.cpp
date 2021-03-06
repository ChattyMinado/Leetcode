// q -> https://leetcode.com/problems/sort-colors/submissions/


class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        
        int left=0;
        int right=n-1;
        int mid=0;
        
        while(mid<=right){
            
            
            if(nums[mid]==0){
                swap(nums[mid],nums[left]);
                mid++;
                left++;
            }
            
            else if(nums[mid]==1){
                mid++;
            }
            
            else if(nums[mid]==2){
                swap(nums[mid],nums[right]);
                right--;
            }
               
            
        }
        
    }
};
