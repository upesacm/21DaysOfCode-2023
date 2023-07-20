def word_freq(w_list):
    word_freq = {}
    for word in w_list:
        if word in word_freq:
            word_freq[word] += 1
        else:
            word_freq[word] = 1
    return word_freq
