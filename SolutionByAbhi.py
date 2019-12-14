#conustructor
# conustructor allocates to the size of the object
class computer:
    def __init__(self):
        self.age=28
        self.name="abhi"

#with out writting function also its returning values so its the use of the conustructor


    def compare(self,other):
        if self.age==other.age:
            return true
        else:
            return false
        

c1 = computer()
c2 = computer()


c2.age=30

if c1.compare(c2):
    print("they are same")
else:
    print("they are different")

print(c1.name)


