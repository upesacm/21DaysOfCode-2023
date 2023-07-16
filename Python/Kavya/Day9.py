#1
def count_frequency(sentence):
    words = sentence.lower().split()
    freq = {}
    for word in words:
        if word in freq:
            freq[word] += 1
        else:
            freq[word] = 1
    return freq
sent= input()
f_dict = count_frequency(sent)
print("Word frequencies:")
for word, frequency in f_dict.items():
    print(f"{word}: {frequency}")
