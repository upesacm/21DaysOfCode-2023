'''Write a Python program that counts the frequency of each word in a given sentence and stores the result in a dictionary. Display the dictionary with word frequencies.'''

#sol
sentence=input('Enter the sentence:')
tuple_strings = sentence.split(" ")
a=0
def convert(tuple_string):
    keys = tuple_string[::2] 
    values = tuple_string[1::2]  
    res_dict = {keys[i]: values[i] for i in range(len(keys))}
    return res_dict
lst=[]
for t in tuple_strings:
    for t1 in tuple_strings:
        if t==t1:
            a+=1
            lst.append(t)
            lst.append(a)
        else:pass
    a=0
print(convert(lst))

''' Write a Python program that checks if a given sentence is a pangram (contains every letter of the alphabet). Display an appropriate message.'''

#sol
sentence=input('Enter sentence:')
alphabet='abcdefghijklmnopqrstuvwxyz'
for i in alphabet:
    if i not in sentence:
        print('Not a Pangram')
        break
else:
    print('Is a Pangram')
