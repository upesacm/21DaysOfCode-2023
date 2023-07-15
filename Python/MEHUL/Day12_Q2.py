try:
    file_name = input("Enter the file name: ")

    file = open(file_name, 'r')
    
    print(file)
    print("File open succesfuly")
except:
    print("File not found")
