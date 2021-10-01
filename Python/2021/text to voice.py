# This has been tryed by PJ
import pyttsx3
engine = pyttsx3.init()
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)
# print(voices[0].id) :for boys voice 
engine.setProperty('rate', 130)
engine.say("Hello World")
engine.runAndWait()
