#!/usr/bin/python3
word = "Holberton"
word_first_3, *middle_word, word_last_2 = word
word_first_3 = ''.join(word_first_3)
word_last_2 = ''.join(word_last_2)
middle_word = ''.join(middle_word)
print(f"First three letters: {word_first_3}")
print(f"Last two letters: {word_last_2}")
print(f"Middle word: {middle_word}")
