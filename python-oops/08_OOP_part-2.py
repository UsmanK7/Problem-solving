#################
# Del keyword
#################

# class Student:
#     def __init__(self,name):
#         self.name = name

# s1 = Student("usman")
# print(s1.name)
# del s1.name
# print(s1.name)  # This will give error as we have deleted the name property


#################
# Public & Private keyword
#################


# class Account:
#     def __init__(self,acc_no,acc_pass):
#         self.acc_no = acc_no
#         self.__acc_pass = acc_pass
#     def __hello(self):
#         print("mr anonymous")

#     def welcome(self):
#         self.__hello()
    

# acc1 = Account("123456","abcde")

# # print(acc1.acc_pass) # This will give error because we are trying 
# acc1.welcome()


#################
# Inheritance
#################

class Car:
    @staticmethod 
    def start():
        print("car started.. BRHUM BRHUM BRHUM")
    @staticmethod 
    def stop():
        print("car stopped...CHIIIIIIIN")


class ToyotaCar(Car):
    def __init__(self,name):
        self.name = name

car1 = ToyotaCar("fortuner")
car2 = ToyotaCar("prius")

car1.stop()