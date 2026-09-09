# Data Structures and Algorithms Notes

|#############################################################################################################|
1. Some Data Structures
	A. Primitive: integer, float, string, boolean
	B. Non-primitive:
		a. Linear (in sequential order): list, tuple, array, linked list, stack, queue
		b. Non-linear: set, dictionary, tree, graph

|#############################################################################################################|
2. Program Complexity
	A. Space complexity

	B. Time complexity
		a. f ∈ o(g)  ---   order(f)<order(g)  ---  lim f(x)/g(x) = 0 , x->∞
		a. f ∈ O(g)  ---   order(f)≤order(g)  ---  lim f(x)/g(x) < ∞ , x->∞
		a. f ∈ ϴ(g)  ---   order(f)=order(g)  ---  lim f(x)/g(x) ∈ R > 0 , x->∞
		a. f ∈ Ω(g)  ---   order(f)≥order(g)  ---  lim f(x)/g(x) > 0 , x->∞
		a. f ∈ ω(g)  ---   order(f)>order(g)  ---  lim f(x)/g(x) = ∞ , x->∞

|#############################################################################################################|
3. Recursive Algorithms (basic), closed forms of recursive problems (please refer to the algorithm.txt notes)
	A. Factorial
        a. The ordinary recursive version of factorial is very simple, but there is a concept called "tail recursion." This is not something that only applies to factorial; many recursive algorithms can be implemented this way. I am only putting it here together with factorial because it is convenient to introduce it this way. In a normal recursive function call, you usually still have some work to do after the recursive call returns. Therefore, when you enter deeper recursive levels from the beginning, the stack has to remember the unfinished work, and after finishing the deepest level, execution comes back to the shallower levels to finish that work. In other words, it actually goes "down and back up." Tail recursion tries to make the recursive call the very last operation, so there is no unfinished work to return to. Mathematically, tail recursion is not necessarily faster, but physically it can save memory because the stack frame does not have to grow. Since the current function has already finished all its work before making the next recursive call, there is no need to preserve unfinished state; in an optimized implementation, the stack can remain at essentially one level. Structurally, it starts to resemble a `for` loop. However, many compilers (for example, GCC for C) do not necessarily optimize tail recursion automatically. In that case, even a tail-recursive function still creates stack frames, so there is no memory saving. (Not every recursive algorithm can be converted into tail recursion.)
            I. Non-tail recursive version of recursive factorial:
                🤔. ```c
                int factorialRec(int n) {
                    if (n==1 || n==0) return 1;
                    return factorialRec(n-1)*n; // After factorialRec(n-1) is called, we still need to multiply by n, so the stack must remember the unfinished operation.
                }
                ```
            II. Tail recursive version of recursive factorial:
                🤔. ```c
                int factorial_tail(int n, int acc) {
                    if (n == 0) return acc;
                    return factorial_tail(n - 1, acc * n); // This is a tail call: after the recursive call returns, there is no further work to do.
                }
                ```

	B. Fibonacci Number
	C. Greatest Common Divisor (GCD)
	D. Binomial Coefficient
        a. C(5, 3) = C(4, 2) + C(4, 3)
        b. Choose 3 people from A, B, C, D, E to form a team. How many combinations are there?
            I. The intuitive idea behind the recurrence is that the number of teams in which A must be included plus the number of teams in which A must not be included equals the total number of ways to choose 3 people from 5.
	E. Ackermann's Function
        a. To understand Ackermann's function, we need a concept called "primitive recursive functions." It satisfies the following two rules (`vector_x` means many variables x1, x2, x3, x4, ... of any number; the recursive parameter is only y, which is analogous to the n variable in the simplest recursive functions). Most of the recursive problems we usually encounter are actually primitive recursive, such as all the recursive problems mentioned earlier: factorial, Fibonacci, etc. More complicated recursions can also have x parameters.
            I. f(vector_x, 0) = g(vector_x)
            II. f(vector_x, y+1) = h(vector_x, y, f(vector_x, y))
            III. Example (recursive addition). This is essentially "the (y+1)-th term equals the y-th term + 1":
                🤔. `add(x, 0) = x`
                🤔. `add(x, y+1) = add(x, y) + 1`    ----> single recursion; only y contributes the recursive progression
            IV. Example (recursive multiplication)
                🤔. `mul(x, 0) = 0`
                🤔. `mul(x, y+1) = add(x, mul(x, y))`
            V. Misconception 1: We just talked about the recursive term y+1. Suppose odd terms 1, 3, 5, 7 recurse among themselves, while even terms 2, 4, 6, 8 recurse among themselves. Is the whole sequence still a single recursion? Strictly speaking, that is two independent single recursions mixed together. More precisely, even if the recurrence advances by y+2, you can rewrite y+2 as z+1; the distance between terms is relative anyway. Suppose the recursive function can generate only the even terms. From the point of view of that recursive sequence, those even terms are the whole sequence. The essence of primitive recursion is not the requirement that the index must literally increase by +1, but whether the definition can be transformed into a step-by-step recurrence. If it can, it is still a single primitive recursion. More generally, the recursive parameter must be linear, such as `ay+b`, where a and b are constants, so that it can be transformed into a `z+1` form. If it is nonlinear (for example, depends on y², or depends on two parameters y=m+n), it is not primitive recursion.
                🤔. `f(x,0)=g(x), f(x,y^2)=h(x,y,f(x,y))` ----> not primitive recursion
                🤔. There is a concept called a "linear recurrence," which sounds somewhat similar to the linearity condition just mentioned, but they are not the same thing. A linear recurrence actually means something like `a_n = c1*a_(n-1) + c2*a_(n-2) + ... + ck*a_(n-k) + f(n)`, where all the c's are constants; that is, the n-th term is a linear combination of previous terms. More directly, `h()` is a linear function.
            VI. Misconception 2: When the recursive parameter is y², it is not primitive recursion, but that does not mean it is "non-primitive recursive." The distinction is that y² itself is not total over all integer indices; it generates 1, 4, 9, 16, 25, ... only. A non-primitive-recursive function is still recursive; it is not "non-recursive." We can even say that a recurrence defined only on y² does not itself constitute a proper recurrence over all natural-number steps.
        b. To thoroughly understand what the Ackermann function is doing, we need to introduce a mathematical field called "theory of computation."
            I. Which computational models should be adopted (formal languages, automata, etc.)?
            II. Which problems are computable and which are not (computability theory, algorithms)?
                🤔. The following are three equivalent definitions:
                    😂. There exists a Turing machine (or an equivalent machine) M such that, for every input x, M halts after finitely many steps and outputs f(x).
                    😂. μ-recursive function definition (μ-recursive functions, also called general recursive functions)
                        😂. f belongs to the set generated from the following basic functions by composition, primitive recursion, and the μ-operator (minimization operator):
                            😂. Zero function Z(x) = 0. The zero function is a special case of a constant function f(x) = C.
                            😂. Successor function S(x) = x+1. It takes a natural number as input and outputs its successor. It may look trivial, but it is useful in the famous Peano axioms for defining the order and structure of the natural numbers.
                                👍. Peano's five axioms (informal description of the axiom system for natural numbers):
                                    👌. 0 is a natural number.
                                    👌. For every definite natural number a, there is a definite successor S(a)=a', and a' is also a natural number. Here S() is merely the successor function; note that it has **not yet** been defined as S(x)=x+1. It only means "the successor," without specifying an arithmetic operation.
                                    👌. For every natural numbers b and c, b=c if and only if the successor of b equals the successor of c.
                                    👌. 0 is not the successor of any natural number.
                                    👌. For any proposition about natural numbers, if it is true for 0, and whenever it is true for a it can be proved true for a', then it is true for all natural numbers.
                                👍. The Peano axioms define the order, starting point, uniqueness, and induction property of the natural numbers, but they do not themselves define arithmetic operations. Arithmetic properties are given by Peano Arithmetic (PA), which can be viewed as Peano-style axioms plus addition and multiplication axioms.
                                    👌. Addition axioms:
                                        🥵. x+0=x,
                                        🥵. x+S(y)=S(x+y)
                                    👌. Multiplication axioms:
                                        🥵. x⋅0=0,
                                        🥵. x⋅S(y)=x⋅y+x
                            😂. Projection function `U_i^x(x1, x2, ..., xn) = xi`. The concept is extremely simple. It is somewhat analogous to projecting a component in geometry, but here it is even more straightforward: given many values x1, x2, ..., xn, the function returns one selected input, such as x2. For example, `P^3_2(x1, x2, x3) = x2`.
                        😂. In μ-recursion, the μ-operator (primitive recursion was already discussed above, so we skip it here), together with the preceding conditions, gives μ-recursive functions, which include all Turing-computable functions. Roughly speaking, "primitive recursive functions + μ-operator = μ-recursive functions," which are equivalent in expressive power to Turing-computable functions.
                            😂. Find the smallest y satisfying an equality or inequality condition. For example:
                                👍. `f() = μy[10−y2≤0] = 4`
                            😂. Intuitively, start from 0 and check one by one until you find the first y satisfying the condition.
                            😂. The μ-operator allows an "unbounded search" until a solution is found; primitive recursive functions cannot in general perform such an unbounded search, so μ-recursive functions form a larger class.
                            😂. More intuitively and precisely, a primitive recursive function g(y) simply takes y as input and computes g(y). The μ-operator uses g(y) by trying y=0, y=1, y=2, ..., y=n until g(y) reaches a value that satisfies the required condition; that search procedure itself is the μ-operator. It is an additional operator, so it extends the class of primitive recursive functions. This notion of "extension" appears throughout mathematics.
                            😂. Note that primitive recursive functions themselves can also be expressed using the μ-operator! Do not misunderstand this point: if the condition has exactly one solution and it appears at some fixed, guaranteed y, the μ-operator can collapse to simply returning that predetermined value. In that situation it is just another way of writing a primitive recursive function. In other words, the presence of a μ-operator is a **necessary tool for expressing the full class beyond primitive recursion, but using μ does not automatically make a particular function non-primitive-recursive**. Therefore, you cannot prove that the Ackermann function is non-primitive-recursive merely by showing that it can be expressed using μ.
                    😂. λ-calculus definition (λ-definability): f can be defined in the λ-calculus.
                🤔. Intuitively, there are two key ideas:
                    😂. finitely many steps
                    😂. the steps are explicit (i.e., an algorithm exists)
            III. Computational complexity theory is basically the area containing things like big-O notation.
        c. Knuth's up-arrow notation (a form of hyperoperation; see Wikipedia for details; it is used for finite numbers, and does not by itself move into transfinite/infinite arithmetic)
            I. The single arrow ↑ represents exponentiation (iterated multiplication)
                🤔. `2↑4 = H_3(2, 4) = 2×(2×(2×2)) = 2^4 = 16`
            II. The double arrow ↑↑ represents tetration (iterated exponentiation)
                🤔. `2↑↑4 = H_4(2, 4) = 2↑(2↑(2↑2)) = 2^16 = 65536`
            III. The triple arrow ↑↑↑ represents pentation (iterated tetration)
                🤔. `2↑↑↑4 = H_5(2, 4) = 2↑↑(2↑↑(2↑↑2))`

        d. Ackermann function. First of all, we know that "Primitive recursive functions ⊆ μ-recursive functions". And "Ackermann ∈ μ-recursive/computable but Ackermann !∈ Primitive Recursive". It is one of the examples that follows the μ-recursive(total computable) but is not primitive recursive. It does not directly use the μ-operator, but it can still be constructed using μ because μ can be used to simulate indirect/nested recursion. To prove that Ackermann is non-primitive-recursive, the strategy is to prove that no primitive recursive function is identical to the Ackermann function. Another strategy is to prove that the growth of every primitive recursive function is eventually dominated by Ackermann(non-pritimive recursion would dominate primitive ones). This is somewhat analogous to the idea of one divergent sequence eventually outgrowing another sequence, which we discussed when talking about growth rates of sequences. There is a discussion here: [https://math.stackexchange.com/questions/1228666/the-ackermanns-function-grows-faster-than-any-primitive-recursive-function](https://math.stackexchange.com/questions/1228666/the-ackermanns-function-grows-faster-than-any-primitive-recursive-function)
        e. Properties of the Ackermann function and the proof of its hyper-growth:
            I. Basically, every increment of m increases the growth-rate "level" by one. You can think of n as controlling growth within a sequence, while m controls the level/type of the sequence's growth.
                🤔. A(0, 0) = n+1
                🤔. A(1, n) = 2+(n+3)-3
                🤔. A(2, n) = 2*(n+3)-3
                🤔. A(3, n) = 2↑(n+3)-3
                🤔. A(4, n) = 2↑↑(n+3)-3
                🤔. A(5, n) = 2↑↑↑(n+3)-3
                🤔. A(6, n) = 2↑↑↑↑(n+3)-3
                🤔. A(m, n) = 2(↑^(m-2))(n+3)-3
            II. Grzegorczyk hierarchy (a growth-rate hierarchy of primitive recursive functions)
                🤔. Using the idea of Knuth up-arrow notation, takes the same general idea of successively stronger growth and turns it into a formal hierarchy of classes of functions: ↑,↑↑,↑↑↑,... -> (Hierarchy) E0,E1,E2,...
            III. Every primitive recursive function is bounded in growth by some fixed level A(m, ·), but in the Ackermann function m itself varies and increasing m jumps to a higher growth level. Therefore, the Ackermann growth level is not fixed, whereas a given primitive recursive function has some fixed level; hence Ackermann is not primitive recursive.
            IV. The reason why Ackermann function is important is because that before Ackermann, we might reasonably think: "Primitive recursion seems extremely powerful. We can build addition, multiplication, exponentiation, Fibonacci, factorial, etc. Maybe every computable function can be expressed this way.". Ackermann gives a decisive no, there is a function that: 1. is completely computable. 2. always terminates. 3. has a finite answer for every finite input. Yet cannot be constructed using primitive recursion alone.
        f. Nested recursion. In plain terms, nested recursion means that the argument of a recursive call is itself the output of a recursive function (similar in spirit to a higher-order function, i.e. a function taking a function's result as part of its argument). Ackermann is a kind of nested recursion.
            I. Basic definitions and explanation
                🤔. Ordinary recursion: `f(n) = g(f(n-1), n)`
                    😂. Example: `f(n) = 2*f(n-1)+1`
                🤔. Nested recursion: `f(n) = g(f(f(n-1)), f(n-1), n)`
                    😂. Example: `f(n) = 2*f(f(n-1))+f(n-1)+1`
            II. What is a "nested loop"? The name sounds similar.
                🤔. A nested loop is simply a `for` loop inside another `for` loop. It is a common programming structure; the term is just a name for multiple layers of loops.
            III. Below are explanations of various forms of recursion (linear recursion, binary/multiple recursion, etc.).
                🤔. https://medium.com/learn-or-die/recursion-%E9%81%9E%E8%BF%B4-%E4%B8%8D%E5%90%8C%E9%A1%9E%E5%9E%8B%E7%9A%84%E9%81%9E%E8%BF%B4-659ab2f53466

	F. Tower of Hanoi
        a. Explanation:
            I. 1 level, 1
            II. 2 levels, 1*2 + 1 = 3 = 4-1 = 2^2-1
            III. 3 levels, 3*2 + 1 = 7 = 8-1 = 2^3-1
            IV. 4 levels, 7*2 + 1 = 15 = 16-1 = 2^4-1
            V. n levels, 2^n-1
            VI. So `H(n) = 2^n-1`
            VII. Or `H(n) = H(n-1)*2+1`
            VIII. The basic idea is that we leave the bottom disk on peg A untouched, first move all the upper disks to peg B (cost H(n-1)), then move the bottom disk to peg C (cost 1), and finally move all disks from peg B to peg C (cost H(n-1)). Therefore the total cost is `2*H(n-1)+1`.

	G. Permutation
        a. In mathematics, `P(5, 3) = 5!/2!`. Choosing and arranging 3 out of 5 gives 5*4*3 = 5!/2!. Because permutation cares about order, whereas combination does not, combination has an additional division by 3!: `C(5, 3) = 5!/(2!*3!)`.
        b. The recurrence for the combination coefficient was explained earlier; it is the binomial coefficient. The recurrence pattern for permutation is:
            I. `P(n, i) = P(n-1, i) + i*P(n-1, i-1)`
            II. The idea is basically the same as for combinations. For example, for A, B, C, D, E choosing and arranging 3 elements, `P(5, 3)=P(4, 3)+3*P(4, 2)`. The first term counts arrangements where A is not selected. The second counts arrangements where A is definitely selected: first remove A and choose/arrange two of the remaining four (`P(4, 2)`), then insert A into one of the 3 positions, giving `3*P(4, 2)`.

    H. Backtracking problems (the basic idea of backtracking is to find all paths in a decision tree: go deeper from the root toward a leaf, hit a dead end, then go back. The problem must be representable as a decision tree, even if you do not explicitly draw it.)
        a. Permutation (enumerate or access all possible permutations)
            I. Backtracking for permutation is tricky.
            II. Using a `for` loop is natural because it walks through all elements from beginning to end.
            III. Detailed principle of the `used[]` method (with backtracking), O(n*n!):
                🤔. The core idea is that, for `[a, b, c, d]`, we need to remember which elements have already been placed into the path.
                🤔. First place a, b, c in order. These elements are recorded as used in `used[]`, then with a, b, c fixed, place the remaining element (d) in the last position.
                🤔. Then remove c (and set c back to false in `used[]`), keep a and b fixed, and put the next possible element (d) into the original position of c (the third position). Since d was already used, c naturally becomes the last element.
            IV. `swap()` method (with backtracking), O(n*n!).
            V. Heap's algorithm, O(n!)
                🤔. This method is not really backtracking, because it does not "undo" a choice. Instead, it directly uses one generated permutation to construct the next permutation without duplication, so it performs fewer swaps. Complexity: O(n!). It is still recursive; see the programming implementation notes for details. It has two rules that alternate depending on the recursion level.
            VI. Lehmer code (assign a unique code/ID to each permutation):
                🤔. Encoding rule:
                    😂. For each position, count how many elements to the right are smaller than this one. (This guarantees a unique code for every permutation.)
                🤔. Properties:
                    😂. Factorial number system (for n=3, see the permutation, corresponding Lehmer code, and factorial value):

| Permutation | Lehmer Code (L[i]) | Factorial Value Calculation | Factorial Value (ID) |
| ----------- | ------------------ | ---------------------------- | -------------------- |
| `[1,2,3]`   | `[0,0,0]`          | `0*2! + 0*1! + 0*0!`        | `0`                  |
| `[1,3,2]`   | `[0,1,0]`          | `0*2! + 1*1! + 0*0!`        | `1`                  |
| `[2,1,3]`   | `[1,0,0]`          | `1*2! + 0*1! + 0*0!`        | `2`                  |
| `[2,3,1]`   | `[1,1,0]`          | `1*2! + 1*1! + 0*0!`        | `3`                  |
| `[3,1,2]`   | `[2,0,0]`          | `2*2! + 0*1! + 0*0!`        | `4`                  |
| `[3,2,1]`   | `[2,1,0]`          | `2*2! + 1*1! + 0*0!`        | `5`                  |

                    😂. The factorial-value rule generates consecutive natural numbers, so there are no collisions. This makes it convenient to use the value as a permutation ID. Lehmer code itself is also unique for a permutation.
                    😂. Other encoding schemes exist, of course, but almost all ranking/unranking algorithms are either based directly on Lehmer code or are slight variations of it. It is one of the most famous and widely used methods for assigning unique IDs to permutations.
                    😂. Lehmer code requires the elements of the permutation to have an order (natural numbers, alphabetic letters, etc.). If the elements are inherently unordered, you must define an order yourself before using Lehmer code.
                    😂. Lehmer code is simple and efficient, and it is reversible: given the factorial value, you can uniquely recover the Lehmer code.
            VII. Steinhaus–Johnson–Trotter (SJT) algorithm, O(n*n!)
                🤔. Rules:
                    😂. Assume the sequence `{1, 2, 3, ... n}`.
                    😂. Give each element a direction indicating which way it can move. Usually all elements initially point left (`<`).
                    😂. An element is mobile if:
                        🥵. it is not at the boundary,
                        🥵. it is larger than the adjacent element in the direction it wants to move.
                    😂. At each step, swap the largest mobile element with its adjacent neighbor in that direction.
                    😂. After the swap, reverse the direction of every element larger than the element that was just moved.
                    😂. Repeat until there is no mobile element; then the algorithm terminates.
                🤔. Properties:
                    😂. Every swap produces a unique permutation, so like Heap's algorithm, it produces no duplicates.
                    😂. Because every step requires finding the largest mobile element, this search itself is a relatively expensive part of the computation.
                🤔. Advantage:
                    😂. Although it does not provide a computational-complexity advantage, its permutations are generated in a "continuous" way: each new permutation differs from the previous one by a minimal local change. This is analogous to the idea behind Gray code and is useful for problems where adjacency/continuity matters.
                🤔. Related concepts:
                    😂. Hamiltonian Path
                        🥵. A path in a graph that visits every vertex exactly once. A Gray code can be viewed as a special case of a Hamiltonian path.
                    😂. Gray Code
                        🥵. See the engineering-Others notes.
                🤔. Advanced concept:
                    😂. Treat all permutations generated by SJT as a graph. For `{1, 2, 3}`, the six permutations are `[1,2,3]`, `[1,3,2]`, `[2,1,3]`, `[3,1,2]`, `[2,3,1]`, `[3,2,1]`. Connect two vertices when one can be obtained from the other by swapping adjacent elements:

```text
                         123
                        /   \\
                      132   213
                       |     |
                      312   231
                        \   /
                         321
```

                    😂. There are 6 vertices = 6 permutations.
                    😂. Each edge = one adjacent swap.
                    😂. The SJT algorithm gives a Hamiltonian path through this graph. For n=3, one path is: `123 → 132 → 312 → 321 → 231 → 213`.
                    😂. This path visits all 6 permutations exactly once while following graph edges. That is why we say SJT constructs a Hamiltonian path in the permutation graph.

        b. Combination (enumerate or access all possible combinations)
        c. N-Queens
        d. Sudoku Solver
        e. Maze Solving

    I. The main principles of recursive algorithms are roughly as follows:
        method_A: compute from child to parent, i.e. calculate from all leaves back toward the root (for example, almost all algorithms related to binary trees)
            ```text
            def recursiveFunc():
                recursiveFunc()
                doSomething()
            ```

        method_B: compute from parent to child, i.e. process from the root down toward all leaves (for example, quicksort)
            ```text
            def recursiveFunc():
                doSomething()
                recursiveFunc()
            ```

    J. Recursive functions use only one call stack for the recursive call/return process. Even if an iterative implementation of the same algorithm may use two stacks, the recursive implementation itself has only one call stack at the low level. This is an important concept: if a recursive method can be implemented using only one stack, an iterative method can in principle also be implemented with one stack (although the construction may not be obvious).

|#############################################################################################################|
4. Array
	A. Definition:
		a. Elements of an array have the same type.
		b. Elements occupy contiguous memory locations.
	B. Different dimensions:
		a. First-dimensional array
		b. Second-dimensional array
			I. There is not much to say, but one point worth noting is that C (and many popular languages, including C++, Python, Java, C#, Go, and Rust) generally uses row-major storage for multidimensional arrays (the row-first model you are familiar with). Some programming languages use column-major order. See:
			https://ithelp.ithome.com.tw/articles/10333963?sc=pt
            II. In C, a 2D array is stored contiguously, so the memory location immediately after the end of one row is the first element of the next row. This is the intuitive arrangement.
            III. Strictly speaking, C does not have a distinct runtime "2D array object" separate from arrays; `int arr[ROWS][COLS]` is an array of arrays, while `int **arr` is a pointer-to-pointer representation that can be used to simulate a 2D structure. The two approaches are:
                🤔. `int arr[ROWS][COLS];` The variable `arr` decays to `int (*)[COLS]`, which is **not** `**arr`. It is a pointer to an array of `COLS` integers. When you write `void testFunct(int (*arr)[Cols]) {}`, `arr` points to the first element of a row (more precisely, it points to an array whose first element is that row).
                🤔. With `int **arr`, the `malloc()` calls are independent. The address returned by one call is not guaranteed to be adjacent to the address returned by the next call, so `arr[0]`, `arr[1]`, `arr[2]`, ... are not necessarily contiguous. Example:
                    ```c
                    int **arr = (int **)malloc(RowNum*sizeof(int *));
                    for (int i=0; i<RowNum; i++) {
                        arr[i] = (int *)malloc(ColNum*sizeof(int));
                    }
                    ```
                    The `int **` approach also allows each row to have a different length, because each row is separately allocated in dynamic memory.

	c. Third-dimensional array

|#############################################################################################################|
5. Linked List
	A. Advantages
		a. Dynamic size: space can be expanded dynamically; the size does not need to be fixed in advance.
		b. Non-contiguous storage: contiguous memory is not required.
		c. Inserting or deleting an element at an arbitrary position in a linked list does not require moving all subsequent elements (but note that if you do not already have the address of the target position, you still need to traverse the list to reach it; an array can access by index directly). The insertion/deletion itself is O(1) once the relevant node/position is known.

	B. Disadvantages:
		a. Poor random access efficiency: you need to search from the head, O(n); an array can directly access a specified position.
		b. Extra memory is required for links/pointers.
	C. Additional notes:
		a. A linked list can be viewed conceptually as a one-branch tree: each node has only one outgoing child link.
		b. The basic unit of both a tree and a linked list is a node.
		c. In practical computer science, linked nodes and arrays are two of the most basic data-structure implementation techniques in memory, and many other data structures are built from them.
	D. Doubly linked list
		a. Each node contains both `*next` and `*previous`. Think of it as an enhanced singly linked list: it knows both neighbors and supports movement in both directions. When people simply say "linked list," they often mean a singly linked list.
		b. A stack only needs a singly linked list because operations occur at one end.
		c. A queue also does **not** require a doubly linked list. With a singly linked list, if you keep both `front` and `rear` pointers, enqueue at the rear and dequeue at the front are both O(1). The key is choosing the ends carefully so neither operation needs a full traversal.
	E. Circular linked list
	references:
	https://www.geeksforgeeks.org/linked-list-in-c/
	https://stackoverflow.com/questions/11867362/circular-queue-and-circular-linked-list
        a. A circular linked list can be used to implement a queue/deque-like structure, and its storage can grow dynamically, but unlike a circular array it cannot locate an arbitrary position in O(1); you still have to traverse nodes. *I later decided the statement should be phrased more carefully: a circular linked list can be used to implement a queue, rather than saying "it implements a circular queue." The term circular queue usually emphasizes a circular-array-style memory implementation. So a circular queue is still fundamentally a queue; "circular" describes the storage/implementation strategy.*
        b. A doubly circular linked list is to a circular doubly linked list what a doubly linked list is to a deque: it can conveniently support operations at both ends while preserving circular links.

|#############################################################################################################|
6. Stack
	A. ADT
		a. Properties:
			I. First in, Last out (FILO)

		b. Operations:
			I. `push()`: push an element onto the top of the stack
			II. `pop()`: return the top element and remove it from the stack
			III. `peek()`: return the top element without removing it
			IV. `isEmpty()`: return whether the stack is empty
			V. `size()`: return how many data items are in the stack
			ps: You can see that both push and pop act on the top, so insertion and deletion occur at the same end.
	B. Array implementation
		a. Implementation points:
			I. One array, with a length chosen according to the requirement
			II. One integer `top`, recording the top position
			III. Initialize `top` to -1; on push do `top++`, on pop do `top--`

	C. Linked-list implementation:
		a. Implementation points:
			I. One data field
			II. One `*next`, pointing to the next node
			III. The initial node is `NULL`
			IV. Unlike the array version, push and pop happen at the head
			V. The head pointer represents the stack
			VI. A `NULL` node represents the end of the stack

|#############################################################################################################|
7. Algorithms for converting between infix and postfix/prefix expressions
	A. infix -> postfix
		a. Requires 1 stack
		b. Scan from left to right
		c. If a number is encountered, output it directly. If an operator is encountered, compare its precedence with the stack top. While the incoming operator cannot satisfy the precedence condition `<=` the top according to the chosen left-associative rule, pop the stack; once the condition no longer holds, push the incoming operator. Note: the stack stores operators only.
		d. If `(` is encountered, push it onto the stack. If `)` is encountered, pop until `(` is found.
	B. Postfix evaluation algorithm
		a. Requires 1 stack
		b. Scan from left to right
		c. Push numbers onto the stack. When an operator is encountered, pop the required operands, calculate, and push the result back.
	C. infix -> prefix
		a. Requires 1 stack
		b. Scan from right to left
		c. If a number is encountered, output it directly. If an operator is encountered, compare its precedence with the stack top. While it cannot satisfy `<` the top according to the chosen right-to-left rule, pop the stack; once the condition no longer holds, push the incoming operator. Note: the stack stores operators only.
		d. If `)` is encountered, push it. If `(` is encountered, pop until `)` is found.
		e. Because scanning starts from the right, the generated result is reversed, so you need to reverse it yourself (you can use another stack for this).
	D. Prefix evaluation algorithm
		a. Requires 1 stack
		b. Scan from right to left
		c. Push numbers onto the stack; it is similar to postfix evaluation, but operand ordering during calculation must be handled carefully.

	E. Important practice problem (it covers many concepts, so study it carefully):
		http://sptutor.dyu.edu.tw/DSTutor/exprDemo6.jsp

|#############################################################################################################|
8. Queue
	A. ADT
		a. Properties:
			I. First in, First out (FIFO)

		b. Operations:
			I. `enqueue()`: insert an element at the rear of the queue
			II. `dequeue()`: return the front element and remove it from the queue
			III. `isFull()`: return whether the queue is full
			IV. `isEmpty()`: return whether the queue is empty
			V. `front()`: return the front element
			ps: push and pop happen at different ends: insertion at the rear, deletion at the front.
	B. Array implementation
		a. Linear array implementation (moving queue elements can cost O(n), so it is not very clever):
			I. One array, with a length chosen according to the requirement
			II. One integer `front`, recording the front position
			III. One integer `rear`, recording the rear position
			IV. Initialize both `front` and `rear` to -1; enqueue does `rear++`, dequeue does `front++`.
			V. When `rear` reaches the last position, if `front != -1`, this indicates "false full"/wasted space. Shift the entire queue left by `front+1` positions.

		b. Circular array (circular queue, circular buffer)
		reference: https://en.wikipedia.org/wiki/Circular_buffer
			I. One array, with a length chosen according to the requirement
			II. One integer `front`, recording the front position
			III. One integer `rear`, recording the rear position
			IV. Initialize both `front` and `rear` appropriately and update positions using modulo arithmetic, e.g. `rear=(rear+1)%n`, `front=(front+1)%n`.
			V. Circular-buffer implementations can use an n-1-capacity convention or a full-n-capacity convention. In the n-1 convention, an array of n slots stores at most n-1 elements; this often makes the empty/full distinction especially simple. In the full-n convention, all slots can be used, but an additional state/count is needed. The difference is mainly in implementation details rather than asymptotic complexity.
            VI. Round-Robin is a famous example of a circular scheduling concept. Suppose there are jobs A, B, and C. The scheduler repeatedly gives them turns: A -> B -> C -> A -> B -> C -> ... . Each job receives a limited amount of resource time on each turn until all jobs finish. This is a way to make multiple tasks appear to progress concurrently. The core idea is not merely "cycling forever," but that each item advances a little on every round.

	C. Linked-list implementation:
		a. Implementation points:
			I. One data field
			II. One `*next`, pointing to the next node
			III. One `front` pointer and one `rear` pointer; together they represent the queue
			IV. Initially, both `front` and `rear` are `NULL`
			V. Enqueue at the rear; dequeue from the front
			VI. `NULL` represents the end of the queue

|#############################################################################################################|
9. Priority Queue
	A. ADT
		a. Properties:
			I. It is not necessarily FIFO.
			II. `enqueue` inserts an arbitrary element together with a priority/weight.
			III. `dequeue` removes the element with the largest or smallest priority, depending on the implementation.
            IV. At first glance, a priority queue seems to have little in common with a normal queue because insertion and removal obey very different rules. Calling it a "priority stack" might also sound plausible, so the name is somewhat conventional rather than perfectly descriptive.

		b. Operations / implementation:
			I. A common implementation uses a heap (specifically a min-heap or max-heap).
				🤔. Definition:
					😄. It is a complete binary tree (therefore height-balanced in the structural sense).
					😄. In a max-heap, every parent is greater than or equal to its children; in a min-heap the relation is reversed.
					😄. The same property holds recursively throughout the tree.
				ps: The heap and heapsort are closely related!

			II. Heap implementation:
				🤔. A heap is usually implemented with an array (unlike a general binary tree, which is commonly implemented with linked nodes), because a heap is a complete binary tree and therefore fits naturally into an array. It can still be implemented with nodes; the array representation is simply more convenient.
                🤔. Heapify can move from top to bottom (after removing the root, the last element is moved to the root and sifted down) or from bottom to top (after inserting a new element at the last position, sift it upward). Top-down heapify is usually used after removing the root; bottom-up is used after insertion.
                🤔. A priority queue naturally removes the root (the maximum or minimum), so ordinary priority-queue operations do not require deleting an arbitrary internal node. However, heaps themselves can support more general operations, which are useful in algorithms such as Dijkstra's algorithm, A*, and event scheduling.

            III. Advantages of a heap:
                🤔. A priority queue does not have to use a heap. The most direct implementation is to enqueue all data unsorted, so enqueue is O(1), but dequeue must scan the array to find the maximum/minimum and may require shifting elements, costing O(n).
                🤔. With a heap, enqueue costs O(log n) using bottom-up bubble-up insertion, and dequeue costs O(log n) using top-down heapify. The heap gives a much better worst-case dequeue complexity.
            IV. Floyd's heap construction algorithm:
                🤔. If elements are inserted one by one using bubble-up, the i-th insertion costs O(log i), so building a heap with n elements costs O(log(1) + log(2) + ... + log(n)) = O(log(n!)) = O(n log n).
                🤔. Floyd's algorithm builds a heap from all n elements in O(n). It is a batch construction method: you already have all elements and turn the array into a heap in one pass. The reason is subtle but elegant: the total work is a weighted sum of subtree heights, and the rapidly decreasing number of nodes at larger heights makes the total proportional to n.
                🤔. See:
					https://stackoverflow.com/questions/9755721/how-can-building-a-heap-be-on-time-complexity
                🤔. The relevant sum is an arithmetico-geometric type of series. See:
					https://en.wikipedia.org/wiki/Arithmetico-geometric_sequence
                🤔. This method is for building the initial heap from a batch of values. If you need to insert new elements later one by one, use normal heap insertion.

	B. Double-ended queue (Deque)
		a. Properties:
			I. Insertion and deletion are both allowed at both ends (a normal queue inserts at one end and deletes at the other).
			II. A stack inserts/deletes at one end; a queue inserts at one end and deletes at the other. A double-ended queue allows insertion and deletion on both sides. So it can simulate both a stack and a queue, while also supporting operations neither provides directly.
	b. Implementations:
		I. Linked list: with a singly linked list, one end can support O(1) deletion but the other end would require traversal. Therefore a doubly linked list is the natural choice when O(1) insertion/deletion at both ends is required.
		II. Array: a deque can also be implemented efficiently with a circular array.

	C. Double-ended priority queue (DEPQ)
		a. Properties:
		reference: https://www.geeksforgeeks.org/double-ended-priority-queue/
			I. A double-ended priority queue supports both max-heap-like and min-heap-like operations (in simple terms, you can retrieve/delete both the maximum and the minimum, while an ordinary priority queue normally exposes one priority direction).
			II. `getMax()`: returns the maximum element.
			III. `getMin()`: returns the minimum element.
			IV. `deleteMax()`: deletes the maximum element.
			V. `deleteMin()`: deletes the minimum element.
			VI. `size()`: returns the number of elements.
			VII. `isEmpty()`: returns true if the structure is empty.

		b. Implementation:
			I. Min-max heap:
			reference: https://en.wikipedia.org/wiki/Min-max_heap
				🤔. Definition:
					😄. Every node at an even level is less than or equal to all of its descendants, while every node at an odd level is greater than or equal to all of its descendants.
					😄. It is a complete binary tree (hence structurally balanced).
					😄. The root is the minimum element.
					😄. One of the nodes on the second level (the max level) contains the maximum element.
				🤔. Operations:
					😄. `insert()`: insert at the last node and bubble upward.
						😄. time complexity: O(log n), average and worst case
					😄. `extract()`: compare downward through children/grandchildren as required by the min-max property.
						😄. time complexity: O(log n), average and worst case

	D. Symmetric Min-Max Heap (SMMH), also usable for a double-ended priority queue
	references:
	https://hackmd.io/@vRN1CwEsTLyHOsG4mC0d4Q/BkrYQ8B2V
	https://www.tutorialspoint.com/symmetric-min-max-heaps
		a. Definition:
			I. Every node on the left side says, "I am the minimum compared with my descendants."
			II. Every node on the right side says, "I am the maximum compared with my descendants."
			III. The root has no value.

	E. Deap (a simpler version of SMMH), also usable for a double-ended priority queue
	reference:
	https://medium.com/%E7%8B%97%E5%A5%B4%E5%B7%A5%E7%A8%8B%E5%B8%AB/%E5%9C%96%E8%A7%A3-double-ended-priority-queue-%E9%80%B2%E9%9A%8E%E6%A8%B9-1ae18d2ca402
		a. Definition:
			I. The root is empty.
			II. The left subtree of the root is a min-heap.
			III. The right subtree of the root is a max-heap.
			IV. For any node i in the left subtree, let j be its corresponding node in the right subtree; the key at i must be less than the key at j.
			   (If there is no exact corresponding node, use its parent.)

|#############################################################################################################|
10. Binary Tree (a tree is also a graph)
	A. General properties:
		a. Any general tree can be represented as a binary tree.
		b. Any node has degree at most 2.
		c. The left and right subtrees have an ordering; a general tree does not inherently distinguish them as left/right.

	B. Full binary tree
		a. Properties:
			I. It is perfectly balanced in the usual complete/full-tree sense.
			II. Every non-leaf node's subtrees are themselves full binary trees.
			III. The last level is completely filled.
			IV. Formulas:
				🤔. `N = 2^H - 1`, equivalently `log_2(N+1) = H`, where N = number of nodes and H = number of levels/height under this convention.
				🤔. Number of leaves `lN = 2^(H-1)`.

	C. Complete binary tree
		a. Properties:
			I. It is height-balanced structurally.
			II. Every subtree rooted at a non-leaf is also a complete binary tree.
			III. The last level need not be full, but nodes are filled from left to right with no gaps.
			IV. Formula: `H = floor(log_2(N+1))` under the level-count convention used here.

	D. Pathological tree
		a. Properties:
			I. `H = N` (H = height/number of levels, N = number of nodes) under the same convention.
		b. Left-skewed binary tree
		c. Right-skewed binary tree

	E. Implementation
		a. Array implementation
			I. Advantages:
				🤔. For a full binary tree, there is no wasted space.
				🤔. It is easy to obtain the left child, right child, and parent of a node.
					😄. If the node number is i:
						😄. left child = `2i`, if `2i>N`, left child does not exist
						😄. right child = `2i+1`, if `2i+1>N`, right child does not exist
						😄. parent = `floor(i/2)`, if `floor(i/2)<1`, the parent does not exist
			II. Disadvantages:
				🤔. Insertion/deletion of nodes is inconvenient; if the array is too small, it must be reallocated.
				🤔. A skewed binary tree wastes a large amount of array space.

		b. Linked-list implementation (the common general approach)
			I. Advantages:
				🤔. Nodes are easy to insert and delete.
				🤔. Skewed binary trees do not waste the huge amount of array space associated with index-based layouts.
			II. Disadvantages:
				🤔. The parent is not stored directly.
					😄. Each node stores only its left and right child pointers.
				🤔. Pointer fields still exist on leaf nodes and are unused, so some memory is spent on null links.
			III. Implementation:
				🤔. Each node needs:
					😄. data
					😄. left child node (pointer in C)
					😄. right child node (pointer in C)
				🤔. The root pointer represents the whole tree.
		c. Tree serialization (including the array method above, where a complete-tree-like layout is stored in an array and empty positions are represented by `#` or `null`; this is also related to level-order representation). Another common method is empty-symbol preorder serialization (postorder can also be used). Level-order is a typical breadth-first traversal; preorder, inorder, and postorder are depth-first traversals.
			🤔. Since a tree is higher-dimensional structure represented as a one-dimensional sequence during serialization, this is conceptually related to representing higher-dimensional data in a lower-dimensional form. It is worth studying as a mathematical idea.

|#############################################################################################################|
11. Binary Tree Traversal (operations are usually implemented recursively)
	A. Breadth-first (level-order) traversal -----> process siblings first; usually uses a queue explicitly (recursion does not naturally simulate BFS). A queue is appropriate because breadth-first traversal itself follows a first-in, first-out pattern.
		a. Left-to-right (it can also be right-to-left; variations include reverse level-order or zigzag traversal)
		b. Then continue from the upper levels downward.
		c. In simple terms, finish processing one level before moving to the next level.
        d. Relationship between breadth-first traversal and the queue (FIFO), illustrated below:
            I. (root)
                A
               / \\
              B   C
             / \\
            D   E
            II. Using a queue, the traversal is:
                🤔. Start:  [A]
                🤔. Visit A → enqueue B, C →  [B, C]
                🤔. Visit B → enqueue D, E →  [C, D, E]
                🤔. Visit C → (no children) → [D, E]
                🤔. Visit D → (no children) → [E]
                🤔. Visit E → (no children) → []

	B. Depth-first traversal ----> process children first; this naturally involves recursion because each child can be treated as a new root. An iterative implementation usually uses a stack, while recursive DFS uses the call stack implicitly. The basic idea is FILO: the most recently entered branch is completed before returning to older pending branches.
		a. Preorder (DLR) traversal, `preorderTrav()`
			I. Usually implemented recursively.
			II. time complexity: O(n)
            III. A question:
                🤔. In preorder, if it is depth-first, but I immediately process the first element of level 1, then the first element of level 2, then the first element of level 3, is it still depth-first? It seems no longer FIFO/FILO because I process the element as soon as I encounter it. Does a stack still fit?
                    😂. Yes. Here is the more precise explanation: even if you process a node immediately when you encounter it, DFS is still controlled by a path-first structure: you follow one branch downward as far as possible before moving sideways to another branch.
                    😂. To remember where to return after a branch is finished, you still need FILO memory (stack), whether explicit or represented by recursion.
                    😂. Example:
                        ```c
                        preorder(root) {
                            show();
                            preorder(root->left_child);
                            preorder(root->right_child);
                        }
                        ```
                        😂. `show()` executes immediately. There is no special stack entry created just to remember `show()` once it finishes; it runs inside the current frame.
                        😂. Then `preorder(root->left_child)` is called. This is a new function call, so a new frame is pushed onto the call stack.
                        😂. That call must finish completely before `preorder(root->right_child)` can begin.
                        😂. The reason is that the line calling `preorder(root->right_child)` is still pending in the current frame. Therefore the current frame remains on the stack while the left subtree is traversed.

		b. Inorder (LDR) traversal, `inorderTrav()`
			I. Usually implemented recursively.
			II. time complexity: O(n)

		c. Postorder (LRD) traversal, `postorderTrav()`
			I. Usually implemented recursively.
			II. time complexity: O(n)

		d. Given inorder and preorder sequences, reconstruct the binary tree.
			I. The root is necessarily the first element of preorder.
			II. In inorder, the root lies between the left and right subtrees.
			III. Repeat I and II recursively.

		e. Given inorder and postorder sequences, reconstruct the binary tree.
			I. The root is necessarily the last element of postorder.
			II. In inorder, the root lies between the left and right subtrees.
			III. Repeat I and II recursively.

		f. Given preorder and postorder sequences, reconstruct the binary tree.
			I. There may be multiple possible trees, so in general it is not uniquely determined.

		g. **Empty-marker method**: this method is different from the ordinary traversal convention above. Suppose `ABC` is a preorder sequence under a specific empty-marker/full-structure convention. In the empty-marker representation, the structure is explicitly determined by the presence or absence markers; without the empty markers, preorder `ABC` alone does not tell you that B must be A's left child. Under an ordinary preorder listing, B is not necessarily A's left child. With empty markers, however, the tree can be uniquely reconstructed. For example, `ABC##D#E` (where `#` means a null child) can be parsed directly according to the rule and yields one unique tree.

		h. Count total binary-tree nodes, `count()`
			I. Use recursion.

		i. Calculate binary-tree height, `height()`
			I. Use recursion.

		j. Swap the left and right subtree of every binary-tree node, `swap()`
			I. Use recursion.

    C. Uses of traversal. As discussed above, the main purposes of traversal include:
        a. Serialization (turning a tree into a sequence/string)
            I. Preorder serialization (DFS)
            II. Inorder serialization (DFS)
            III. Postorder serialization (DFS)
            IV. Level-order serialization (BFS)
        b. Searching
            I. Finding a value
        c. Calculating
            I. Sum
                🤔. DFS (preorder, inorder, or postorder)
            II. Height
                🤔. DFS (typically postorder)
            III. Min/max/etc.
                🤔. DFS (any order, depending on the computation)
        d. Modifying
            I. Updating a value or deleting nodes
        e. Building output
            I. Printing the nodes in a human-readable order

|#############################################################################################################|
12. Binary Search Tree (BST)
	A. Definition:
		a. All nodes in the left subtree have keys less than the root key.
		b. All nodes in the right subtree have keys greater than the root key.
		c. The left and right subtrees are also binary search trees.

	B. Building (insertion):
		a. Prepare a set of data, for example an array.
		b. Use the first data item as the root.
		c. Insert each following item according to the BST property.
		d. Average time complexity: O(n log n)
			I. Derivation:
				🤔. total time complexity = `log(1) + log(2) + log(3) + ... + log(n) = log(n!)`
				🤔. `log(n!) = Θ(n log n)` asymptotically, by Stirling's approximation.
			e. Worst-case time complexity: O(n^2)
			I. This occurs when insertion produces a skewed tree.

	C. Search
		a. Worst case O(n), when the tree is skewed.
		b. Average case O(log n), under balanced/randomized assumptions.

	D. Insert
		a. Worst case O(n)
		b. Average case O(log n)
		c. Method: simply follow the BST ordering rule.

	E. Delete
		a. Worst case O(n)
		b. Average case O(log n)
		c. Method:
			I. If the node is a leaf (no children):
				🤔. Delete the node directly.
			II. If the node has one child:
				🤔. Replace the node by its child.
			III. If the node has two children:
				🤔. Find the predecessor or successor, replace the node's value with it, then delete that predecessor/successor node. The predecessor is the largest node in the left subtree; the successor is the smallest node in the right subtree.

	F. Sorting. A BST can also be used for sorting (but the data must first be inserted into the BST).
		a. Inorder traversal produces the data in increasing order.
		b. The traversal itself is O(n).
		c. In tree sort, the cost of building the tree must also be counted, so the total is typically O(n log n) on average, but O(n^2) in the worst case for an unbalanced insertion order.

|#############################################################################################################|
13. Converting a Tree or Forest to a Binary Tree
	A. Convert a general tree to a binary tree
		a. Link siblings together.
		b. Keep only the link to the leftmost child and the sibling link; break the other child links.

	B. Convert a forest (many disconnected trees) to a binary tree
		a. Convert each tree into a binary tree.
		b. Link the roots of the binary trees together.
		c. Use the root of the first tree as the new root.

	C. Conceptually, converting a general tree and converting a forest are doing essentially the same thing: the children of each node are represented as a binary structure, and the process is recursively applied up to the root. With a few examples, the pattern becomes clear. Many practical structures resemble general (multiway) trees, and these are often processed using binary-tree representations. This is why the tree-to-binary-tree transformation is important in tree theory.

|#############################################################################################################|
14. Graphs, using the concept of sets is a useful way to understand them
	A. Undirected graph
		a. `G=(V, E)`, where V = vertex, E = edge.
		b. An edge is often written `(v_i, v_j)`, where `v_i` and `v_j` are adjacent vertices.
		c. `(v_i, v_j) == (v_j, v_i)`.

	B. Directed graph
		a. `G=(V, E)`, where V = vertex, E = edge.
		b. An edge is often written `(v_i, v_j)`, where `v_i` and `v_j` are adjacent vertices.
		c. `(v_i, v_j) != (v_j, v_i)`.

	C. Complete graph
		a. Undirected complete graph
			I. Every vertex is connected to every other vertex.
			II. If there are n vertices, there are `n(n-1)/2` edges.
		b. Directed complete graph
			I. Every pair of vertices has two directed edges, one in each direction.
			II. If there are n vertices, there are `n(n-1)` directed edges.

	D. Subgraph
		a. If `V(G') ⊆ V(G)` and `E(G') ⊆ E(G)`, then G' is a subgraph of G.

	E. Path
		a. Definition:
			I. A path from vertex v to v' consists of the sequence/set of edges traversed between them.
		b. Path length:
			I. Number of edges in the path.
		c. Simple path:
			I. Except for the start and end vertices, no other vertex is repeated.
			🤔. If the start and end vertices are the same, it forms a cycle.

	F. Connectedness
	references: (These references discuss connected graphs and connected components.)
	https://web.ntnu.edu.tw/~algo/ConnectedComponent.html
	https://web.ntnu.edu.tw/~algo/ConnectedGraph.html
		a. For undirected graphs:
			I. If there is a path between every pair of vertices, the graph is connected.
			II. If it is not connected, it can be separated into disconnected subgraphs/components.

		b. For directed graphs:
			I. Strongly connected:
				🤔. For every pair of vertices, paths exist in both directions.
			II. Weakly connected:
				🤔. If edge directions are ignored, the underlying graph is connected; equivalently, the graph is connected when directions are disregarded.
				🤔. There may be vertex pairs for which only one directed path exists in one direction.
			III. Disconnected:
				🤔. Not every vertex pair has a directed path, and the graph has multiple disconnected regions/components.

		c. Connected components:
			I. Maximal connected subgraphs. In an undirected graph with several disconnected regions, each region is a connected component.

		d. Articulation point:
			I. Definition:
				🤔. A vertex whose removal increases the number of connected components.

		e. Bridge:
			I. Similar to an articulation point, except it is an edge whose removal increases the number of connected components.

		f. Biconnected:
		reference: https://web.ntnu.edu.tw/~algo/ConnectedComponent.html
			I. For an undirected graph: removing any single vertex (with the usual convention excluding the trivial case) leaves the graph connected; such a graph is called biconnected.
			II. For a directed graph: a strongly biconnected interpretation can be phrased in terms of two internally vertex-disjoint directed paths between relevant vertex pairs. Exact definitions vary by context.

	G. Degree
		a. Undirected graph
			I. The degree of v is the number of incident edges.
		b. Directed graph
			I. Indegree
				🤔. Number of edges pointing into v.
			II. Outdegree
				🤔. Number of edges leaving v.
			III. Formula
				🤔. `|E| = sum(indegree) = sum(outdegree)`.
				🤔. Every directed edge contributes exactly one to an indegree and one to an outdegree, so summing either quantity gives the total number of edges.

	H. How to represent a graph as a data structure (the following two representations can also be used for trees, because a tree is itself a graph. However, a tree with n nodes has only n-1 edges, so a full adjacency structure is often unnecessary. A general graph can have as many as O(n^2) edges.)
		a. Adjacency Matrix
			I. Undirected graph
				🤔. The matrix is n*n. Rows and columns both correspond to vertices; 1 means an edge exists, 0 means it does not.
				🤔. It must be symmetric.
				🤔. Does `(v_i, v_j)` exist?
					😄. Check whether `A[i][j]` is 1.
						😄. Time complexity O(1).
				🤔. Degree of v_i:
					😄. Sum row i (or column i).
						😄. Time complexity O(n).
				🤔. Total number of edges:
					😄. `sum(A[i][j])/2`.
						😄. Time complexity O(n^2).
			II. Directed graph
				🤔. The matrix form is the same as for an undirected graph, but `(v_i, v_j) != (v_j, v_i)`, so the matrix need not be symmetric.
				🤔. Does `(v_i, v_j)` exist?
					😄. Same as above.
				🤔. Degree of v_i:
					😄. Out-degree: sum of row i.
						😄. Time complexity O(n).
					😄. In-degree: sum of column i.
						😄. Time complexity O(n).
				🤔. Total number of edges:
					😄. `sum(A[i][j])`.
						😄. Time complexity O(n^2).

		b. Adjacency List
			I. Undirected graph:
				🤔. It looks somewhat like a linked list, but the meaning is completely different; do not confuse the two.
				🤔. For a graph with n vertices, use a one-dimensional array `A[i]`.
				🤔. `A[i] = v_j | link -> v_k | link -> v_l | link ...`
				🤔. `A[i]` is the adjacency list for vertex i; it stores the vertices adjacent to v_i.
				🤔. The order inside the adjacency list does not matter in principle: `v_j -> v_k` and `v_k -> v_j` are both valid representations of the same set of neighbors.
				🤔. The number of adjacency-list entries is `2|E|`, because each undirected edge is stored twice, once from each endpoint.
				🤔. Does `(v_i, v_j)` exist?
					😄. Search the adjacency list A[i] for v_j.
						😄. Average/typical linear-search cost is proportional to the degree of v_i. If edges are evenly distributed, average degree is about `2|E|/|V|` for an undirected graph.
				🤔. Degree of v_i:
					😄. Count the length of A[i].
						😄. If stored as a linked list with no degree counter, this is O(deg(v_i)); it can be O(1) if a degree counter is maintained.
				🤔. Number of edges in the graph:
					😄. Total adjacency-list entries / 2.
						😄. Time complexity O(|V|+|E|) to traverse all lists, which is O(n^2) in the densest case.
			II. Directed graph:
				🤔. Almost identical in structure, except each directed edge is stored only in the list of its source vertex.
	I. Sparse matrix and dense matrix
		a. Concept: a graph is fundamentally a collection of information about which vertex pairs are connected. Although the abstraction is different, its adjacency matrix is mathematically an n*n matrix whose entries are 0/1 (or weights). This makes matrix concepts useful for studying graph sparsity.
		b. A sparse matrix is one in which most elements are zero and only a small number are nonzero.
			I. "Sparse" is partly descriptive rather than an absolute universal threshold. One can define sparsity as `Sparsity = 1-k/N` for an n*m matrix, where N=n*m and k is the number of nonzero entries. In practice, we often avoid representing sparse data directly with a full n*m matrix, because that wastes work and memory on zeros. Instead, special sparse data structures are used.
                🤔. COO (Coordinate List), the simplest sparse-matrix representation:
                    😂. Example:
                        ```text
                        0 0 5
                        0 0 3
                        2 0 0
                        ```
                    😂. COO representation:
                        😂. `row = [0, 1, 2]`, row indices of nonzeros
                        😂. `col = [2, 2, 0]`, column indices of nonzeros
                        😂. `data = [5, 3, 2]`, nonzero values
                    😂. Each nonzero entry stores three values (row, column, data), so k nonzero entries require about 3k scalar slots. COO saves space when `3k < N` (ignoring metadata/bit-width differences).
                🤔. CSR (Compressed Sparse Row), essentially an improved/compressed version of COO:
                    😂. The basic idea is that storing the row index for every nonzero entry is wasteful because row ordering is already known. Compress that repetition.
                    😂. Example:
                        ```text
                        10  0  0  0  0
                         0 20  0 30  0
                        40  0 50 60  0
                         0  0  0  0 70
                        ```
                    😂. CSR representation. The column and data arrays are analogous to COO; `row_ptr` replaces the repeated row indices with prefix boundaries:
                        😂. `row_ptr = [0, 1, 3, 6, 7]`
                        😂. `col = [0, 1, 3, 0, 2, 3, 4]`
                        😂. `data = [10, 20, 30, 40, 50, 60, 70]`
                    😂. `row_ptr` is basically a compressed representation of the repeated row array `[0,1,1,2,2,2,3]`.
                    😂. `row_ptr` means:
                        😂. `row_ptr[0]=0`, `row_ptr[1]=1`: row 0 occupies indices [0,1) in the nonzero arrays.
                        😂. `row_ptr[1]=1`, `row_ptr[2]=3`: row 1 occupies indices [1,3).
                        😂. `row_ptr[2]=3`, `row_ptr[3]=6`: row 2 occupies indices [3,6).
                        😂. `row_ptr[3]=6`, `row_ptr[4]=7`: row 3 occupies indices [6,7).
                    😂. If a row is empty, the adjacent pointer values are equal. Example:
                        ```text
                        10  0  0  0  0
                         0 20  0 30  0
                         0  0  0  0  0  ---> empty row
                         0  0 40  0 50
                        ```
                    😂. COO:
                        😂. `row = [0, 1, 1, 3, 3]`
                        😂. `col = [0, 1, 3, 2, 4]`
                        😂. `val = [10, 20, 30, 40, 50]`
                    😂. CSR:
                        😂. `row_ptr = [0, 1, 3, 3, 5]` (length = n_rows+1 = 5)
                        😂. `col_ind = [0, 1, 3, 2, 4]`
                        😂. `val = [10, 20, 30, 40, 50]`
                        😂. Explanation:
                            😂. Row 0 → from row_ptr[0]=0 to row_ptr[1]=1 → 1 element (col=0, val=10).
                            😂. Row 1 → from row_ptr[1]=1 to row_ptr[2]=3 → 2 elements (col=1,3; val=20,30).
                            😂. Row 2 → from row_ptr[2]=3 to row_ptr[3]=3 → empty row (no nonzeros), because 3-3 = 0.
                            😂. Row 3 → from row_ptr[3]=3 to row_ptr[4]=5 → 2 elements (col=2,4; val=40,50).
                    😂. So in general CSR is more space-efficient than COO for standard sparse data because it removes the repeated row-index storage.
                🤔. CSC (Compressed Sparse Column) is the column-oriented twin of CSR. The idea is the same, except compression is applied to column boundaries rather than row boundaries.

|#############################################################################################################|
15. Graph Traversal
	A. Each node should have a `visited` flag.
		a. flag=0: not visited yet
		b. flag=1: currently being visited / in progress
		c. flag=2: completely visited

	B. Depth-first traversal ----> visit child/deeper vertices first
		a. Process:
			I. Choose a starting vertex v_i.
			II. Choose an adjacent vertex v_j whose flag=0, and make v_j the new starting point.
			III. Repeat the above step using v_j as the new starting point.
			IV. Stop when there is no next unvisited vertex.

		b. Implementation: because DFS has a recursive structure (a child becomes the new root), an explicit stack can be used to remember the current search frontier.
			I. Choose a starting vertex v_i and push it onto the stack.
			II. While the stack is not empty:
				🤔. Pop the top vertex and treat it as visited. (##### The same vertex may be pushed multiple times if several paths lead to it before it is popped. When popping, if the vertex has already been visited, simply discard it and continue; do not traverse its neighbors again. #####)
				🤔. Push all adjacent vertices with flag=0 onto the stack, then repeat.
				🤔. If all vertices have been visited while the stack is still nonempty, remaining duplicated entries can simply be discarded.
			III. If the stack becomes empty, traversal ends.
			IV. DFS order is not unique unless you explicitly define an order for visiting adjacency lists.

	C. Breadth-first traversal ----> visit siblings/nearby vertices first
		a. Process:
			I. Choose a starting vertex v_i.
			II. Choose adjacent unvisited vertices v_j.
			III. Repeat the process while the starting level remains active; unlike DFS, you finish the current frontier before moving deeper.
			IV. Then repeat for the vertices just visited (their neighbors form the next frontier).
			V. Stop when no unvisited vertex remains reachable.

		b. Implementation: use a queue to store the traversal frontier.
			I. Choose a starting vertex v_i and enqueue it.
			II. While the queue is not empty:
				🤔. Dequeue the front vertex and treat it as visited. (BFS can be implemented so that a vertex is enqueued at most once by marking it when enqueued.)
				🤔. Enqueue all currently unvisited adjacent vertices, marking them as visited when enqueued.
			III. If the queue becomes empty, traversal ends.
			IV. BFS order is not unique unless the order of each adjacency list is explicitly fixed.

	D. Uses:
		a. Determining whether a graph is connected.
		b. Finding connected components.
		c. It is conceptually foundational for topological sorting and shortest-path algorithms.

    E. Finding an Eulerian path (advanced; see the graph theory notes for details)
    F. Finding a Hamiltonian path (advanced; see the graph theory notes for details)

|#############################################################################################################|
16. AOV (Activity On Vertex) ---> essentially an application of a directed graph
	A. Definition:
		a. It is simply a directed graph; it does not have to be connected. Two independent, disconnected tasks can still both appear in a valid topological ordering.
		b. A vertex represents an activity/task.
		c. An edge represents a precedence/dependency relationship between activities.

	B. Topological order (topological sorting)
		a. Definition:
			I. The AOV graph must contain no directed cycle.
			II. Choose a starting vertex v_s and ending vertex v_e only as conceptual endpoints if desired; a formal topological ordering does not require a single source/sink.
			III. For every directed edge `v_i -> v_j`, v_i must appear before v_j in the ordering.

		b. Kahn's algorithm (the intuition is: repeatedly find vertices with no remaining prerequisites, because that means all predecessor tasks are already completed/removed):
			I. Find a vertex with indegree=0.
			II. Output the vertex and remove all of its outgoing edges.
			III. Repeat I-II until all vertices are output or the remaining vertices all have positive indegree.
			IV. If not all vertices are output, there is no topological ordering.
				🤔. Important: If an AOV network contains a cycle, there is no topological order, because the cycle creates a circular dependency where no task can legally be first.
				🤔. If an AOV network is acyclic, at least one topological ordering exists; it is not necessarily unique.

		c. Classical real-world example:
			I. A university course-registration system: a course may require several prerequisite courses, and those prerequisite courses must be completed before the dependent course can be taken.

	C. Data-structure representation:
		a. Adjacency list is usually more convenient than an adjacency matrix here.
			I. Augment the adjacency list with indegree counts. You can think of `A[0][i]` as the indegree of v_i and `A[1][i]` as the adjacency list of v_i.
				🤔. `A[0][i] = count` (indegree of v_i)
				🤔. `A[1][i] = adjacency list of v_i`

			II. How to delete the outgoing edges of v_i: if `A[1][i] = v1|link -> v2|link -> v3|link`, then decrement the indegree counters of v1, v2, and v3:
				🤔. `A[0][1]--`, `A[0][2]--`, `A[0][3]--`

|#############################################################################################################|
17. AOE (Activity On Edge; a common weighted-path graph application) ---> another application of a directed graph, with weights on edges
	A. Definition:
		a. It is simply a directed graph plus edge weights.
		b. A vertex represents an event.
		c. An edge represents an activity/task.
			I. The edge has a weight, usually representing the time/cost required for the activity.

	B. Application:
		a. Find the minimum total time required to complete the whole project, i.e. find the critical path. This relies on the DAG/topological-order structure; without acyclicity, the classic project-network interpretation breaks down.
			I. Find the longest weighted path from the start event to the end event (the critical path).
				🤔. Why the longest path? This looks counterintuitive at first. See:
					https://zhuanlan.zhihu.com/p/340950042
				😄. The activities on different paths can proceed concurrently, so the path taking the longest time determines when the entire project can finish.

		b. How to shorten project completion time:
			I. Identify the activities/edges that belong to all critical paths and, where possible, shorten their durations.

	E. Data structures:
		a. Adjacency matrix:
			I. Similar to a normal adjacency matrix, except a present edge is represented by its weight rather than merely 1.
		b. Linked list / adjacency list:
			II. Similar to a normal adjacency list, except each edge/node stores the edge weight as well.

|#############################################################################################################|
18. Extended Binary Tree ---> used in Huffman's tree
	A. Definition
		a. We usually use linked nodes to represent a binary tree, but the child pointers of leaf nodes are unused, which looks wasteful.
		b. An extended binary tree attaches special objects/nodes to the null child links of leaves, both to make the structure explicit and to support certain algorithms.
			I. A node attached to a leaf's null link is called an "external node" or sometimes a "failure node" (for example, in search, reaching such a node means the requested data was not found).
			II. The original tree nodes are called "internal nodes."
			III. By the structure of a binary tree, `number(external nodes) = number(internal nodes) + 1`.

	B. Common concepts:
		a. Let `I = sum_i(path_len(root -> v_i))`, where v_i is an internal node.
		b. Let `E = sum_i(path_len(root -> v_x))`, where v_x is an external node.
		c. Then `E = I + 2n`, where n is the number of internal nodes.
		d. For fixed n, E and I have a linear relationship.
		e. The more balanced the tree is, the smaller I and E tend to be (for the same unweighted structure).
		f. But when external nodes have different weights, the previous intuition does not necessarily hold. A Huffman tree does **not** have to be balanced.

	C. Weighted External Path Length (W.E.P.L.). This means each external path length is multiplied by its own weight.
		a. Definition:
			I. `W.E.P.L. = sum_x(path_len(root -> v_x) * weight_x)`

		b. Properties:
			I. Without weights, a more balanced tree tends to have a smaller total path length (and therefore a smaller average path length) and is generally better for uniform-cost search.
			II. After assigning weights, this is no longer necessarily true.

	D. Given n weights (hence n external nodes), how do we minimize W.E.P.L. and construct the corresponding tree? This is the Huffman tree.
		a. Huffman algorithm:
			I. Let W be the set of given weights.
			II. Treat every weight in W as an external node.
			III. Remove the two smallest weights, add them to obtain `w_i + w_j`.
			IV. Make that sum the internal parent of the two nodes.
			V. Put the combined weight back into W.
			VI. Repeat until W contains only one weight, which becomes the root.

		b. Intuition behind Huffman's algorithm:
			🤔. Larger weights should be closer to the root.
			🤔. Starting by merging the smallest weights pushes the larger weights upward, producing a smaller weighted external path length.

		c. Time complexity:
			🤔. Building the Huffman tree: O(N log N) with a suitable priority queue/heap.
			🤔. Encoding/decoding complexity is proportional to the number of bits processed; for a given encoded message, decoding is O(total encoded bits), and encoding is similarly linear in the number of input symbols plus code-generation overhead.

		d. Classic application: optimal prefix coding.
			🤔. Suppose an English message uses 26 letters, and the frequency of each letter is known. We want to assign binary codes (0 and 1) to the 26 letters so that the message uses as few bits as possible.
				😄. The letter frequencies are the weights in the Huffman problem.
				😄. Going left from the Huffman root can represent 0 and going right can represent 1.
				😄. This minimizes the average number of bits per symbol among binary prefix codes by minimizing W.E.P.L. (and is closely connected to information-theoretic entropy).
				😄. More frequent letters receive shorter codes, i.e. shorter root-to-leaf paths.

			e. Program implementation:
			reference:
			https://www.programiz.com/dsa/huffman-coding
				🤔. Because we repeatedly need to extract the smallest weight, a priority queue is useful, usually implemented with a min-heap.
				🤔. One implementation approach is:
					😄. Build an array-based min-heap whose elements are Huffman-tree nodes.
					😄. Each heap element stores a pointer/reference to a Huffman tree node. The Huffman tree itself is pointer-linked, and its root pointer represents the whole tree.
					😄. Repeatedly extract the two smallest heap elements, merge them into a new Huffman-tree node, and insert the combined node back into the heap. The final extracted node is the Huffman root.

|#############################################################################################################|
18. Self-balancing binary search trees ----> an extension of the binary search tree
	reference:
	https://zh.wikipedia.org/zh-tw/%E5%B9%B3%E8%A1%A1%E6%A8%B9

	A. Goal:
		a. We know that the more balanced a binary search tree is, the better the average search efficiency; O(log n) is asymptotically optimal for comparison-based search in a balanced BST.
		b. However, when constructing a BST, the insertion order may produce an unbalanced tree. We therefore need methods for maintaining balance.

	B. Common methods (algorithms): most use rotation. Each insertion still requires O(log n) search/update work plus a constant amount of local rebalancing in common balanced trees.
		a. AVL tree (AVL is an abbreviation of the inventors' names)
			I. Definition:
				🤔. A binary search tree that is height-balanced.
				🤔. Strict balance definition:
					I. `|height(Lchild(root))-height(Rchild(root))| <= 1`.
					😄. `height(Lchild(root))` is the height of the left subtree.
					😄. `height(Rchild(root))` is the height of the right subtree.
				🤔. Both left and right subtrees are also AVL trees.

			II. Balance factor (BF):
				🤔. `BF = h_l - h_r`.
				🤔. In an AVL tree, BF can only be -1, 0, or +1.

			III. Four imbalance cases during insertion:
				🤔. LL imbalance:
					😄. `height(Lchild(root))-height(Rchild(root)) > 1`
					😄. The insertion path is heavier on the left-left side.
					😄. In plain language: left subtree is too tall, and the new weight is on the left child's left side.
				🤔. LR imbalance:
					😄. `height(Lchild(root))-height(Rchild(root)) > 1`
					😄. The insertion path is heavier on the left-right side.
				🤔. RL imbalance:
					😄. `height(Lchild(root))-height(Rchild(root)) < -1`
					😄. The insertion path is heavier on the right-left side.
				🤔. RR imbalance:
					😄. `height(Lchild(root))-height(Rchild(root)) < -1`
					😄. The insertion path is heavier on the right-right side.

			IV. Quick rule for AVL rebalancing:
				🤔. You do not have to memorize every case independently. Remember the structural result: among the three relevant keys, the smallest becomes the left child, the largest becomes the right child, and the middle becomes the root.
				🤔. If the newly inserted key is not among those three relevant keys at the unbalanced local structure, continue following the insertion path until you reach the correct local configuration.
				🤔. The rotation restores balance in the affected local subtree. For insertion, once the first unbalanced ancestor is repaired, the subtree height is restored to its previous height, so higher ancestors generally do not need further rotations.

			V. Rotation details:
				reference: the following is a clear reference:
				https://simpletechtalks.com/avl-tree-self-balancing-rotations-right-left-rotation-explained/
				🤔. RL imbalance: first rotate the lower/right subtree in the opposite direction (right rotation on the right child), then perform a left rotation on the higher unbalanced node. LR is the mirror image. RR requires one left rotation; LL requires one right rotation.

			VI. Removing a node:
				reference: https://www.cs.emory.edu/~cheung/Courses/253/Syllabus/Trees/AVL-delete.html
				🤔. Deletion can be handled by performing the normal BST deletion and then rebalancing while moving back up toward the root. There can be O(log n) rotations, each O(1), so the total deletion complexity is O(log n).

			VII. Height/minimum-node theorem:
				🤔. Given an AVL tree of height h, what is the minimum number of nodes?
					😄. Answer: `S(h) = S(h-1) + S(h-2) + 1`.
					😄. Reason: if the AVL tree has height h, to minimize the number of nodes its two subtrees must have heights h-1 and h-2. Therefore add the minimum node counts of those two subtrees, plus the root itself.
					😄. With `S(1)=1` and `S(2)=2`, all values follow.
					😄. Equivalent closed form: `S(h) = F(h+2) - 1`, where F(n) is the nth Fibonacci number under the corresponding convention.

				🤔. Example 1:
					😄. An AVL tree of height 3 has at least `Fibonacci(3+2)-1 = Fibonacci(5)-1 = 4` nodes.
					😄. Maximum nodes for height 3: make it as full as possible, giving `2^3-1 = 7` nodes under the level-count convention.

				🤔. Example 2:
					😄. An AVL tree has 15 nodes. What is its maximum possible height?
						😄. Find the largest h satisfying `Fibonacci(h+2)-1 <= 15`; this gives h = 5 under the convention used here.
					😄. What is the minimum possible height for 15 nodes?
						😄. Make it as full as possible; the level-count height is `floor(log2(n+1)) = 4`.

		b. Treap

		c. Splay tree

		d. Red-black tree
		references:
			https://tigercosmos.xyz/post/2019/11/algorithm/red-black-tree/
			https://www.youtube.com/watch?v=UaLIHuR1t8Q
			I. Definition:
				🤔. The root is black.
				🤔. No root-to-leaf path contains two consecutive red nodes.
				🤔. From the root to the leaves, every path has the same number of black nodes (black-height property).
			II. Insertion:
				🤔. If the tree is empty, insert a black node as the root.
				🤔. Otherwise, insert the new node as red.
					😄. If the parent is black, the insertion is valid.
					😄. If the parent is red, the red-red property is violated and rebalancing is required.
						😄. If the parent's sibling (the uncle) is red:
							😄. Recolor the red parent to black to remove the red-red violation.
							😄. Recolor the red uncle to black as well so the two sides gain the same black count.
							😄. Recolor the grandparent red and continue fixing upward if this creates another red-red violation.
						😄. If the parent's sibling is black or null:
							😄. Rotation and recoloring are required. The exact single- vs double-rotation pattern depends on whether the configuration is LL, LR, RL, or RR.
							😄. A useful intuition is still "small left, large right, middle at the root," after which recoloring restores the red-black properties.

		e. Weighted balanced tree

|#############################################################################################################|
19. M-way search tree (an extension of the binary search tree)   *****---- degree > 2 trees, possibly less emphasized in some exams *****
	A. Definition:
		a. Each node can contain multiple keys, but the number of keys is at most `(m-1)` and at least 1.
		b. Each key divides the value range and corresponds to child subtrees between/around the keys.
		c. Therefore each node can have up to m children, and if it has at least one key it has at least two child positions in the internal-node case.
		d. Keys inside a node are sorted in increasing order.
		e. Each child subtree is also an m-way search tree.
		f. The keys in each child subtree fall into the range defined by the parent keys.

	B. Purpose:
		a. When the data volume is very large, a binary search tree can become too tall. Increasing the branching factor reduces the height.
			I. External search
				🤔. Processing data stored outside main memory, such as on disk or other external storage.
			II. Internal search
				🤔. Processing data kept in main memory, where memory capacity and access behavior are constraints.

|#############################################################################################################|
20. B-tree
	A. Definition:
		a. A B-tree is a balanced m-way search tree with additional occupancy constraints.
		b. Except for the root (and depending on convention, failure/null children), non-root nodes have degree between `ceil(m/2)` and m, with equivalent key-count constraints. **This is the key property to remember.**
		c. All leaves/failure nodes occur at the same level.

	B. Simplest B-tree: 2-3 tree
		a. This is the m=3 case. Under the standard occupancy rules, internal nodes can have 2 or 3 children (and therefore 1 or 2 keys).
		b. An m=2 B-tree degenerates into the minimal binary-search-tree-like case, though terminology varies by textbook.

	C. Operations
	reference: a useful example of insertion/deletion is here:
	https://www.tutorialspoint.com/data_structures_algorithms/b_trees.htm
		a. Insert:
			I. A node may exceed its maximum key capacity (overflow), requiring a split.
				🤔. Split method:
					😄. Promote an appropriate middle key to the parent, and split the remaining keys into left and right nodes.
					😄. This preserves the B-tree occupancy and ordering constraints.

		b. Delete:
			I. First find the key x to delete.
			II. During deletion, a node may fall below its minimum key count (underflow), requiring redistribution/rotation or merging/combination.
				🤔. If x is in a leaf:
					😄. Remove x and check for underflow.
					😄. If there is underflow, try borrowing/redistribution (rotation) from a sibling.
					😄. If borrowing is impossible, merge (combine) with a sibling using a separator key from the parent.
					😄. After merging, the parent may underflow, so the repair can propagate upward.
				🤔. If x is in an internal node:
					😄. Replace x with the smallest key in the right subtree (successor), or with the largest key in the left subtree (predecessor).
					😄. Then delete that replacement key from its original location.
					😄. If neither side can support the deletion without underflow, merge/redistribute as required by the standard B-tree deletion algorithm.

	D. Applications
		a. Database indexes
			I. Database indexes are commonly implemented using B-tree-family structures.
				🤔. Principle: without an index, searching may require a linear scan, O(n). With an appropriate B-tree/B+tree index, search can be reduced to logarithmic tree height, with the practical advantage that each node may contain many keys and one node access can examine many keys at once. Indexes also add maintenance cost to insert/update/delete operations because the index structure must remain valid.

		b. Efficiency compared with a binary tree:
			I. A binary tree has branching factor 2, while a B-tree may have branching factor m, so the height is roughly logarithmic in the base corresponding to the branching factor. Asymptotically, `log_m(n)` and `log_2(n)` differ only by a constant factor, so they have the same Big-O order. In large external-storage systems, however, the smaller tree height is extremely valuable because each node access may require a slow disk/page I/O; reducing the number of levels reduces the number of I/Os.
				references:
				https://blog.csdn.net/weixin_44685869/article/details/106083874
				https://zhuanlan.zhihu.com/p/257842997

		E. B+ tree (in some respects, an improved variant of the B-tree)
		reference:
		https://www.zhihu.com/question/57466414
			a. Differences from a B-tree:
			I. In a B+ tree, internal nodes are used mainly as index/search guides and do not store the full data records. Because internal nodes contain less payload, they can often hold more keys and therefore have a larger fan-out. For the same number of keys, this can reduce tree height and the number of node accesses required for lookup.
			II. In addition, leaf nodes are typically linked together, making ordered traversal and range queries convenient. This is another major practical advantage.
