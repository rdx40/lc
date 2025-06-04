func differenceOfSums(n int, m int) int {
    totSum := n * (n + 1) / 2
    divSum := sOD(n, m)
    nonSum := totSum - divSum
    return nonSum - divSum
}

func sOD(n int, m int) int {
    cnt := int(math.Floor(float64(n) / float64(m)))
    return m * cnt * (cnt + 1) / 2
}