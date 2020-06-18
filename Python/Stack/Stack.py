class Stack:
    def __init__(self):
        self.S = []
        self.tos = -1

    def Push(self,ele):
        self.S.append(ele)
        self.tos += 1
        print("Stack : ",self.S[-1::-1])
    
    def Pop(self):
        if self.tos != -1:
            ele = self.S.pop()
            self.tos -= 1
            print("Stack :",self.S[-1::-1])
        else:
            print("Stack is empty")

    def TopOfStack(self):
        if self.tos != -1:
            ele = self.S[self.tos]
            print("Top of Stack :",ele)
        else:
            print("Stack is empty")

    
if __name__ == "__main__":
    s = Stack()

    while(1):
        print("\nEnter - 1: Push 2:Pop 3:Stack top 4:Exit")
        ch = int(input())
        if(ch == 4):
            break
        else:
            if(ch == 1):
                print("Enter element => ",end="")
                ele = int(input())
                s.Push(ele)
            if(ch == 2):
                s.Pop()
            if(ch == 3):
                s.TopOfStack()
