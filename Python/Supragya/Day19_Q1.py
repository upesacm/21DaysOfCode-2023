# Q1 Write a Python program that implements a linear search algorithm to find a specific element in a given list.
# Display a message indicating whether the element is found or not.
def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return True
    return False

def main():
    num_elements = int(input("Enter the number of elements in the list: "))
    my_list = []
    for i in range(num_elements):
        element = int(input(f"Enter element {i+1}: "))
        my_list.append(element)
    element_to_search = int(input("Enter the element to search: "))
    if linear_search(my_list, element_to_search):
        print(f"The element {element_to_search} is found in the list.")
    else:
        print(f"The element {element_to_search} is not found in the list.")
        
if __name__ == "__main__":
    main()
