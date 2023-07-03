import re

def reverse_words(sentence):
    words = re.split(r'(\W+)', sentence)  
    #print(word)
    reversed_words = [word[::-1] if re.match(r'\w+', word) else word for word in words]  
    reversed_sentence = ''.join(reversed_words)
    return reversed_sentence

input_sentence = input("Enter a sentence: ")
reversed_sentence = reverse_words(input_sentence)
print("Reversed sentence:", reversed_sentence)

