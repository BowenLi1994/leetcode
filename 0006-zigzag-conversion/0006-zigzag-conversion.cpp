class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;

        string res="";
        int increment=(numRows-1)*2;
        for(int r=0;r<numRows;r++){
            for(int i=r;i<s.size();i+=increment){
                res+=s[i];
                if(r>0 && r<numRows-1 && i+increment-2*r<s.size()){
                    res+=s[i+increment-2*r];
                }
            }
        }
        return res;
    }
};