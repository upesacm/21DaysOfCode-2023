Q1. 
beg=int(input("Enter beginning of range:"))
end=int(input("Enter end of range:"))
for i in range(beg,end+1):
    if i % 15 == 0:
        print("FizzBuzz")										
    elif i % 3 == 0:
        print("Fizz")										
    elif i % 5 == 0:
        print("Buzz")									
    print(i)
Q2. 
s1=input("Enter first string:")
s2=input("Enter second string:")
if(sorted(s1)==sorted(s2)):
      print("The strings are anagrams.")
else:
      print("The strings aren't anagrams.")
