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

If we have $det(A)=0$. This mean A's output space has lower dimension than the input space. It would let vectors lose one dimensional information. For example volume becomes area, or area becomes a line. And the lose information(becomes 0) is not possible searching back. So apparently $det(A)=0$ implies that A has no $A^{-1}$. It's easy to prove that(although, i am not gonna talk about the details).
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
A = PDP^{-1}
``` 
for P is eigenvectors, and D is eigenvalues matrix which is a **diagonal matrix**. It can be written as 
``` math
A=\lambda_1 v_1 w_1^T+\lambda_2 v_2 w_2^T+\cdots+\lambda_n v_n w_n^T
```

where the $w_i^T$'s are the rows of $P^{-1}$.

Well, sometimes we also writen it as 
```  math
D=P^{-1}AP
```

So what are we doing now? Suppose we have a linear transformation X. By taking normal basis as basis, then X can be represented as A. If we use eigen vectors as basis, then it can be represented as D! And because D is diagonal!

But why do we even need this? For practical reasons, why have this:
1. Simplification of calculation
``` math
A^k = PD^kP^{-1}
```
and 
``` math
D^k = diag(\lambda_1^k, ..., \lambda_n^k)
```
So it's easier to do $A^k$
2. Decoupling
- For solving linear function:
``` math
Ax = b
```
For knowing that $A=PDP^{-1}$, we can have $x=Py$, $c=P^{-1}b$, then:
``` math
Dy=c
```
Which is way more easier to solve than $Ax=b$. But of course, there are costs for calulation of $x=Py$, $c=P^{-1}b$. The efficiency advantage isn't that apparent in this case.

- For solving linear differential equations:
For linear differential system:
``` math
x'(t) = Ax(t)
```
the solution is:
``` math
x(t) = e^{At}x(0)
```
for 
``` math
e^{At} = I + At + \dfrac{A^2 t^2}{2!} + \dfrac{A^3 t^3}{3!} + ...
```
which is not easy to calculate, especially for $A^k$. In this case, if we apply decomposition:
``` math
x(t) = P e^{Dt} P^{-1} x(0)
```
for 
``` math
e^{Dt} = diag(e^{\lambda_1 t}, e^{\lambda_2 t}, ..., e^{\lambda_n t})
```
This makes thing simpler.

3. For Physics concept
Variable transformation
``` math
x_1' = a_{11}x_1 + a_{12}x_2
```
``` math
x_2' = a_{21}x_1 + a_{22}x_2
```
By using eigen vectors as basis:
``` math
y_1' = \lambda_1 y_1
```
``` math
y_2' = \lambda_2 y_2
```

More naturally, the whole thing works in vector analysis. Suppose we have vector u by basic basis as below
``` math
u = u_1 e_1 + u_2 e_2
```
By doing some linear transformation A = [[a1, a2], [a3, a4]]. We get
``` math
Au = u_1 A e_1 + u_2 A e_2
```
And so
``` math
A e_1 = a_1 e_1 + a_3 e_2
```
``` math
A e_2 = a_2 e_1 + a_4 e_2
```
Each output basis component is a weighted sum of the input basis components. We call this **coupling**. 

But when we expand u in eigen vectors
``` math
u = c_1 v_1 + c_2 v_2
```
we get
``` math
Au = c_1 A v_1 + c_2 A v_2
```
And so
``` math
A v_1 = \lambda_1 v_1
```
``` math
A v_2 = \lambda_2 v_2
```
Without coupling, we call this decoupling.

But hold a second here...What are we even doing now? Why do we need eigen values and eigen vectors?

The reason is abstract but profound. Let me explain here. Why do so many physics problems use eigen idea? It's because the problems themself is naturally eigen problem. For example, wave equation, heat equation, schrodinger equation...and a lot others. They are all naturally eigen problems. 

Morever, because we define something naturally can be treated in eigen problem form. For example, waves. We define a basic wave which has definite $\omega$ and $k$, the plane waves(for 3 dimensions). The reason we use those basic waves to describe world, is also because they have certain $\omega$ and $k$. And naturally, those basic waves(plane waves) naturally rise wave equation for them.

The wave operator in wave equation is actually just matrix A in the matrix discussion we've built. The wave operator naturally is bond with basic plane waves.

So when I say I want to use wave equation or heat equation, I am actually saying that I want to use basic plane waves to analyize the system. Just like saying I want to use A to analysize the system, means naturally want to use eigen vectors v to analysis system.

This means a physics equation(or law) means a transformation A, and it's corresponding eigen vectors are the basis we naturally want to use(like plane waves).

## Basis
There are two very important ideas. For u'=Au
- If you say A is a linear transformation, then u' is the new vector under the original basis. We call this **Active Transformation**.
- If you say A is a change of basis(coordinate transformation), then u' is the same vector under the new basis. We call this **Passive Transformation**.

In a passive transformation, the new basis vectors are actually the row vectors of matrix A. For example, A=[[a1, a2], [a3, a4]]. Then [a1, a2] and [a3, a4] are the new basis vectors.

For more clearly, there are two important properties of the definition of a basis:
- spanning: The basis vectors can generate every vector in the space through linear combinations.
``` math
span\{v_1,...,v_n\} = V
```
- Linear independence: The basis vectors are independent of each other. Which means the basis vectors are not redundant.
``` math
c_1 v_1 + ... + c_n v_n = 0
```
only when
``` math
c_1=...=c_n=0
```

## Orthogonality
### Dot product
Geometrically
``` math
u \dot v = u_1 v_1 + u_2 v_2 + ... + u_n v_n
```
and also we can have
``` math
u \cdot v = |u||v| cos \theta
```

Strictly, we can have...
### Orthogonal complements
### Orthogonal bases
### Projection
### Gram-Schmidt process
### Least squares

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
