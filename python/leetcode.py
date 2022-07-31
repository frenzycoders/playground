class Student:
    students = []

    def __init__(self):
        pass
    
    def include(self, roll, className, name):
        index = self.findStudent(roll)
        if index == -1:
            self.students.append(
                {'roll': roll, 'className': className, 'name': name})
            print("> Student inserted")
        else:
            print(
                "This roll number alreay taken try another one {roll: "+str(roll)+"}")

    def delete(self, roll):
        roll: int = int(input("> Please enter roll: "))
        index = self.findStudent(roll)

        if index != -1:
            del self.students[index]
            print("> Student with roll "+str(roll)+" is deleted ")
        else:
            print("> No student found with roll "+str(roll)+" for delete")

    def findStudent(self, roll: int):
        index = 0
        if len(self.students) == 0:
            print("No student data found")
            return -1
        else:
            for e in self.students:
                if e['roll'] == roll:
                    return index
                index += 1
        
        return -1

    def display(self):
        for e in self.students:
            print(e)
    
    def search(self,roll):
        index = self.findStudent(roll)
        if index != -1:
            print(self.students[index])
        else:
            print("> Student not found ")


student = Student()
student.include(1, "MCA", "Gaurav Kumar")
student.include(2, "BCA", "Satyam Kumar")
student.include(3, "MCA", "frenzycoder")
student.include(4, "MCA", "Jack")

student.display()

student.delete(1)

student.display()

student.search(1)

student.search(2)