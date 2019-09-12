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
         "Set *** to an instance of class",
    "***.***(@@@)":
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


def  convert(snippet, phrase):
    class_name = [w.capitalize() for w in random.sample(WORDS, snippet.count("%%%"))]    
    other_name = random.sample(WORDS, snippet.count("***"))
    results = []
    param_names = []
    
    for i in range(0, snippet.count("@@@")):
        param_count = random.randint(1, 3)
        param_names.append(','.join(
            random.sample(WORDS, param_count)))

    for sentence in snippet, phrase:
        result= sentence[:]
        
        #fake class names
        for word in class_name:
            result = result.replace("%%%", word, 1)
            
        # fake other names
        for word in other_name:
            result = result.replace("***", word, 1)
            
        # fake parameter lists
        for word in param_names:
            result = result.replace("@@@", word, 1)
            
        results.append(result)
        
    return results
        
snippets = list(PHRASE.keys())
random.shuffle(snippets)

for snippet in snippets:
    phrase = PHRASE[snippet]
    question, answer = convert(snippet, phrase)
    if PHRASE_FIRST:
        question, answer = answer, question
        
    print(question)
    
    
#print("random keys", )
#print(snippets)
#for keyvalue in snippets:
#    print(keyvalue)