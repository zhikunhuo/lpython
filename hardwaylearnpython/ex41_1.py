import random
from urllib.request import urlopen
import sys

WORD_URL ="http://learncodethehardway.org/words.txt"
WORDS = []

PHRASE = {
    " class %%%(%%%)":
        "Make a class named %%% that is-a %%%.",
    "class %%%(object):\n\tdef __init__(self, ***)":
        "class %%% has-a __init__ that takes self and *** params.",
    "class %%%(object):\n\t def ***(self, @@@)":
        "class %%% has- a function *** that takes self and @@@ params.",
    "*** = %%%()":
        "From *** get the *** function, call it with params self, @@@.",
    "***.*** = '***'":
        "From *** get the *** attribute and set it to '***'."
}

# do they want to drill phrase first
if len(sys.argv) == 2 and sys.argv[1] == 'english':
    PHRASE_FIRST = True
else :
    PHRASE_FIRST = False

# load up the words from the website
for word in urlopen(WORD_URL).readlines():
    WORDS.append(str(word.strip(), encoding = "utf-8"))

snippets = list(PHRASE.keys())
random.shuffle(snippets)

for snippet in snippets:
    phrase = PHRASE[snippet]
    print(phrase)
#print("random keys", )
#print(snippets)
#for keyvalue in snippets:
#    print(keyvalue)