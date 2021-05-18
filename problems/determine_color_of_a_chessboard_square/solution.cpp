class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if((coordinates[0]-'a')%2){
            if((coordinates[1]-'1')%2) return false;
            return true;
        }
        if((coordinates[1]-'1')%2) return true;
        return false;
    }
};