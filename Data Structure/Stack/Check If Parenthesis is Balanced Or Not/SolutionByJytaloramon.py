#
# Check If Parenthesis is Balanced Or Not
#
# Time Complexity: O(|n|)
# Space Complexity: O(|n|)
# - As n=expression
#
# @author Ramon Almeida
# @date 2021-10-20
#


def main():

    # Test
    # expressions_test = ['(A*(B+(C*(D+(E*(F+G))))))', '5-[4+(0-3]',
    #                    '{5-[(4+(0-3))]}', '3-[15+2*(4-3)*[2+(5-1)]]/4', '{5-[(4+(0-3))]})']

    tokens = [('(', ')'), ('[', ']'), ('{', '}')]

    print('Enter the expressions to be validated. Separate by "," for more than one.')
    print('Ex: 5*(4+1),40+{4*(10-2)}')

    expressions_test = input('\nEnter: ').split(',')

    print('\n----\n')

    for exp in expressions_test:
        print(exp, ': Balanced' if expresion_is_valid(
            exp, tokens) else ': Not Balanced')


def expresion_is_valid(exp, tks):

    stack = []
    tokens = Tokens(tks)

    for el in exp:

        rs = tokens.find(el)
        if not(rs is None):
            if el == rs[0]:
                stack.append(el)
            else:
                if len(stack) == 0 or not(stack[-1] == rs[0]):
                    return False
                stack.pop()

    return len(stack) == 0


class Tokens:

    def __init__(self, tokens):
        self.tokens = tokens

    def find(self, elemnt):

        for e in self.tokens:
            if e[0] == elemnt or e[1] == elemnt:
                return e

        return None


if __name__ == '__main__':
    main()
