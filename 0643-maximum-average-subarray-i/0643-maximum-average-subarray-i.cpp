class Solution {
public:
    double findMaxAverage(vector<int>& v, int k) {
    //     double maxavg=INT_MIN;
    //     double sum=0;
    //     for(int i=0;i<k;i++){
    //         sum+=nums[i];
    //     }  
    //     maxavg=sum;
    //     int i=0; int j=k;
    //     while(j<nums.size()){
    //         sum+=nums[j]-nums[i];
    //         if(sum>maxavg) maxavg=sum;
    //         i++;
    //         j--;
    //     }
    //     return maxavg/(double)k;
    // }
    int s=0,m=INT_MIN;
        for(int i=0;i<k;i++){
            s+=v[i];
        }
        m=s;
        int i=0,j=k;
        while(j<v.size()){
            s+=v[j]-v[i];
            if(s>=m){
                m=s;
            }
            j++;
            i++;
        }
        return (double)m/(double)k;
    }
};