'''Write a Python function called "fizzbuzz_range" that takes two integers start and end as input. The function should generate and return a list of strings representing the numbers from start to end.
However, replace multiples of 3 with "Fizz", multiples of 5 wih "Buzz", and multiples of both 3 and 5 with "FizzBuzz". If the number doesn't meet any of these conditions, simply include the number itself 
in the list.'''

#sol
def fizzbuzz_range(a,b):
    list1=[]
    for i in range(a, b+1):
        if i%3==0 and i%5==0:
            list1.append("FizzBuzz")
        elif i%5==0:
            list1.append("Buzz")
        elif i%3==0:
            list1.append("Fizz")
        else:
            list1.append(i)
    return list1
n1=int(input('Enter starting number:'))
n2=int(input('Enter ending number:'))
result=fizzbuzz_range(n1, n2)
print(result)

'''Write a Python function called "are_anagrams" that inputs two strings. The function should determine if the two strings are anagrams of each other (i.e., they contain the same characters, but possibly 
in a different order). The function should return True if the strings are anagrams, and False otherwise. Consider case sensitivity and ignore spaces in the strings.'''

#sol
n1=input('Enter first word:')
n2=input('Enter second word:')
def are_anagrams(n1, n2):
    list1=list(map(str, n1))
    list1.sort()
    list2=list(map(str, n2))
    list2.sort()
    len1=len(list1)
    len2=len(list2)
    if len1==len2:
        for i in range(len1):
            if list1[i]==list2[i]:
                return True
            else:
               return False
    else:
        return False        
if are_anagrams(n1, n2)==True:
    print('The string {n1} and {n2} is anagrams')
else:
    print('The String {n1} and {n2} is not anagram')
