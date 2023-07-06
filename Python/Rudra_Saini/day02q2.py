txt=input("Enter sentence ")
c=1
for i in range(len(txt)):
    if txt[i]==" " or txt[i]=="\n" or txt[i]=="\t":
        c+=1

print(c)
