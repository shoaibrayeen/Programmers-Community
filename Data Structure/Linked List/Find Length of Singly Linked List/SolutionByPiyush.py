class Element:
  def __init__(self, value):
    self.value = value
    self.next = None

class Linkedlist:
  def __init__(self):
    self.head = None

  def lengthoflist(self):
    if self.head:
      current = self.head
      counter = 0
      while current:
        counter = counter + 1
        current = current.next
      return counter
    else:
      return 0

  def append(self, new_data):
    new_node = Element(new_data)
    if self.head is None:
      self.head = new_node
      return
    current = self.head
    while (current.next):
      current = current.next
    current.next =  new_node

  def output_list(self):
    current_node = self.head
    while current_node is not None:
      print(current_node.value, end = "-->")
      current_node = current_node.next
    print('\n')
    return
    
    
L = Linkedlist()
data = int(input("Head: "))
while data!=-1:
  L.append(data)
  data = int(input("Node --> "))

L.output_list()
print(L.lengthoflist())

