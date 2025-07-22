money = 1000
total = 0
card = "harsha"
password = 1234
count = 3

for x in range(count):
    print("no. of atm counts -", x)
    if card == "harsha" and password == 1234:
        while total < money:
            total = total + 100
            print("Money counting-", total)

        print("Total amount:", total)
        total = 0  
    else:
        print("Card or password incorrect!")



Atm_card = "card"
pin = 1234
Money = 1000
Temp = 0
outer = 1  


if (Atm_card == "card") and (pin == 1234):
    if outer == 1:
        while Temp <= Money:
            print("count:", Temp, "Total Amount:", Money)
            Temp += 100
        print("Take your money:", Money, "rupee")
    else:
        print("Only one attempt is possible")
elif (Atm_card == "card") or (pin == 1234):
    print("Any one value is wrong")
else:
    print("Both values are wrong")

print("Thank you for using the ATM")

