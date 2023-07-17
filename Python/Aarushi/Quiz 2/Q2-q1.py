"""
Imagine you are developing software for the Chandrayaan mission, India's lunar exploration program. Create a function called 'find_longest_common_subsequence' that analyzes the data collected by the lunar rover on the moon. The function should identify the longest common subsequence between two given sequences of characters obtained from the lunar data. The subsequence does not have to be contiguous in either sequence, mimicking the non-linear nature of the lunar exploration data. The function should be designed to handle the unique challenges and characteristics of the lunar data collected during the Chandrayaan mission.

Input Format

The function should accept two sequences of characters as inputs. Each sequence can contain alphabets (both uppercase and lowercase) and may have repeated characters. The sequences can have different lengths.

Constraints

The length of each sequence will not exceed 1000 characters.
The sequences can contain both uppercase and lowercase alphabets.
The sequences may have repeated characters.
The function should handle and return the correct output for all possible combinations of input sequences.
Output Format

The function should print the longest common subsequence between the two given sequences. The subsequence does not need to be contiguous in either sequence.

Sample Input 0

AGGTAC
GCTAGC
Sample Output 0

GTAC
"""
def subsequence(sequence1, sequence2):

    sequence1 = sequence1.lower()
    sequence2 = sequence2.lower()

    len1 = len(sequence1)
    len2 = len(sequence2)

    dp = [[0] * (len2 + 1) for _ in range(len1 + 1)]

    for i in range(1, len1 + 1):
        for j in range(1, len2 + 1):
            if sequence1[i - 1] == sequence2[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

    i, j = len1, len2
    subseq = []
    while i > 0 and j > 0:
        if sequence1[i - 1] == sequence2[j - 1]:
            subseq.append(sequence1[i - 1])
            i -= 1
            j -= 1
        elif dp[i - 1][j] > dp[i][j - 1]:
            i -= 1
        else:
            j -= 1

    subseq = ''.join(reversed(subseq))
    final= subseq.upper()

    return final

sequence1 = input()
sequence2 = input()
print(subsequence(sequence1, sequence2))
