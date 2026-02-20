import nltk
nltk.download('punkt')
nltk.download('punkt_tab')
nltk.download('averaged_perceptron_tagger_eng')
!pip install svgling
import nltk
sentence = "The is a loving subject"
tokens = nltk.word_tokenize(sentence)
pos_tags = nltk.pos_tag(tokens)
print("Tokens : ",tokens)
print("Pos Tag :",pos_tags)
grammar = r"""
  NP: {<DT|JJ|NN.*>+}          # Chunk sequences of DT, JJ, NN
  PP: {<IN><NP>}               # Chunk prepositions followed by NP
  VP: {<VB.*><NP|PP>*}         # Chunk verbs and their arguments
"""
chunk_parser = nltk.RegexpParser(grammar)
result = chunk_parser.parse(pos_tags)
print("Tree Structure :",result)
print("Tree :")
result
