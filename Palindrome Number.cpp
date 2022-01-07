class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp = x;
        long long int r=0,pal=0;

  while(x>0){
    r = x%10;
    pal = (pal*10)+r;
    x = x/10;
  }

  if(temp==pal){
    return 1;
  }
  else{
    return 0;
  }
        
    }
};
