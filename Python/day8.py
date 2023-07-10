"""Write a Python program that takes a list of tuples containing student names and their corresponding marks. Unpack the tuples and display each student's name with their marks.
Example - 
Input: students = [('Alice', 80), ('Bob', 90), ('Charlie', 75)]
Output: Alice: 80
Bob: 90
Charlie: 75."""

#sol-
string = input('Enter list of tuple:')

string = string[1:-1]
print(string)
tuple_strings = string.split("), (")
for t in tuple_strings:
    t = t.strip("()")
    t=t.replace(',', ':')
    print(t)

'''Write a Python program that takes a list of tuples, where each tuple represents a student's name and their corresponding grades in three subjects. The program should calculate and print the average grade for each student. The average grade should be rounded to two decimal places.
Example -
Input: [('Alice', 80, 90, 75), ('Bob', 85, 95, 92), ('Charlie', 78, 85, 80)]
Output:
Alice: 81.67
Bob: 90.67
Charlie: 81.00'''

#sol-
string = input('Enter list of tuple:')

string = string[1:-1]
print(string)
tuple_strings = string.split("), (")

list_of_tuples = []
for t in tuple_strings:
    t = t.strip("()")
    tuple_elements = [elem.strip("'") for elem in t.split(", ")]

    tuple_elements = (tuple_elements[0], round((int(tuple_elements[1])+ int(tuple_elements[2])+ int(tuple_elements[3]))/3, 2))

    list_of_tuples.append(tuple_elements)

for i in list_of_tuples:
    i=str(i)
    i=i.strip('()')
    i=i.replace(',', ':')
    print(i)
