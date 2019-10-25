# import these modules 
from nltk.stem import PorterStemmer 
from nltk.tokenize import word_tokenize 

ps = PorterStemmer() 

# choose some words to be stemmed 
words = ["fishing", "fished", "fisher"]

for w in words: 
	print(w, " : ", ps.stem(w)) 

input("")