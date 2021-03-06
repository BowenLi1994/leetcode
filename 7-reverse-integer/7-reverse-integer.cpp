class Solution {
public:
    int reverse(int x) {
        
        int sign=(x>0)?1:-1;
        
        int res=0;
        while(x!=0){
            if(abs(res)>INT_MAX/10) return 0;
            res=res*10+x%10;
            x=x/10;
        }
        
        return res;
    }
};