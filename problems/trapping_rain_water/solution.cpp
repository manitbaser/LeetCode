class Solution {
public:
    int trap(vector<int>& height) {
        int lptr = 0, rptr = height.size()-1;
        int count = 0;
        while(lptr<rptr){
            while(lptr<rptr && height[lptr]<height[lptr+1]){
                lptr++;
            }
            while(rptr>lptr && height[rptr]<height[rptr-1]){
                rptr--;
            }
            if(rptr<=lptr){
                return count;
            }
            if(height[lptr]<height[rptr]){
                int h = height[lptr];
                while(height[lptr]<=h && lptr<rptr){
                    count+=h-height[lptr];
                    lptr++;
                }
            }
            else{
                int h = height[rptr];
                while(height[rptr]<=h && lptr<rptr){
                    count+=h-height[rptr];
                    rptr--;
                }
            }

        }
        return count;
    }
};