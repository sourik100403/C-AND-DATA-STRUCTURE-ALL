# Example 1:
# Input: CAT, ACT
# Output: true
# Explanation: Since the count of every letter of both strings are equal.

# Example 2:
# Input: RULES, LESRT 
# Output: false
# Explanation: Since the count of U and T  is not equal in both strings.
# def check(str1,str2):
#     list1={}
#     list2={}
#     for ch in str1:
#         if ch in list1:
#             list1[ch]+=1
#         else:
#             list1[ch]=1
#     for i in str2:
#         if i in list1:
#             list1[i]+=1
#         else:
#             list1[i]=1
#     print(list1)
#     for element in list1:
#         print(element[list1.keys])
#     # print(list1.keys)
# check("cat","act")
# check("RULES","LESRT")
def are_character_counts_equal(str1, str2):
    # Convert both strings to lowercase to make the comparison case-insensitive
    str1 = str1.lower()
    str2 = str2.lower()

    # Create dictionaries to store character counts for each string
    count_dict1 = {}
    count_dict2 = {}

    # Count characters in the first string
    for char in str1:
        if char.isalpha():
            count_dict1[char] = count_dict1.get(char, 0) + 1

    # Count characters in the second string
    for char in str2:
        if char.isalpha():
            count_dict2[char] = count_dict2.get(char, 0) + 1

    # Compare the two dictionaries
    return count_dict1 == count_dict2

# Test examples
input1 = ("CAT", "ACT")
input2 = ("RULES", "LESRT")

output1 = are_character_counts_equal(input1[0], input1[1])
output2 = are_character_counts_equal(input2[0], input2[1])

print(output1)  # Should print: True
print(output2)  # Should print: False
