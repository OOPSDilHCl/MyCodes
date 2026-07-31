import asyncio
import edge_tts
import os
import time 
async def speak(text):
    communicate = edge_tts.Communicate(text, "en-US-AriaNeural")
    await communicate.save("voice.mp3")
    os.system("mpv voice.mp3")
    asyncio.run(speak("Nice to meet you abhinav "))
    asyncio.run(speak("What you want me to do"))