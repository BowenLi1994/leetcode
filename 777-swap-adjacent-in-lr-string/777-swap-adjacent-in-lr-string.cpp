class Solution {
public:
    bool canTransform(string start, string end) {
        
        int i=0,j=0,n=start.size();
        
        while(i<n && j<n){
            while(i<n&&start[i]=='X') i++;
            while(j<n&&end[j]=='X') j++;
            
            if(start[i]!=end[j]) return false;
            
            if(start[i]=='L'&&i<j) return false;
            if(start[i]=='R'&&i>j) return false;
            i++;
            j++;
        }
        
        while(i<n){
            if(start[i]!='X') return false;
            i++;
        }
        
        while(j<n){
            if(end[j]!='X') return false;
            j++;
        }
        
        return true;
    }
};