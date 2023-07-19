sent=input("Enter sentence : ")
sent=sent.split()
new_sent=''
for i in sent:
    if not i[-1].isalnum():
        new_sent+=i[-2::-1]+i[-1]+' '
    else:
        new_sent+=i[::-1]+' '
print(new_sent)