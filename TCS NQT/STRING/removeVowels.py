
# Python program to remove vowels from a string
# Function to remove vowels
  
# import the module for regular expression (re)
import re
def rem_vowel(string):
    return (re.sub("[aeiouAEIOU]","",string))            
  
# Driver program
string = "I am very happy today"
print(rem_vowel(string))