import progressbar
import time

def loading_bar():
    for i in tqdm (range (101), 
                desc="Loading…", 
                ascii=False, ncols=75):
        time.sleep(0.01)
    print("Complete.")

def animated_marker():
    widgets = ['Loading: ', progressbar.AnimatedMarker()]
    bar = progressbar.ProgressBar(widgets=widgets).start()
      
    for i in range(50):
        time.sleep(0.1)
        bar.update(i)

def greeting(name):
  print("Hello, " + name) 