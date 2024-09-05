def count_characters(input_str):
    vowels = "aeiouAEIOU"
    consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
    
    vowel_count = 0
    consonant_count = 0
    space_count = 0
    
    for char in input_str:
        if char in vowels:
            vowel_count += 1
        elif char in consonants:
            consonant_count += 1
        elif char.isspace():
            space_count += 1
    
    return vowel_count, consonant_count, space_count

input_str = "Take u forward is Awesome"
vowels, consonants, spaces = count_characters(input_str)

print("Vowels:", vowels)
print("Consonants:", consonants)
print("White spaces:", spaces)