def heaps_algorithm(n, arr, result):
    if n == 1:
        result.append(arr.copy())
        return
    # Actually, the whole logic is by locking the last elements and then swap around the previous ones recursively. the two rules of heap's algorithm guarantees that the permutations won't repeat itself. It doesn't like normal swap methods and used[] methods would backtrack back to orginal state. Heap's algorithm would use permutation to generate another different permutation. You can prove this is true by "mathmematical induction proof", prove that that small n, the advantages of heap's algorithm are true. And this can derive that for big n, it also be true.
    for i in range(n):
        heaps_algorithm(n - 1, arr, result)

        # Swap depending on whether n is odd or even, but the truth is odd and even is not important at all, the only things matter is that you have to switch the bewteen the two rules when n changes
        if n % 2 == 1:
            arr[0], arr[n - 1] = arr[n - 1], arr[0]
        else:
            arr[i], arr[n - 1] = arr[n - 1], arr[i]

        ''' This below also works perfectly which swithces the rules between even and odds. The algorithm itself is symmetry between two rules.
        if n % 2 == 0:
            arr[0], arr[n - 1] = arr[n - 1], arr[0]
        else:
            arr[i], arr[n - 1] = arr[n - 1], arr[i]
        '''
        # the only things matters the logic should be consistent through all the process


# Example usage
data = [1, 2, 3, 4, 5]
result = []
heaps_algorithm(len(data), data, result)

print("Permutations:")
for perm in result:
    print(perm)
