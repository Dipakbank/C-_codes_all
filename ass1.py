class Stack:
    def __init__(self):
        self.stack = []
    def push(self, ele):
        self.stack.append(ele)
    def pop(self):
        self.stack.pop()
    def peek(self):
        if len(self.stack):
            return self.stack[len(self.stack)-1]
        else:
            print("stack is empty")
    def display(self):
        print(self.stack)
def palidrome(str):
    s=Stack()
    str=str.lower()
    ignore=[" ",",",".","!","&","?","\"","\'"]#make the set of ignorance
    res1=""
    res2=""
    if len(str):#check string is empty or not
        for i in range (0,len(str)):
            if str[i] in ignore:
                pass
            elif str[i] not in ignore:
                s.push(str[i])
                res1+=str[i]
# print(len(res1))
        if len(res1):#check stack is empty after removing ignorances
            for i in range (0,len(res1)):
                res2+=s.peek()
                s.pop()
            print("res 1: ",res1)
            print("res 2: ",res2)
            if res1==res2:
                    print("string is palidrome")
            else:
                print("string is not palidrome")
        else:
            print("it is empty for charecter")
    else:
        print("it is empty")
str="Poor Dan is in a droop\""
str1="madam"
str2="akash ghadge"
palidrome(str)
palidrome(str1)
palidrome(str2)