# Example 1:
# Input: str = “takeuforward”
# Output: a
# Explanation: The character 'a' and 'r’ have the same  maximum occurrence i.e 2. Hence we can print any one of them

# Example 2:
# Input: str = “apple”
# Output: p
# Explanation: The character 'p' have the maximum occurrence i.e 2.
def countS(str1):
    list1={}
    for ch in str1:
        if ch in list1:
            list1[ch]+=1
        else:
            list1[ch]=1
    print(list1)
    
    print(list1.keys[(max(list1.values()))])
countS("apple")
countS("takeuforward")