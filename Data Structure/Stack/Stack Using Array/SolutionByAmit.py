stack = []
top = -1

def is_empty():
    if top == -1:
        return True
    return False


def push(x):
    global top
    top += 1
    stack.append(x)
    return

def pop():
    global top
    if is_empty():
        print('Stack Underflow.')
    else:
        stack.remove(stack[top])
        top -= 1
    return

if __name__ == '__main__':
    push(10)
    push(20)
    push(30)
    push(40)
    push(50)
    print(stack)

    print("After a pop operation:")
    pop()

    print(stack)

# Sample Output
# [10, 20, 30, 40, 50]
# After a pop operation:
# [10, 20, 30, 40]
