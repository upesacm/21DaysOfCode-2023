def reverse_words(sentence):
    words = sentence.split()
    reversed_words = [word[::-1] for word in words]
    reversed_sentence = ' '.join(reversed_words)
    return reversed_sentence

input_sentence = input("Enter a sentence: ")
reversed_sentence = reverse_words(input_sentence)
print(reversed_sentence)

