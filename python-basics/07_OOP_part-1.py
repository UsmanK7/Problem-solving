# class Dog:
#     def __init__(self,DogName):
#         self.name = DogName
        
#     # ParentBreed = "German Shephard"


# KingShepherd = Dog("King Shepherd")

# print(KingShepherd.name)


# Practice question
# class Student:
#     def __init__(self, name, Maths, Physiscs, Chemistry):
#         self.name = name
#         self.maths = Maths
#         self.physics = Physiscs
#         self.chemistry = Chemistry
#     def printAverage(self):
#         print(f"The average of student: {self.name} is {(self.physics+self.chemistry+self.maths)/3}")


# st1 =  Student("usman",50,30,50)
# st1.printAverage()
# st2 = Student("faheem",60,50,80)
# st2.printAverage()



# Abstraction 
# class Car:
#     def __init__(self):
#         self.clutch = False
#         self.race = False
#         self.h_break = True
    
#     def startCar(self):
#         self.h_break = False
#         self.clutch = True
#         self.race = True
#         print("Car is started")

# gallardo = Car()
# gallardo.startCar()



# Practice question
class Account:
    def __init__(self):
        self.balance = 400
        self.accountNo = 4200070829793
    def debit(self,amount):
        self.balance = self.balance - amount
    def credit(self,amount):
        self.balance = self.balance + amount
    def printBalance(self):
        print(f"your balance is {self.balance}")

ac = Account()

ac.printBalance()
ac.debit(200)
ac.printBalance()
ac.credit(300)
ac.printBalance()
