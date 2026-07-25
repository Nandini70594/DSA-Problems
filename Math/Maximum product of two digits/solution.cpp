Approach 1-

class Solution {
public:
    int maxProduct(int n) {
       vector<int> digits;
       while(n>0){
        digits.push_back(n%10);
        n/=10;
       }

        int maximum=INT_MIN;
       for(int i=0; i<digits.size(); i++){
        for(int j=i+1; j<digits.size(); j++){
        int product= digits[i]*digits[j];
        maximum= max(maximum, product);
       }
       }
       return maximum;
    }
};

Approach 2-

class Solution {
public:
    int maxProduct(int n) {
        int first=-1;
        int second=-1;

        while(n>0){
            int digit= n%10;
            if(digit>first){
                second = first;
                first = digit;
            } else if(digit > second){
                second = digit;
            }
            n/=10;
        }
        return first*second;
    }
};
