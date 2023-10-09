from gtts import gTTS
from pygame import mixer
from variables import *

def read_file(inputTextFilePath):
    with open(inputTextFilePath, 'r') as file1:
        lines = [line.strip() for line in file1.readlines()]

    converted_text = ' '.join(lines)
    print(*[f"Line{i+1}: {line}" for i, line in enumerate(lines)], sep='\n')
    convertTextToSpeech(converted_text, outputAudioFilePath)

def convertTextToSpeech(text, outputAudioFilePath):
    tts = gTTS(text)
    tts.save(outputAudioFilePath)
    mixer.init()
    mixer.music.load(outputAudioFilePath)
    mixer.music.play()

read_file('input.txt')
