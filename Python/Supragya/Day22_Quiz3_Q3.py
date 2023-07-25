class CommonPrefix:
    def LongestPrefix(self, strs):
        if not strs:
            return ""

        for i in range(len(strs[0])):
            for s in strs[1:]:
                if len(s) <= i or s[i] != strs[0][i]:
                    return strs[0][:i]
        return strs[0]

def main():
    num_strings = int(input().strip())
    input_strings = []
    
    for _ in range(num_strings):
        string = input().strip()
        input_strings.append(string)
    
    finder = CommonPrefix()
    result = finder.LongestPrefix(input_strings)
    print(result)

if __name__ == "__main__":
    main()
