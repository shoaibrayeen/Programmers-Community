#creating a node
class Node:
    def __init__(self,data):
        self.value=data
        self.left=None
        self.right=None

#function to calculate size of a tree
def sizeOfTree(root):
    if root is None:
        return 0;
    else:
        return (sizeOfTree(root.left)+1+sizeOfTree(root.right)); 

#main
root=Node(2)
root.left=Node(4)
root.right=Node(8)
root.left.left=Node(10)
root.left.right=Node(12)
root.right.left=Node(14)
result=sizeOfTree(root)
print("Size of the given tree is:", result)
