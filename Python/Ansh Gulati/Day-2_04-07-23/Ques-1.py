#Ques- Write a Python program that takes an integer as input and determines whether it is even or odd.

number=int(input("Enter a Number \n"))
if(number==0):
    {
        print("Number is equal to 0 which is neither Even nor Odd \n")
    }
elif(number%2==0):
    {
        print("The Number is EVEN \n")
    }
else:
    {
            print("The Number is ODD \n")
    }
