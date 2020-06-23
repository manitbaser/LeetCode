class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool flag = 0;
        for(int i =0;i<flowerbed.size() && !(flag==0 &&n<=0);i++)
            if(flowerbed[i] && flag) n++;
            else if(flowerbed[i] && !flag) flag = true;
            else if(!flag) n--,flag = true;
            else flag = false;
        return n<=0;
    }
};