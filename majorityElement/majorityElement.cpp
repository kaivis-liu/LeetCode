class Solution {
public:
  int majorityElement(vector<int>& nums) {
    int len = nums.size();
    int flag=0;
    int res;
    for(int i=0;i<len;i++){
      if(flag==0) { res=nums[i]; flag=1; }
      else{
	if(nums[i]==res) flag++;
	else flag--;
      }
    }
    return res;
  }
};
