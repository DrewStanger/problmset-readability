from cs50 import get_string

Text = get_string("Text: ")

# To count the number of letters in the text
letters = 0
for i in Text:
    if (i >= "a" and i <= 'z') or (i >= "A" and i <= "Z"):
        letters += 1
# To count the number of words
words = 1
for i in Text:
    if (i == " "):
        words += 1
# To count the number of sentances 
sentances = 0
for i in Text:
    if i == "." or i == "!" or i == "?":
        sentances += 1

L = (letters * (100/words))
s = (sentances * (100/words))

index = round(((0.0588 * L) - (0.296 * s) - 15.8))

if index < 1:
    print("Before Grade 1")
elif index > 16:
    print("Grade 16+")
else:
    print(f"Grade {index}")
