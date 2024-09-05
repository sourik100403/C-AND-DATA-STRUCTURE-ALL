def capitalize_first_last(sentence):
    words = sentence.split()
    capitalized_words = [word[0].upper() + word[1:-1] + word[-1].upper() if len(word) > 1 else word.upper() for word in words]
    return ' '.join(capitalized_words)

input_sentence = "how to capitalize first and last letter of each word"
output_sentence = capitalize_first_last(input_sentence)

print(output_sentence)