s1=str(input("Enter s1 string "))
s2=str(input("Enter s2 string "))

flag2=0
if s1==s2:
    flag2=1
    print("False, s1 ans s2 are same order")


if flag2==0:
    flag=0
    flag1=0
    for i in range(0,len(s1)):
        flag=0
        for j in range(0,len(s2)):
            if s1[i]==s2[j]:
                flag=1
                break
    
        if flag==0:
            flag1=1
            print("False s1 ans s2 string is not anagram")
            break
    
    if flag1==0:
        print("s1 ans s2 string is anagram")
