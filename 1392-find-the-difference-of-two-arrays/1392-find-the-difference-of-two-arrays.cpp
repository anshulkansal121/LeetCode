class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer;
        vector<int> list;
        for(int i=0;i<nums1.size();i++){
            if(find(nums2.begin(),nums2.end(),nums1[i])==nums2.end()){
                if(find(list.begin(),list.end(),nums1[i])==list.end())
                    list.push_back(nums1[i]);
            }
        }
        answer.push_back(list);
        list.clear();
        for(int i=0;i<nums2.size();i++){
            if(find(nums1.begin(),nums1.end(),nums2[i])==nums1.end()){
                if(find(list.begin(),list.end(),nums2[i])==list.end())
                list.push_back(nums2[i]);
            }
        }
        answer.push_back(list);
        return answer;
    }
};