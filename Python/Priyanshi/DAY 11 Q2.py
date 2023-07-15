def eo(numbers, even_file, odd_file):
    even_nos= []
    odd_nos = []
    for number in numbers:
        if number % 2 == 0:
            even_nos.append(number)
        else:
            odd_nos.append(number)
    with open(even_file, 'w') as file:
        for i in even_nos:
            file.write(str(i) + '\n')
    with open(odd_file, 'w') as file:
        for j in odd_nos:
            file.write(str(j) + '\n')
n= input()
numbers = list(map(int, n.split()))
even_file = input()
odd_file = input()
eo(numbers, even_file, odd_file)
