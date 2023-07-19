sentence = input("Enter sentence\n");
words = sentence.split()
wordfreq = {}

for word in words:
    if word in wordfreq:
        wordfreq[word] += 1
    else:
        wordfreq[word] = 1

for word, freq in wordfreq.items():
    print(f"{word}: {freq}")
