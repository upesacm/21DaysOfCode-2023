string = input("Enter the sentence: ")
words = string.split(" ")
count = 0
for i in words:
    count = count+1
print("The number of words in the sentence is:", count)
