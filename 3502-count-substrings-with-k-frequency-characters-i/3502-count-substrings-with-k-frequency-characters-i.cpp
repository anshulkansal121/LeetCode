class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        // int n = s.size();
        // if (k == 1) {
        //     return (n * (n + 1)) / 2;
        // }

        // int i = 0;  
        // int j = 1; 
        // int validSubstring = 0;
        // int charcount = 1;  

        // while (i<n && i<j && j < n) {
        //     if (s[j] == s[i]) {
        //         charcount++;  
        //     } 
        //     if (charcount == k) {
        //         validSubstring += (n - j) ; 
                
        //         i++;
        //         j = i+1;
        //         charcount = 1;
        //     } else {
        //         j++; 
        //         if(j==n)    
        //         {
        //             i++;
        //             j=i+1;
        //             charcount = 1;
        //         }
        //     }
        // }

        // return validSubstring;
        int n = s.size();
        int count = 0;
        
    
        vector<int> freq(26,0);
        int left = 0;
        

        for (int right = 0; right < n; ++right) {

            freq[s[right]-'a']++;
        
            while (freq[s[right]-'a'] >= k) {
                // For each valid window, we add all substrings starting from 'left'
                // and ending anywhere from 'right' to the end of the string
                count += n - right;
                freq[s[left]-'a']--;
                left++;
            }
        }
        
        return count;
    }
};