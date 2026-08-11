class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        for(int i=0;i<n;i++){
            for(int l=0,r=n-1;l<=r;){
                if(l==r){
                    image[i][l] = image[i][l]==0 ? 1 : 0;
                    break;
                }
                else{
                    if(image[i][l] == 0){
                        image[i][l] = 1;
                    } else{
                        image[i][l] = 0;
                    }

                    if(image[i][r] == 0){
                        image[i][r] = 1;
                    } else{
                        image[i][r] = 0;
                    }

                    swap(image[i][l],image[i][r]);
                    l++;
                    r--;
                }
            }
        }
        return image;
    }
};
        
