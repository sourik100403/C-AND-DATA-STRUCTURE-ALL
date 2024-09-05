str1= "Take you forward"
a=str1.replace(" ","")
print(a)

#probelm next
def remove_non_alphabetic(input_str):
    output_str = ''.join([char for char in input_str if char.isalpha()])
    return output_str

input_str1 = "take12% *&u ^$#forward"
input_str2 = "1.Python & 2.Java"

output_str1 = remove_non_alphabetic(input_str1)
output_str2 = remove_non_alphabetic(input_str2)

print(output_str1)
print(output_str2)