a=open('student.csv','r')
grade_sum = 0
grade_count = 0
for line in a:
    l = line.split(str(","))
    for grade in l:
        grade_sum += int(grade)
        grade_count += 1
print(grade_sum/grade_count)
