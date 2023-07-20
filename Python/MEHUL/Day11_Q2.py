import pandas as pd

def get_nums():
    r = int(input("Enter the range: "))
    
    nums = []
    
    for i in range(0, r):
        n = int(input("Enter the number: "))
        nums.append(n)
        
        
    return nums
    
def sort_even_odd(arr):
    
    even = []
    odd = []
    
    for i in range(0, len(arr)):
        if arr[i]%2==0:
            even.append(arr[i])
        else:
            odd.append(arr[i])

    return even, odd
    
    
def main():
    
    nums = get_nums()
    
    input_file = input("Enter the input file name: ")
    df = pd.DataFrame(nums)
    
    df.to_csv(input_file, index=False)
    
    even, odd = sort_even_odd(nums)
    
    data = {'even': even, 'odd': odd}
    
    output_file = input("Enter the output file name: ")
    df = pd.DataFrame(data)
    
    df.to_csv(output_file, index=False)
    

if __name__ == '__main__':
    main()
