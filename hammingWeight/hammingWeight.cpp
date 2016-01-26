class Solution {
public:
  int hammingWeight(uint32_t n) {
    if(n==0) return 0;
    int cnt=1;
    while(n/2){
      if(n%2) cnt++;
      n/=2;
    }
    return cnt;
  }
};
