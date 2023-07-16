def func(seq1, seq):
    m = len(seq1)
    n = len(seq)
    dp = [[0] * (n + 1) for a in range(m + 1)]
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if seq1[i - 1] == seq[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
    ss = ''
    i, j = m, n
    while i > 0 and j > 0:
        if seq1[i - 1] == seq[j - 1]:
            ss= seq1[i - 1] + ss
            i -= 1
            j -= 1
        elif dp[i - 1][j] > dp[i][j - 1]:
            i -= 1
        else:
            j -= 1
    return ss
seq1 = input()
seq = input()
print(func(seq1, seq))
