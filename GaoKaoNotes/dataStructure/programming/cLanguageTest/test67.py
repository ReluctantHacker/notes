'''
The permutation insertion method is a technique used to generate all permutations of a given set by systematically inserting elements into all possible positions of previously generated permutations. Here's a concise explanation of how it works:
    (the idea came from this site: https://cuigeg.github.io/2017/05/05/heap-algorithms/#%E4%B8%80%E7%A7%8D%E5%85%A8%E6%8E%92%E5%88%97%E7%9A%84%E6%80%9D%E8%80%83%E6%96%B9%E6%B3%95)

Steps of the Permutation Insertion Method
Start with a base case: Begin with a single permutation of the first element (e.g., for a set {1, 2, 3}, start with [1]).
Iteratively insert elements: For each subsequent element, insert it into every possible position of the existing permutations.
Repeat until all elements are processed: Continue this process until all elements of the set have been inserted.
Example
For the set {1, 2, 3}:

Start with [1].
Insert 2 into all positions of [1]:
Insert at position 0: [2, 1]
Insert at position 1: [1, 2] Result: [[2, 1], [1, 2]]
Insert 3 into all positions of each permutation:
For [2, 1]: [3, 2, 1], [2, 3, 1], [2, 1, 3]
For [1, 2]: [3, 1, 2], [1, 3, 2], [1, 2, 3] Result: [[3, 2, 1], [2, 3, 1], [2, 1, 3], [3, 1, 2], [1, 3, 2], [1, 2, 3]]
Final permutations: [[3, 2, 1], [2, 3, 1], [2, 1, 3], [3, 1, 2], [1, 3, 2], [1, 2, 3]].

Python Implementation
Here’s a Python implementation of the permutation insertion method:
'''

def permute(nums):
    result = [[]]
    for num in nums:
        new_result = []
        for perm in result:
            for i in range(len(perm) + 1):
                new_result.append(perm[:i] + [num] + perm[i:])
                print(new_result)
        result = new_result
    return result

# Example usage
nums = [1, 2, 3]
print(permute(nums))
'''
Output:

[[3, 2, 1], [2, 3, 1], [2, 1, 3], [3, 1, 2], [1, 3, 2], [1, 2, 3]]
This method is efficient for generating permutations and is widely used in combinatorial algorithms. Let me know if you'd like further clarification!
'''
