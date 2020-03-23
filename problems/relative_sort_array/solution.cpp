class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> x;
        for(int i = 0;i<arr1.size();i++){
            // if(x.find(arr1[i])==x.end()){
            //     x.insert(pair<int,int>(arr1[i],1));
            // }
            // else{
                x[arr1[i]]++;
            // }
        }
        vector<int> ans;
        for(int i = 0;i<arr2.size();i++){
            for(int j=0;j<x[arr2[i]];j++){
                ans.push_back(arr2[i]);
             }
            x[arr2[i]] = 0;
        }
        for(auto i = x.begin();i!=x.end();i++){
            for(int j=0;j<i->second;j++){
                ans.push_back(i->first);
            }
        }
        return ans;
    }
};
// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         map<int,int> m1;
//         vector<int> ans;
//         for(auto e:arr1)
//             m1[e]++;
        
//         for(auto e: arr2){
//             auto it = m1.find(e);
//             if(it!=m1.end()){
//                 while(it->second--)
//                     ans.push_back(it->first);
//             }
//         }
        
//         for(auto m : m1){
//             for(int i=0;i<m.second;i++){
//                ans.push_back(m.first); 
//             }
//         }

//         return ans;
// }};