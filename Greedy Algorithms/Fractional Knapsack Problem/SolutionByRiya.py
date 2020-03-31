class Item: 
    def __init__(self, wt, val): 
        self.wt = wt 
        self.val = val 
        self.cost = val // wt 
    def __lt__(self, other): 
        return self.cost < other.cost
    
# Greedy Approach 
class FractionalKnapSack: 
    
    def totalWeightObtained(self,wt, val, capacity): 
        items = [] 
        for i in range(len(wt)): 
            items.append(Item(wt[i], val[i])) 
  
        items.sort(reverse = True) 
  
        totalWeight = 0
        for i in items: 
            currentWeight = int(i.wt) 
            currentValue = int(i.val) 
            if capacity - currentWeight >= 0: 
                capacity -= currentWeight 
                totalWeight += currentValue 
            else: 
                fraction = capacity / currentWeight 
                totalWeight += currentValue * fraction 
                capacity = int(capacity - (currentWeight * fraction)) 
                break
        return totalWeight 
  
# Driver Code 
if __name__ == "__main__": 
    n=int(input("Enter the number of items:"))
    print("Now enter the weight and value of the items:")
    wt=[]
    val=[]
    for i in range(n):
        wt.append(int(input())) 
        val.append(int(input()))
        
    capacity=int(input("Enter the capacity of the bag:"))
    ob=FractionalKnapSack()    
    print("Maximum value in Knapsack =", ob.totalWeightObtained(wt, val, capacity) )
