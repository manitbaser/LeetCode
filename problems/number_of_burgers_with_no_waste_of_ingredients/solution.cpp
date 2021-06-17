class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        return (tomatoSlices%2 || cheeseSlices*4<tomatoSlices || cheeseSlices*2>tomatoSlices)? vector<int>(): vector<int>{ (tomatoSlices-cheeseSlices*2)/2, (-tomatoSlices+cheeseSlices*4)/2};
    }
};