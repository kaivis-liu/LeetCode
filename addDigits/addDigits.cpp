class Solution {
public:
  int addDigits(int num) {
    int res=0;;
        
    while(num){
      res+=num%10; num=num/10;
    }
        
    if(res/10) addDigits(res);
    else return res;
  }
};
