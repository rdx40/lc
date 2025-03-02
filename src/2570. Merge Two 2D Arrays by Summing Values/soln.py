class Solution:
    def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:

        #ptrs for nums1 and nums2
        i,j=0,0
        result = []

        #if nums1[i] < nums2[j] then we add nums1[i] into the result else if theyre equal we add the values 

        while i < len(nums1) and j<len(nums2):
            if nums1[i][0] < nums2[j][0]:
                result.append(nums1[i])
                i+=1
            elif nums1[i][0] > nums2[j][0]:
                result.append(nums2[j])
                j+=1
            else:
                result.append([nums1[i][0], nums1[i][1]+nums2[j][1]])
                i+=1
                j+=1
        ##remaining values
        while i<len(nums1):
            result.append(nums1[i])
            i+=1
        while j<len(nums2):
            result.append(nums2[j])
            j+=1
        return result
        
