st=input("Enter a sentence: ")
splt=st.split()
rev=''
for i in splt:
    rev+=i[::-1]
    rev+=' '
print(rev)
