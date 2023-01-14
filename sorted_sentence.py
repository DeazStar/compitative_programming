class Solution:
    def sortSentence(self, s: str) -> str:
        sorted_sentence = ""
        i = 1
        sentence = s.split(" ")

        while (i <= len(sentence)):
            for string in sentence:
                position = int(string[len(string) - 1])
                if position == i:
                    if i == 1:
                        sorted_sentence += string[0: len(string) - 1]
                    else:
                        sorted_sentence = sorted_sentence + " " + string[0: len(string) - 1]
                    i += 1

        return sorted_sentence
