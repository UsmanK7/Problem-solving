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

# class Car:
#     @staticmethod 
#     def start():
#         print("car started.. BRHUM BRHUM BRHUM")
#     @staticmethod 
#     def stop():
#         print("car stopped...CHIIIIIIIN")


# class ToyotaCar(Car):
#     def __init__(self,name):
#         self.name = name

# car1 = ToyotaCar("fortuner")
# car2 = ToyotaCar("prius")

# car1.stop()

#################
# Multi level Inheritance
#################

# class Car:
#     @staticmethod 
#     def start():
#         print("car started.. BRHUM BRHUM BRHUM")
#     @staticmethod 
#     def stop():
#         print("car stopped...CHIIIIIIIN")


# class ToyotaBrand(Car):
#     def __init__(self,brand):
#         self.brand = brand

# class ToyotaCar(ToyotaBrand):
#     def __init__(self,name):
#         self.name = name

# car1 = ToyotaCar("fortuner")
# car2 = ToyotaCar("prius")

# car1.start()

#################
# Multiple Inheritance
#################

# class A:
#     varA = "Welcome to class A"

# class B:
#     varB = "Welcome to class B"

# class C(A,B):
#     varC = "Welcome to class C"

# c = C()
# print(c.varA)
# print(c.varB)
# print(c.varC)

#################
# Super method 
#################

# class Car:
#     def __init__(self,type):
#         self.type = type

#     @staticmethod 
#     def start():
#         print("car started.. BRHUM BRHUM BRHUM")
#     @staticmethod 
#     def stop():
#         print("car stopped...CHIIIIIIIN")

# class ToyotaCar(Car):
#     def __init__(self,name,type):
#         super().__init__(type)
#         self.name = name
    

# car1 = ToyotaCar("fortuner","electric")
# car2 = ToyotaCar("prius","electric")

# print(car1.type)


#################
# Property decorater 
#################

# class Student:
#     def __init__(self,phy,chem,math):
#         self.phy = phy
#         self.chem = chem
#         self.math = math 
    
#     @property
#     def calAverage(self):
#         return (self.chem+self.math+self.phy)/3
    
# st1 = Student(93,42,54)
# print(st1.calAverage)

# st1.chem = 90
# print(st1.calAverage)


#################
# Polymorphism (Operator overloading with dunder functions) 
#################

# class Complex:
#     def __init__(self,real,img):
#         self.real = real
#         self.img = img
#     def showNumber(self):
#         print(f"{self.real} i + {self.img} j")
#     def __add__(self,num2):
#        newReal = self.real + num2.real
#        newImg = self.img + num2.img
#        return Complex(newReal,newImg)


# num1 = Complex(5,4)
# num2 = Complex(5,6)

# num1.showNumber()
# num1 + num2
# num2.showNumber()
 
# num3 = num1 + num2 
# num3.showNumber()


# OOPS Practice

# class Circle:
#     pi = 3.14
#     def __init__(self, r):
#         self.r = r
#     def calArea(self):
#         return self.pi*self.r*self.r
#     def calPeri(self):
#         return 2*self.pi*self.r
    
    
# c1 = Circle(20)

# print(c1.calArea())
# print(c1.calPeri())


# class Order:
#     def __init__(self,item,price):
#         self.item = item
#         self.price = price 
#     def __gt__(self,item2):
#         return self.price > item2.price
# od1 = Order("Chips",20)  
# od2 = Order("Tea",10)  

# print(od1 > od2)
