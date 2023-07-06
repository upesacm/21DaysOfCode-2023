def rev_words(sentence):
    words = sentence.split()
    
    rev_words = [word[::-1] for word in words]
    
    rev_sentence = ' '.join(rev_words)
    
    return rev_sentence

sentence = input("Enter a sentence: ")
rev_sentence = rev_words(sentence)
print("Reversed sentence:", rev_sentence)
