package main

import (
	"fmt"
)
func isZeroArray(nums []int, queries [][]int) bool {
	n := len(nums)
	diff := make([]int, n+1)

	for _, q := range queries {
		l, r := q[0], q[1]
		diff[l]++
		if r+1 < n {
			diff[r+1]--
		}
	}

	curr := 0
	for i := 0; i < n; i++ {
		curr += diff[i]
		if nums[i] > curr {
			return false
		}
	}

	return true
}


func main() {
    var numsSize, queriesSize int

    // Input for nums array
    fmt.Print("Enter the size of nums array: ")
    fmt.Scan(&numsSize)
    nums := make([]int, numsSize)
    fmt.Println("Enter the elements of nums array:")
    for i := 0; i < numsSize; i++ {
        fmt.Scan(&nums[i])
    }

    // Input for queries
    fmt.Print("Enter the number of queries: ")
    fmt.Scan(&queriesSize)
    queries := make([][]int, queriesSize)
    for i := 0; i < queriesSize; i++ {
        queries[i] = make([]int, 2)
        fmt.Printf("Enter query %d (two integers for range [l, r]): ", i+1)
        fmt.Scan(&queries[i][0], &queries[i][1])
    }

    // Call the function and print the result
    result := isZeroArray(nums, queries)
    fmt.Printf("Result: %v\n", result)
}