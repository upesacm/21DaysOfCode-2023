def wordCount(str):
    words = str.split()

    print("The no. of words in the sentence are %d" % len(words))


sentence = input("Enter a sentence\n")

wordCount(sentence)
