int isVowel(char c){
	return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
int* vowelStrings(char** words, int wordsSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
	int* prefix_cnt = (int*)malloc((wordsSize+1)*sizeof(int));
	prefix_cnt[0] = 0;

	for(int i=0;i<wordsSize;i++){
		if(isVowel(words[i][0]) && isVowel(words[i][strlen(words[i])-1]))
			prefix_cnt[i+1] = prefix_cnt[i]+1;
		else
			prefix_cnt[i+1] = prefix_cnt[i];
	}
	
	int* result = (int*)malloc(queriesSize*sizeof(int));

	for(int i=0;i<queriesSize;i++){
		int l = queries[i][0];
		int r = queries[i][1];
		result[i] = prefix_cnt[r+1] - prefix_cnt[l];
	}
	*returnSize = queriesSize;
	return result;
}
