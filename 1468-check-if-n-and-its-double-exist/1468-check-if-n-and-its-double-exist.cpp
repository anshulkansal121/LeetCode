class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
         unordered_map<int,int> mp;
        for (int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        for (auto val: mp){
            if ((val.first)!=0 && mp.find((val.first)*2)!= mp.end())return true;
            if (val.first==0 && mp[val.first]>=2)return true;
        }
        return false;
    }
};