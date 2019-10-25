# -*- coding: utf-8 -*-
"""
Created on Sat Sep 28 21:25:33 2019

@author: Raval
"""

from os import listdir
from os.path import isfile, join
import string

my_path = r"E:\Downloads\20_newsgroups\20_newsgroups"

#creating a list of folder names to make valid pathnames later
folders = [f for f in listdir(my_path)]


#creating a 2D list to store list of all files in different folders

files = []
for folder_name in folders:
    folder_path = join(my_path, folder_name)
    files.append([f for f in listdir(folder_path)])
    
#checking total no. of files gathered

sum(len(files[i]) for i in range(20))

#creating a list of pathnames of all the documents
#this would serve to split our dataset into train & test later without any bias

pathname_list = []
for fo in range(len(folders)):
    for fi in files[fo]:
        pathname_list.append(join(my_path, join(folders[fo], fi)))
        
Y = []
for folder_name in folders:
    folder_path = join(my_path, folder_name)
    num_of_files= len(listdir(folder_path))
    for i in range(num_of_files):
        Y.append(folder_name)
        
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(pathname_list, Y, random_state=0, test_size=0.25)

import re
import nltk
nltk.download('stopwords') 
from nltk.corpus import stopwords
from nltk.stem.porter import PorterStemmer
corpus = [] # corpus is collection of text(anything)


for i in range(0, 14998): # 19998 are data but upper bound is exlude so we take 1000
    review = re.sub('[^a-zA-Z]', ' ', X_train[i])
    review = review.lower() # convert all captial letteres to lower
    review = review.split() # it split the string into words
    ps = PorterStemmer()
    review = [ps.stem(word) for word in review if not word in set(stopwords.words('english'))]# stopwords is all the unnecessary words like the,place,is,that it removes. so ml algorithm can coreleate with best and suitable words
    # we use set() because in large dataset like ariticles it hepls us to work fasetr. words('english') because here we use english comments.
    # ps.stem(word) means it steamms the words like convert loved into love.
    review = ' '.join(review) # we join seperate words in whole word but we the to not combine all 3 words we have to put space and then join the words.
    corpus.append(review)
    
# define Tokenizer with Vocab Size
from keras.preprocessing.text import Tokenizer
tokenizer = Tokenizer(num_words=15000)
tokenizer.fit_on_texts(X_train)

X_train = tokenizer.texts_to_matrix(X_train, mode='tfidf')
X_test = tokenizer.texts_to_matrix(X_test, mode='tfidf')

# scikit-learn has a LabelBinarizer class which makes it easy to build these one-hot vectors.

from sklearn.preprocessing import LabelBinarizer
encoder = LabelBinarizer()
#encoder.fit(train_tags)
y_train = encoder.fit_transform(y_train)
y_test = encoder.fit_transform(y_test)
                           
"""y_train = tokenizer.texts_to_matrix(y_train, mode='tfidf')    
y_test = tokenizer.texts_to_matrix(y_test, mode='tfidf')"""



# Building ANN
import keras
from keras.models import Sequential # to initialize neural neiwork
from keras.layers import Dense , Dropout # for densily connected neural network

# INittializing the ANN
model = Sequential()

# Adding the input layer and first hidden layer
model.add(Dense(activation="relu", input_dim=15000, units=512, kernel_initializer="uniform")) # units is hidden layer , kernel_initializer is way of assigning the weights  ,  input_dim is input layer
# input_dim =11 we can also write input_shape=(11,) and to re write above
model.add(Dropout(0.2))
"""model.add(Dense(6,input_shape=(11,), activation="relu")) # input layer
model.add(Dense(6, activation="relu")) # hidden layer
model.add(Dense(1, activation="relu")) # output layer """

# Adding the second layer
model.add(Dense(units = 512 , activation='relu' , kernel_initializer = "uniform"))


model.add(Dropout(0.2))
# Output layer
model.add(Dense(units = 20 , activation='softmax' , kernel_initializer = "uniform")) # we use sigmoid because there is only one neuron but if we have ore then 2  output neuron then we have to use softmax


#tensorboard = TensorBoard(log_dir="logs/{}".format(time()))

# Compile the ANN
model.compile(optimizer='adam' , loss = 'categorical_crossentropy', metrics= ['accuracy']) # compile means we have to apply algorithm like gradient decent to find optimal set of weights in neuron because first we randomly initialize weight and now we have to apply the algorithm to find optimal set of weights


model.summary()

# fitting the training set
model.fit(X_train, y_train ,batch_size =80, epochs = 20,verbose=1,validation_split=0.1)



