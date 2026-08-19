class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int, set<int>> reserved;
        for(auto it : reservedSeats){
            reserved[it[0]].insert(it[1]);
        }

        long long ans = 2LL * (n-reserved.size());
        for(auto &[row, seats] : reserved){

            bool A=true, B=true, C=true;
            for(int seat=2; seat<=5; seat++){
                if(reserved[row].count(seat)){
                A=false;
                break;
                }
            }
            for(int seat=4; seat<=7; seat++){
                if(reserved[row].count(seat)){
                B=false;
                break;
                }
            }
            for(int seat=6; seat<=9; seat++){
                if(reserved[row].count(seat)){
                C=false;
                break;
                }
            }

            if(A && C){
                ans+=2;
            } else if(A || B || C){
                ans+=1;
            }
        }
        return ans;
    }
};