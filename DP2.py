
# Программа подсчета слов в файле
import os
from re import A
 
def get_words(Байрактар):
    with open(Байрактар) as file:
        text = file.read()
    text = text.replace("\n", " ")
    text = text.replace(",", "").replace(".", "").replace("?", "").replace("!", "")
    text = text.lower()
    words = text.split()
    words.sort()
    return words
    words = sentence.split()
    counts = {}
    words = sentence.split()
    counts = {}
for word in words: 'Байракар' , 'танк' , 'Украина'
    
    if word not in counts:
         counts[word] = 0
         counts[word] += 1

 
def main():
    filename = input("Введите путь к файлу: ")
    if not os.path.exists(filename):
        print("Указанный файл не существует")
    else:
        words = get_words(filename)
        
        print(f"Кол-во слов: {len(words)}")
        
       
    
if __name__ == "__main__":
    main()
     


