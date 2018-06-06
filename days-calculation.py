from datetime import datetime
for _ in range(int(input())):
    d1, d2 = datetime.strptime(input(), "%Y %m %d"), datetime.strptime(input(), "%Y %m %d")
    print(abs((d2 - d1).days))
