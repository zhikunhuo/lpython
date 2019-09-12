class Mystuff(object):

    def __init__(self):
        self.tangerine = "And now a thousand years between"
        
    def apple(self):
        print("I AM CLASSY APPLES")
        print(self.tangerine)
        
        
        
thing = Mystuff()
thing.apple()
print(thing.tangerine)

class Song(object):

    def __init__(self, lyrics):
        self.ldyrics = lyrics
    def __init__(self):
        self.ldyrics = "22222222222"    
    def sing_me_a_song(self):
        for line in self.ldyrics:
            print(line)
            
            
happy_bday = Song(["Happy birthday to you",
                   "I don't want to get sued",
                   "So I'll stop right there"])
                   
bull_on_parade = Song(["They rally around the family",
                      "With pockets full of shells"])
                      
HAHA = Song()
                      
happy_bday.sing_me_a_song()
bull_on_parade.sing_me_a_song()
HAHA.sing_me_a_song()
print("111111111111111")