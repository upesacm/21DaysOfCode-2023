#1
num = int(input("Enter the number: "))
if (num==0):
    print("Number is neither even nor odd")
elif (num%2 == 0):
    print("Number is even")
else:
    print("Number is odd")

#2
string = input("Enter the sentence: ")
words = string.split(" ")
count = 0
for i in words:
    count = count+1
print("The number of words in the sentence is:", count)
