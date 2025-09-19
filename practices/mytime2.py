#RV 7th My time asignment

import time

current_hour = time.localtime().tm_hour

if current_hour >= 20 or current_hour < 5:
    print("good evening!")
elif current_hour >= 12:
    print("good afternoon!")
else:
    print("good morning!")