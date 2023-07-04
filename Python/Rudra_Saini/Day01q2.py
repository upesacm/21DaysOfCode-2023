txt=input("enter string")
revtxt=""
s=0

def reverse(s,i):
    r=""
    for k in range(s,i):
        r=txt[k]+r
    return r


for i in range(len(txt)):
    if txt[i]==" " or txt[i]=="!" or txt[i]=="$" or txt[i]=="&":
        revtxt=revtxt+reverse(s,i)
        revtxt=revtxt+txt[i]
        s=i+1

print(revtxt)
    

