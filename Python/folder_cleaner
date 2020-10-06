import os


def createIfNotExists(folder):
    if not os.path.exists(folder):
        os.makedirs(folder)


def move(foldername,files):
    for file in files:
        os.replace(file, f"{foldername}/{files}")
        print("Ok")


files = os.listdir()
files.remove("folder_Cleaner.py")
# print(files)

createIfNotExists('Images')
createIfNotExists('Docs')
createIfNotExists('Media')
createIfNotExists('Others')
createIfNotExists('Python')

pyExts = [".py",".pip"]
python = [file for file in files if os.path.splitext(file)[1].lower() in pyExts]
print("These are the python files:","\n",python,"\n")



imgExts = [".png",".jpg",".jpeg",".ico"]

images = [file for file in files if os.path.splitext(file)[1].lower() in imgExts]
print("These are the img files:","\n",images,"\n")

docExts = [".txt",".docx","pdf","doc",".whl"]

docs = [file for file in files if os.path.splitext(file)[1].lower() in docExts]
print("These are the doc files:","\n",docs,"\n")

mediaExts = [".mp4",".mp3",".flv"]
medias = [file for file in files if os.path.splitext(file)[1].lower() in mediaExts]
print("These are the media files:","\n",medias,"\n")

others = []

for file in files:
    ext = os.path.splitext(file)[1].lower()
    if (ext not in mediaExts) and (ext not in imgExts) and (ext not in docExts) and (ext not in pyExts) and os.path.isfile(file):
        others.append(file)


print("These are other folders:","\n",others,"\n")

move("Media",medias)
move("Images",images)
move("Python",python)
move("Others",others)
move("Docs",docs)
