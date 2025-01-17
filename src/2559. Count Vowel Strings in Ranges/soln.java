class Solution {
    private boolean isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    public int[] vowelStrings(String[] words, int[][] queries) {
        int wordsSize = words.length;
        int[] prefixCnt = new int[wordsSize + 1]; 
        
        for (int i = 0; i < wordsSize; i++) {
            if (isVowel(words[i].charAt(0)) && isVowel(words[i].charAt(words[i].length() - 1))) {
                prefixCnt[i + 1] = prefixCnt[i] + 1;
            } else {
                prefixCnt[i + 1] = prefixCnt[i];
            }
        }

        int queriesSize = queries.length;
        int[] result = new int[queriesSize];

        for (int i = 0; i < queriesSize; i++) {
            int l = queries[i][0];
            int r = queries[i][1];
            result[i] = prefixCnt[r + 1] - prefixCnt[l];
        }

        return result;
    }

    
}

