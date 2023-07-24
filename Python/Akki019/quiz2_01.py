def find_longest_common_subsequence(a,b):
    length=0
    seq=''
    for i in range(len(a)):
        for j in range(i,len(a)):
            # if (a[i:j] in b) or (a[i:j] in b[::-1]):
            #     if len(a[i:j])>length:
            #         seq=a[i:j]
            #         length=len(a[i:j])
            new_seq=''
            w=a[i:j]
            for k in w:
                l=0
                for m in range(l,len(b)):
                    if k==b[m]:
                        l=m
                        new_seq+=k
                        continue
            if new_seq==w:
                if len(seq)<len(w):
                    seq=w
    return seq
a=input()
b=input()
print(find_longest_common_subsequence(a,b))