def anagrams(str1, str2):
    str1 = str1.replace(" ", "")
    str2 = str2.replace(" ", "")
    return sorted(str1) == sorted(str2)
  
str1 = "listen"
str2 = "sil en   t"
print(anagrams(str1, str2)) 

