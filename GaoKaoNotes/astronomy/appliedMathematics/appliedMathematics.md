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
A^{-1} AAx = Ax
```

Then we can have this 
``` math
A^{-1}(Ax) = Ix
```

Well, naturally, funtions have exactly the same math structure. Suppose we have this below
``` math
f^{-1}(f(f(x))) = f(x)
```
Then we can have 
``` math
f^{-1}(f(x)) = id(x) = x
```

## Determinants
But of course, not all matrix A can have $A^{-1}$. As we know, that a matrix is a linear transformation(any matrix is automatically a linear transformation), the scaling factor of transformation A is $det(A)$. More precisely, how that transformation scales area/volume/higher dimention_scale.

If we have $det(A)=0$. This mean A's output space has lower dimension than the input space. It would let vectors lose one dimensional information. For example volume becomes area, or area becomes a line. And the lose information(becomes 0) is not possible searching back. So apparently $det(A)=0$ implies that A has no $A^{-1}$. It's easy to prove that(although, i am not gonna talk about the details.
``` math
det(A) \neq 0 -> A^{-1} exists
```

There're other some common properties:
- det(AB) = det(A)det(B)
- det($A^{-1}$) = 1/det(A)
- det(I) = 1
- Effect of row operations

## Eigenvalues & Eigenvectors
``` math
Av = \lambda v
```
Generally, transformation A appling on a vector changes both its direction and magnitude. But some vectors $v$ are operated without changing direction but only by magnitude $\lambda$. Intuitively, those vectors are the axes of scaling/operation. We call them **eigenvectors**, the corresponding $\lambda$ is eigenvalue.

From that definition, we easily get this below:
``` math
Av-\lambda v = 0
```
and then get
``` math
Av-\lambda I v = 0
```
and then
``` math
(A-\lambda I) v = 0
```
If det(X) != 0, then Xv=0 is not possible to happens for v!=0. So $det(A-\lambda I)$ must be 0 if v!=0.

The reason for this is that if det(X) != 0, then we know that X is invertible, so can have
``` math
X^{-1}X = I
```

``` math
Xv = 0
```
can be written as 

``` math
X^{-1}(Xv) = X^{-1}0
```

Therefore,
``` math
v = 0
```

But we assume $v\neq 0$. Contradiction. So
``` math
det(A-\lambda I) = 0
```
We call this characteristic equation of A.

## Eigen Decomposition
It is basically saying that A can be written as 
``` math
A = PMP^{-1}
``` 
for P is eigenvectors, and M is eigenvalues matrix. And so it can also be written as 
``` math
A=\lambda_1 v_1 w_1^T+\lambda_2 v_2 w_2^T+\cdots+\lambda_n v_n w_n^T
```
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
