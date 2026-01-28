# HG String notes

name = input("what is thy name?: ").strip().upper()

print("Hello, ", name[0])

sentence = "the quick brown fox jumps over the lazy dog."
print()
word = input("pick a word from the sentence to change: ").strip().lower()

new_word = input("what is the new word?: ").strip().lower()

start = sentence.find(word)
sentence = sentence.replace(word, new_word)
print(name + "! Did you know? ", sentence)

