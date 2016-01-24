class Solution {
public:
  void moveZeroes(vector<int>& nums) {
    int len = nums.size();
    for(int i=0;i<len;i++){
      if(!nums[i]) {
	int j;
	for(j=i+1;j<len;j++){
	  if(nums[j]) { nums[i]=nums[j]; nums[j]=0; break; }
	}
	if(j==len) break;
      }
    }
  }
};
