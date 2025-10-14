# Maxwell's equations
Generally, electrodynamics including four major laws which are **electrostatics(靜電)**, **magnetostatics(靜磁)**, **electrodynamics(動電生磁)**, **magnetodynamics(動磁生電)** 
```math
\begin{aligned}
\nabla \cdot \mathbf{E} &= \frac{\rho}{\varepsilon_0} &&\text{(Gauss's Law for Electricity)} \\[6pt]
\nabla \cdot \mathbf{B} &= 0 &&\text{(Gauss's Law for Magnetism)} \\[6pt]
\nabla \times \mathbf{E} &= -\,\frac{\partial \mathbf{B}}{\partial t} &&\text{(Faraday's Law of Induction)} \\[6pt]
\nabla \times \mathbf{B} &= \mu_0 \mathbf{J} + \mu_0 \varepsilon_0 \frac{\partial \mathbf{E}}{\partial t} &&\text{(Ampère–Maxwell Law)}
\end{aligned}
```

**Integral Form**

```math
\begin{aligned}
\oint \mathbf{E} \cdot d\mathbf{A} &= \frac{Q_{\text{enclosed}}}{\varepsilon_0} &&\text{(Gauss's Law for Electricity)} \\[6pt]
\oint \mathbf{B} \cdot d\mathbf{A} &= 0 &&\text{(Gauss's Law for Magnetism)} \\[6pt]
\oint \mathbf{E} \cdot d\mathbf{l} &= -\,\frac{d}{dt} \int \mathbf{B} \cdot d\mathbf{A} &&\text{(Faraday's Law of Induction)} \\[6pt]
\oint \mathbf{B} \cdot d\mathbf{l} &= \mu_0 I_{\text{enclosed}} + \mu_0 \varepsilon_0 \frac{d}{dt} \int \mathbf{E} \cdot d\mathbf{A} &&\text{(Ampère–Maxwell Law)}
\end{aligned}
```

## Electrostatics
Gauss's law for electricity describe the integral of enclosed surface of electric flux would. Or in derivative form, divergence of electric filed would be proportional to the charge density. It's very common to compare Coulomb's law of point electric charge. And you can easily check if Gauss's law is correct by integraling Coulomb's law through some enclused surface. However, there's one thing you need to know which is that Coulomb's law is not equavalent to Gauss's law. Because, in fact, Coulomb's law is not the only field that can satisify Gauss's law. Gauss's law only constrains the divergence of the electric field
```math
\nabla \cdot \mathbf{E} = \frac{\rho}{\varepsilon_0}
```
But it says nothing about curl of it 
```math
\nabla \times \mathbf{E}
```
Different vector fields with the same divergence could satisfy Gauss’s law but have different forms(Gauss's law is more general than Coulomb's law).

In electrostatics, if we also assume the conservative condition:
```math
\nabla \times \mathbf{E} = 0
```
And E vanishes at infinity which is the boundary condition.

Gauss's law, conservative condition and boundary condition, these three conditions uniquely lead to Coulomb's law (inverse-square-rule).

You can solve the differential equations yourself like below and check if the conditions really lead to Coulomb's law 
```math
\begin{cases}
\nabla \cdot \mathbf{E} = \dfrac{\rho}{\varepsilon_0}, & \text{(Gauss's law)} \\[2mm]
\nabla \times \mathbf{E} = 0, & \text{(Electrostatic, conservative field)}
\end{cases}
```
In 3D, the general solution to this Poisson equation is:
```math
\phi(\mathbf{r}) = \frac{C}{6} r^2 + \frac{A}{r} + B
```

Therefore, the electric field is:
```math
\mathbf{E}(\mathbf{r}) = -\nabla \phi(\mathbf{r}) = -\left( \frac{C}{3} \mathbf{r} - \frac{A}{r^3} \mathbf{r} \right)
= -\frac{C}{3} \mathbf{r} + \frac{A}{r^3} \mathbf{r}
```
This shows that the field is a superposition of:
 - a linear field: $\( -\frac{C}{3} \mathbf{r} \)$
 - an inverse square field: $\( \frac{A}{r^2} \hat{\mathbf{r}} \)$

If you take the third condition into the solution now, which let the E goes to 0 when r goes infinity, you get that C must be 0. 

This is directly saying that 
```math
\nabla \cdot \mathbf{E} = 0
```
But wait! isn't this result contradicts the first initial condition we took which is Gauss's law says?
```math
\nabla \cdot \mathbf{E} = \dfrac{\rho}{\varepsilon_0}
```

The key point is that 
```math
\nabla \cdot \mathbf{E} = 0
```
says divergence of E is 0 everywhere EXCEPT for the origin position. 

The reason is that $\( \frac{A}{r^2} \hat{\mathbf{r}} \)$ is undefine when r goes 0. [referece](https://www.zhihu.com/question/585245995?utm_division=hot_list_page) The math is telling you this. And from Gauss's law, there is another important thing you should know about which is that $\rho$ is the density of charge which means it doesn't have to be uniformly distributed, it is totally okay to concentrate at some point! The math force all the charge in the origin(because there's only the place can have density of charge according to the result of the solution), so a more complete conclusion should like this:
```math
\nabla \cdot \mathbf{E} = \frac{q}{\varepsilon_0} \delta(\mathbf{r})
```
So there's no contradiction here, the result saying that divergence is 0 everywhere except the one point that is undefine, and that point must have all the charge.

The result using the famous Dirac delta function. Dirac delta function is not a function stricly by definition according to math which claims that a function can only deal with finite values. However, delta function is 0 everywhere but infinity at a point which is violate the definition. If we directly use delta function, something wrong would happen because we can't deal with infinity. So to avoid this, the integral definition of delta functions comes and saying:
```math
\int_{-\infty}^{\infty} f(x) \delta(x) \, dx = f(0)
```

## Magnetostatics
Magnetostatics and Electrostatics are math-structurally the same. You should get the structurally same result. The only difference is that there's no magnetic monopole so we don't have magnetic charge.

## Electrodynamics
Originally from the Ampere's circuital law:
```math
\oint_{\mathcal{C}} \mathbf{B} \cdot d\mathbf{l} = \mu_0 I_{\text{enc}}
```
or
```math
\nabla \times \mathbf{B} = \mu_0 \mathbf{J}
```
