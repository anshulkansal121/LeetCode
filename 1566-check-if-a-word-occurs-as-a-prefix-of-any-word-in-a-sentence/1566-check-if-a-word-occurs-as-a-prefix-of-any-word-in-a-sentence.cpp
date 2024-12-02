class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words;
        string temp= "";
        int  j = 0; // searchWord pointer
        int k = 0; //words pointer
        for(auto ch:sentence)
        {
            if(ch!=' ')
                temp+=ch;
            else
            {
                words.push_back(temp);
                temp="";
            }
        }
        words.push_back(temp);
        for(int i = 0;i<words.size();i++)
        {
            if(words[i][0]!=searchWord[0])
                continue;
            else
            {
                while(j<searchWord.size() && k<words[i].size() && searchWord[j]==words[i][k])
                {
                    j++;k++;
                }
                if(j>=searchWord.size()) return i+1;
                else
                {
                    k=0;j=0;
                }

            }
            
        }
    return -1;
    }
};