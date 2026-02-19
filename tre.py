import nltk
from nltk.tokenize import regexp_tokenize
text=input ("enter a sentence ")
pattern = r"\w+"
tokens = regexp_tokenize(text, pattern)
print("Tokens :")
print(tokens)
