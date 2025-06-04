func scoreOfString(s string) int {
    ans := 0
    for i:= 1; i< len(s); i++{
        ans += int(math.Abs(float64(s[i]) - float64(s[i-1])))
    }
    return ans
}