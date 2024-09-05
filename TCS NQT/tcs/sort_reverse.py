# Input: 8 7 1 6 5 9
# Output: 1 5 6 9 8 7
# Explanation: First three elements are in the ascending order and next three elements are in the descending order.

# Example 2:
# Input: 4 2 8 6 15 5 9 20
# Output: 2 4 5 6 20 15 9 8
def arrange(arr):
    n=len(arr)
    mid=n//2
    first_half=arr[:mid]
    last_half=arr[mid:]
    first_half_sort=sorted(first_half)
    second_half_sort=sorted(last_half,reverse=True)
    result=first_half_sort+second_half_sort
    return result
arr=[3,1,4,5,4,8,7,5]
output=arrange(arr)
print(f"{output}")
