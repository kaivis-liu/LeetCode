class Solution {
public:
  int titleToNumber(string s) {
    int len = s.size();  int res=0; int h=1;
    for(int i=len-1;i>=0;i--){
      res+=(s[i]-64)*h; h*=26;
    }
    return res;
  }
};
