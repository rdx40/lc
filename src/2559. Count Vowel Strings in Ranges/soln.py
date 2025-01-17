class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        vowel_set = set("aeiou")

        prefix_cnt = [0] * (len(words)+1) ##+1 for the offsett

        for i, w in enumerate(words):
            if w[0] in vowel_set and w[-1] in vowel_set:
                prefix_cnt[i+1] = prefix_cnt[i]+1
            else:
                prefix_cnt[i+1] = prefix_cnt[i]

        return [prefix_cnt[r+1] - prefix_cnt[l] for l, r in queries]
