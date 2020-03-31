class Intervals:
    def __init__(self, start=0, finish=0):
        self.start=start
        self.finish=finish
    
    def __lt__(self, other):
        return self.finish < other.finish


class Activity:
    def activityselection(self, s, f):
        intervals=[]
        for i in range(len(f)):
            intervals.append(Intervals(s[i],f[i]))
        intervals.sort()
        k=Intervals()
        print("Activities after sorting according to finish time:")
        for i in intervals:
            if i==0:
                 k=Intervals(i.start,i.finish)
            print("{",i.start, i.finish,"}", end=" ")
        print("\nActivities to be selected are:")
        counter=0
        for j in intervals:
            if j.start >= k.finish:
                counter+=1
                print ("{",j.start, j.finish,"}", end=" ")
                k = j 
        print("\n#of activities selected are:", counter)
            
# Driver program to test above function 
if __name__=="__main__":
    n=int(input("Enter the number of activities:"))
    print("Now enter the start time and finish time of the activities:")
    s=[]
    f=[]
    for i in range(0,n):
        s.append(int(input())) 
        f.append(int(input()))
    ob= Activity ()
    ob.activityselection(s,f)
