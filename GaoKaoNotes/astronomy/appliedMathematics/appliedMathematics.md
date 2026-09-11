# Linear Algebra
## Matrices
### Addition(too easy)
### Multiplication
Multiplication is bit different from the familiar arithmetic. Multiplication is generally not commutative which means AB!=BA. And also, there is no inverse for every matrix. Some matrices have inverses, some don't.

The properties below are independent of each others in abstract level for mulplication operation, and matrices doesn't have any.
- commutative multiplication
- nonzero(non-identity) elements must have inverses(some matrices do, some don't)
There is another property we call it **identity** which is an element that leaves another element unchanged under an operation.

For addition:
``` math
a + 0 = a
```
For multiplication:
``` math
a * 1 = a
```
So 1 is the multiplicative identity. At this point, you can see, when we talk about **zero element**, it generally means the additive identity.

Obivously, in Matrix theory, the addition identity is:
``` math
0 =
\begin{pmatrix}
0 & 0 \\
0 & 0
\end{pmatrix}
\qquad\text{(additive identity)}
```
And for multiplication identity is:
``` math
I =
\begin{pmatrix}
1 & 0 \\
0 & 1
\end{pmatrix}
\qquad\text{(multiplicative identity)}
```

### Matrix-vector multiplication
The calculation is very easy, but the meaning of this multiplication can be very deep. First, this multiplication can be thought of as a transformation of the vector. And the transformation is generally not commutative: applying transformation A and then B is generally different from applying B and then A. Naturally, because of the properties of matrics, a matrix operating on a vector can be thought as a function operating on a variable. It's naturally and structurally perfect fit. Moreover, if you take a good look of how a function works, you'll find that it's not commutative, either.
``` math
f(g(x)) \neq g(f(x)) generally
```

### Matrix power
Matrix power means applying the same transformation n times to vector x. 
``` math
A^2 x = AAx
```

If we have this below:

``` math
A^(-1) AAx = Ax
```

Then we can have this 
``` math
A^(-1)(Ax) = Ix
```

Well, naturally, funtions have exactly the same math structure. Suppose we have this below
``` math
f^(-1)(f(f(x))) = f(x)
```
Then we can have 
``` math
f^(-1)(f(x)) = id(x) = x
```

## Determinants
But of course, not all matrix A can have $A^(-1)$ 

## Eigenvalues & Eigenvectors
## Basis
## Orthogonality
## Matrix equations
## Diagonalization
## Matrix decomposition (e.g. LU)

# Ordinary Differential Equations
- ODEs
- Dynamical systems
- Phase portraits
- Nonlinear systems
- Chaos

# Vector Calculus & Fourier Analysis
   - Gradient
   - Divergence
   - Curl
   - Laplacian
   - Line / surface / volume integrals
   - Gauss's theorem
   - Stokes' theorem
   - Fourier series
   - Fourier transform

# Partial Differential Equations
   - Elliptic equations
   - Parabolic equations
   - Hyperbolic equations

# Other Mathematical Methods
   - Integral transforms
   - Calculus of variations
   - Special functions
