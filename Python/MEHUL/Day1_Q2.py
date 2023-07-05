sentence = input("Enter the sentence: ")

words = sentence.split()

reversed_words = []

for w in words:
    for i in w[::-1]:
        reversed_words.append(i)
        
rev_sentence = ' '.join(reversed_words)

print(rev_sentence)
