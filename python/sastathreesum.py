from itertools import combinations

# Function to check if any combination of 3 integers sums to the target
def find_target_sum(arrays, target):
    # Flatten the list of arrays into a single array
    all_elements = [num for array in arrays for num in array]
    
    # Generate all possible combinations of 3 integers
    for comb in combinations(all_elements, 3):
        if sum(comb) == target:
            return True, comb
    
    return False, None

# Input 5 arrays
arrays = []
for i in range(5):
    arr = list(map(int, input(f"Enter integers for array {i + 1}, separated by spaces: ").split()))
    arrays.append(arr)

# Input target integer
target = int(input("Enter the target integer: "))

# Check for the target sum
result, combination = find_target_sum(arrays, target)

if result:
    print(f"Combination of three integers that sum to {target}: {combination}")
else:
    print(f"No combination of three integers sums to {target}.")
