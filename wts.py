text = "NLP is easy to learn!"
punctuations=".,!?;:"
for symbol in punctuations:
  text = text.replace(symbol, "")
tokens = text.split()
print("Tokens:")
print(tokens)
