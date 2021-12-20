n = input("Input N : ")
m = input("Input M : ")
q = input("Input Q : ")
route = []
passenger = []

for i in range(m):
    user_input = ("Input route : ")
    user_input.split(' ')
    route.append([user_input[0], user_input[1], user_input[2]])

for i in range(q):
    user_input = ("L : S : T = ")
    user_input.split(' ')
    passenger.append([user_input[0], user_input[1], user_input[2]])

for i in passenger:
    for x in route:
        if i[1] == 
