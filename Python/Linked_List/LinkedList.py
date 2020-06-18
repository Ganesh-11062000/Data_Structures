class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:

    def __init__(self):
        self.head = None

    def insertBeg(self,ele):
        node = Node(ele)

        if(self.head == None):
            self.head = node
        else:
            node.next = self.head
            self.head = node


    def insertEnd(self,ele):
        node = Node(ele)

        if( self.head == None):
            self.head = node
        else:
            temp = self.head
            while(temp.next != None):
                temp = temp.next
            
            temp.next = node


    def search(self,ele):
        if( self.head == None):
            print("Linked List is empty")
        else:
            temp = self.head
            while(temp != None):
                if temp.data == ele:
                    print("{} is present !".format(ele))
                    return
                else:
                    temp = temp.next

            if (temp == None):
                print("{} is not present !".format(ele))


    def deleteBeg(self):
        if(self.head == None):
            print("Linked List is empty !!")
            return
        elif (self.head.next == None):
            ele = self.head.data
            self.head = None
        else:
            ele = self.head.data
            self.head = self.head.next
        
        return ele


    def deleteEnd(self):
        if( self.head == None):
            print("Linked List is empty")
        elif (self.head.next == None):
            ele = self.head.data
            self.head = None
        else:
            temp = self.head
            while(temp.next.next != None):
                temp = temp.next
            ele = temp.next.data
            temp.next = None
        return ele


    def deleteEle(self,ele):
        if( self.head == None):
            print("Linked List is empty")
        elif (self.head.data == ele):
            self.head = self.head.next
        else:
            temp = self.head
            while(temp.next != None):
                if(temp.next.data == ele):
                    temp.next = temp.next.next
                    return
                else:
                    temp = temp.next
            
            if (temp.next == None):
                print("{} is not present !!".format(ele))


    def display(self):
        if (self.head == None):
            print("Linked List is empty !!")
        else:
            temp = self.head
            while(temp != None):
                print(temp.data,end=" ")
                temp = temp.next
            print("")




if __name__ == "__main__":
    LL = LinkedList()

    while(1):
        print("Enter 1:InsertBeg 2:InsertEnd 3:DeleteBeg 4:DeleteEnd 5:DeleteEle 6:Search 7:Display 8:Exit")
        ch = int(input())

        if(ch == 8):
            break
        else:
            if(ch == 1):
                print("Enter element => ",end="")
                ele = int(input())
                LL.insertBeg(ele)    
                LL.display()
            if(ch == 2):
                print("Enter element => ",end="")
                ele = int(input())
                LL.insertEnd(ele)    
                LL.display()
            if(ch == 3):
                ele = LL.deleteBeg()
                print("{} is deleted !!".format(ele))
                LL.display()
            if(ch == 4):
                ele = LL.deleteEnd()
                print("{} is deleted !!".format(ele))
                LL.display()
            if(ch == 5):
                print("Enter element => ",end="")
                ele = int(input())
                LL.deleteEle(ele)
                LL.display()
            if(ch == 6):
                print("Enter element => ",end="")
                ele = int(input())
                LL.search(ele)
            if(ch == 7):
                LL.display()
            
                