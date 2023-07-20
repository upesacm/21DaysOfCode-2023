def check(arg):
  if len(set('abcdefghijklmnopqrstuvwxyz') - set(arg.lower())) == 0 :
    return True

  return False

a = input("Enter a string to check for pangram : ")

if(check(a)):
  print("It is a pangram string")
else:
  print("Not a pangram string")