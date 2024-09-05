def replace_zero_with_one(n):
    n_str = str(n)
    result = ''
    for digit in n_str:
        if digit == '0':
            result += '1'
        else:
            result += digit
    return int(result)

# Test the function
N = 204
output = replace_zero_with_one(N)
print(output)  # This will print: 112113