import itertools
def solve(List):
    print(list(itertools.permutations(List)))
solve(list(map(int, input().split())))