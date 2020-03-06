#creating a node
class Node:
    def __init__(self,data):
        self.value=data
        self.left=None
        self.right=None


#function to check if the tree is a mirror image of another tree   
def isMirror(troot1, troot2):
    if troot1 == None and troot2 == None:
        return True;
    if (troot1 != None and troot2 != None): 
        if  troot1.value == troot2.value: 
            return (isMirror(troot1.left, troot2.right)and isMirror(troot1.right, troot2.left)) 
            
    return False;

    
#main
root = Node(5) 
root.left = Node(3) 
root.right = Node(3) 
root.left.left = Node(2) 
root.left.right = Node(7) 
root.right.left = Node(7) 
root.right.right = Node(2) 
if isMirror(root,root) == True: #passing the same roots
    print("Yes!! It is a Symmetric Tree")
else:
    print("Not a Symmetric Tree") 
