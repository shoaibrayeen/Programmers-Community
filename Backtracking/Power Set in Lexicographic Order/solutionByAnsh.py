'''
Made by: Ansh Gupta(@ansh422)
Date: 03/10/2021
'''

def backtrack(string,n,idx=-1,curr=[]):
    if idx == n:
        return
    if len(curr) > 0:
        print("".join(curr))
    for i in range(idx+1,n):
        curr.append(string[i])
        backtrack(string,n,i,curr)
        curr.pop()
     
def powerSet(s):
    s_sorted="".join(sorted(s))
    backtrack(s_sorted,len(s_sorted))
  
if __name__ == "__main__":
    s=input()
    powerSet(s)
