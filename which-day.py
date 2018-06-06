import datetime
days = ['MONDAY', 'TUESDAY', 'WEDNESDAY', 'THURSDAY', 'FRIDAY', 'SATURDAY', 'SUNDAY']
for _ in range(int(input())):
    day, month, year = map(int, input().split())
    weekday = datetime.date(year, month, day).weekday()
    print(days[weekday])
