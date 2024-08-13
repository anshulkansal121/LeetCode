class Solution {
public:
    void findcombination(int ind, int target, vector<int>& arr, vector<vector<int>>& result, vector<int>& ds)
    {
        if(target == 0){
            result.push_back(ds);
            return;
        }
        for(int i = ind;i<arr.size();i++)
        {
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            findcombination(i+1, target-arr[i],arr,result,ds);
            ds.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       sort(candidates.begin(),candidates.end());
       vector<vector<int>> result;
       vector<int> ds;
       findcombination(0,target,candidates,result,ds);
       return result; 
    }
};

auto init = [](){
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();