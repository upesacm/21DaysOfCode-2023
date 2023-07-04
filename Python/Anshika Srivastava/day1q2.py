sentence= input("Enter the sentence\n")
words = sentence.split()
reversed_words = []
for word in words:
    reversed_word = word[::-1]
    reversed_words.append(reversed_word)

reversed_sentence = ' '.join(reversed_words)
print("Reversed sentence:", reversed_sentence)
