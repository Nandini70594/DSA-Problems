class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> people(n);
        int idx=0;

        for(int i=0; i<n; i++){
            people[i] = i+1;
        }

        int size=n;
        while(n>1 && size>0){
            idx= (idx+k-1) % size;
            for(int i=idx; i<size-1; i++){
                people[i] = people[i+1];
            }
            size--;
        }
        return people[0];
    }
};