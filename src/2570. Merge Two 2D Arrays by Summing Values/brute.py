class Solution:
    def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:
        merged = nums1 + nums2

        id_to_value = {}

        for _id, value in merged:
            if _id in id_to_value:
                id_to_value[_id] += value
            else:
                id_to_value[_id] = value
        
        ##dict to list
        result = [[_id, value] for _id, value in id_to_value.items()]
        result.sort()

        return result
        
