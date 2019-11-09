class Element:
  def __init__(self, value):
    self.value = value
    self.next = None

class Linkedlist:
  def __init__(self):
    self.head = None

  def search(self,x):
    current = self.head
    while current!=None:
      if current.value == x:
        return "YES"
      current = current.next
    return "NO"     

  def append(self, new_data): 
    new_node = Element(new_data) 
    if self.head is None: 
      self.head = new_node 
      return
    last = self.head 
    while (last.next): 
      last = last.next
    last.next =  new_node 

  def output_list(self):    
    current_node = self.head
    while current_node is not None:
      print(current_node.value, end = "-->")
      current_node = current_node.next
    print('\n')  
    return
    
    
L = Linkedlist()
L.append(6)
L.append(7)
L.append(8)
L.append(20)
L.search(5) #should return NO
L.search(6) #should return YES
