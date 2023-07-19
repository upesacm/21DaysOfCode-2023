def longest(s):
    l=''
    for i in range(len(s)):
        for j in range(i,len(s)):
            if s[i:j]==s[j:i:-1]:
                if len(s[i:j])>len(l):
                    l=s[i:j]
                    
    return l

s=input()
print(longest(s))