
# Программа подсчета слов в файле
import os

def global_words(Bayraktar):
    with open(Bayraktar) as file:
        text = file.read()

    text = text.replace("\n", " ")
    text = text.replace(",", "").replace(".", "").replace("?", "").replace("!", "")
    text = text.lower()
    words = {'palyanica': 0, 'Ukraine': 0, 'home': 0, 'hello': 0 }
    for word in text.split():
        if word  in words: 
            words[word] += 1
    return words
  
 
def main():
    filename = input("Введите путь к файлу: ")
    if not os.path.exists(filename):
        print("Указанный файл не существует")
    else:
        words = global_words(filename)
        
    print(f"File {filename} has: {len(words)}")
    for word in words:
        print(f"{words[word]} {word} words")
        
if __name__ == "__main__":
    main()