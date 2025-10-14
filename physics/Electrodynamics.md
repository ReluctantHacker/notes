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
Different vector fields with the same divergence could satisfy Gauss’s law but have different forms.

In electrostatics, would also assume the conservative condition:
```math
\nabla \times \mathbf{E} = 0
```
And E vanishes at infinity.

These three conditions uniquely lead to Coulomb's law (inverse-rule).

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


which means the field is conservative, and that E vanishes at infinity. This curl additional condition(conservative condition) plus Gauss's law uniquely lead to Coulomb’s law (inverse-square). Without that curl condition, Gauss’s law alone would allow infinitely many possible E fields.


