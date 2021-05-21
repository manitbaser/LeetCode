class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> boxes(46,0);
        int temp, num;
        for(int i = lowLimit;i<=highLimit;i++){
            temp = i;
            num = 0;
            while(temp){
                num+=temp%10;
                temp/=10;
            }
            boxes[num]++;
        }
        return *max_element(boxes.begin(),boxes.end());
    }
};