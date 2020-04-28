class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int  z = 0;
        
        for(int i = 0;i<arr.size();i++){
            if(arr[i]==0){
                z++;
            }
        }
        for(int i = arr.size()-1;i>=0 && z>0;i--){
            arr[(i+z<arr.size()-1)?i+z:arr.size()-1] = arr[i];
            if(arr[i]==0){
                z--;
                arr[(i+z<arr.size()-1)?i+z:arr.size()-1] = arr[i];
            }
        }
    }
};