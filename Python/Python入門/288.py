import re
pattern = re.compile("Python")

result = pattern.search("The Zen of Python, by Tim Peters")

if result is None:
    print("NG")
else:
    print("OK")
