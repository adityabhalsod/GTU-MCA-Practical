import nltk

mistake = "ligting"
 
words = ['apple', 'bag', 'drawing', 'listing', 'linking', 'living', 'lighting', 'orange', 'walking', 'zoo']
 
for word in words:
    ed = nltk.edit_distance(mistake, word)
    print(word, ed)


sent1 = "It might help to re-install Python if possible."
sent2 = "It can help to install Python again if possible."
 
ed_sent_1_2 = nltk.edit_distance(sent1, sent2)

print("Edit Distance :- {}".format(ed_sent_1_2))