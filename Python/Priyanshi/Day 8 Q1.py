li = input("Enter a list of tuples: ")
students = eval(li)
for student in students:
    name, marks = student
    print(f"{name}:{marks}")
