class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        
        vector<string> res;
        
        for(int i=0;i<12;i++){
            for(int j=0;j<60;j++){
                if(bitset<10>((i<<6)+j).count()==turnedOn)
                    res.push_back(to_string(i)+(j<10?":0":":")+to_string(j) );
                    //res.push_back(to_string(i)+(j<10)?":0":":"+to_string(j));
            }      
        }
        
        return res;
    
    } 
};