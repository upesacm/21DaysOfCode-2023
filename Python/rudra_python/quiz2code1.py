def find_longest_common_subsequence(s1, s2):
    l1 = len(s1)
    l2 = len(s2)
    dp = [[0 for i in range(l2+1)] for j in range(l1+1)]
    for i in range(1, l1+1):
        for j in range(1, l2+1):
            if s1[i-1] == s2[j-1]:
                dp[i][j] = 1+dp[i-1][j-1]
            else:
                dp[i][j] = max(dp[i-1][j], dp[i][j-1])
    
    i = l1
    j = l2
    ans = ""
    while i > 0 and j > 0:
        if s1[i-1] == s2[j-1]:
            ans += s1[i-1]
            i -= 1
            j -= 1
        else:
            if dp[i-1][j] > dp[i][j-1]:
                i -= 1
            else:
                j -= 1
    return ans[::-1]

s1 = input()
s2 = input()
print(find_longest_common_subsequence(s1, s2))

