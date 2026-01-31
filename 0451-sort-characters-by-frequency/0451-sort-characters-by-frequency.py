class Solution:
    def frequencySort(self, s: str) -> str:
        # create a dictionary to store the character and its frequency
        freq = {}
        for ch in s:
            if(freq.get(ch) == None):
                freq[ch] = 1
            else:
                freq[ch]+=1
        r = dict(sorted(freq.items(), key=lambda x:x[1],reverse = True))
        ss = ''.join([char * freq for char, freq in r.items()])
        return ss
        



        