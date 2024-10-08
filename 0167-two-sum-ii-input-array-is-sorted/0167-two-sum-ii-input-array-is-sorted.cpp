class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result(2,0);
        int i = 0;
        int j = numbers.size()-1;
        while(i<numbers.size())
        {
            if(numbers[i] + numbers[j]==target)
            {
                result[0] = i+1;
                result[1] = j+1;
                break;
            }
            else if(numbers[i] + numbers[j]>target)
                j--;
            else
                i++;
        }
        return result;
    }
};