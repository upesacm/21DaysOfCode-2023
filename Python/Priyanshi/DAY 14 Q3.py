def ST(s):
    n = len(s)
    p = ""
    for i in range(n):
        l, r = i, i
        while l >= 0 and r < n and s[l] == s[r]:
            l -= 1
            r += 1
        odd_palindrome = s[l+1:r]
        if len(odd_palindrome) > len(p):
            p = odd_palindrome
        l, r = i, i+1
        while l >= 0 and r < n and s[l] == s[r]:
            l -= 1
            r += 1
        even_palindrome = s[l+1:r]
        if len(even_palindrome) > len(p):
           p = even_palindrome

    return p
seq = input()
print(ST(seq))
