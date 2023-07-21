# Write a Python program that checks if a given sentence is a pangram (contains every letter of the alphabet).
# Display an appropriate message.

sentence=input("Enter sentence : ")
letter=''

for i in sentence:
    if i.isalpha():
        i=i.lower()
        if i not in letter:
            letter+=i
    
if len(letter)==26:
    print("It is a Pangram")
else:
    print("It is not a Pangram")
