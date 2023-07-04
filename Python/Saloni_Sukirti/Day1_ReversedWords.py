import re

def reverse_words(sentence):
    words = re.split(r'(\W+)', sentence)  

    reversed_words = []
    for word in words:
        if re.match(r'\w+', word):
            reversed_words.append(word[::-1])
        else:
            reversed_words.append(word)
    
    reversed_sentence = ''.join(reversed_words)
    return reversed_sentence

input_sentence = input("Enter a sentence: ")
reversed_sentence = reverse_words(input_sentence)
print("Reversed sentence:", reversed_sentence)

