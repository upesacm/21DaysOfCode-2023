try:
    user=input("Enter the file name: ")

    a=open(user)
    print('file found')
except FileNotFoundError:
    print("File not found")