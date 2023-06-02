universal = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
groupA = [1, 2, 7, 10] # students who play cricket
groupB = [2, 3, 5, 8, 9] # badmintan
groupC = [1, 4, 6, 9, 10] # football
def interSection(groupA, groupB):
    temp = []
    for i in groupA:
        if i in groupB:
            temp.append(i)
    return temp

def unionSet(groupA, groupB):
    temp = []
    temp.extend(groupA)
    for i in groupB:
        if i in groupA:
            pass
        else:
            temp.append(i)
    temp.sort()
    return temp

def unionMinusInter(groupA, groupB):
    temp = []
    temp.extend(groupA)
    for i in groupB:
        if i in groupA:
            temp.remove(i)
        else:
            temp.append(i)
    temp.sort()
    return temp

def notInTwoSets(universal, groupA, groupB):
    temp = []
    temp.extend(groupA)
    temp.extend(groupB)
    for i in temp:
        if i in universal:
            universal.remove(i)
        else:
            pass
    return universal
def inTwoSetsNotInThird(groupA, groupB, groupC):
    temp = []
    for i in groupA:
        if i in groupB:
            temp.append(i)
    for i in groupC:
        if i in temp:
            temp.remove(i)
    return temp


print("welcome")
print("1)List of Student who play both cricket and badminton",interSection(groupA,groupB))
print("2)List  who play either cricket or badminton but not both",unionMinusInter(groupA,groupB))
print("3)Number of students who play niether cricket nor badminton",(notInTwoSets(universal,groupA,groupB)))
print("4)Number of students who play cricket and football but not badminton",(inTwoSetsNotInThird(groupA,groupC,groupB)))