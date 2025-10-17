# Maxwell's equations
Generally, electrodynamics including four major laws which are **electrostatics(À¹q)**, **magnetostatics(ÀºÏ**, **electrodynamics(°ʹq¥ͺÏ**, **magnetodynamics(°ʺϥ͹q)** 
```math
\begin{aligned}
\nabla \cdot \mathbf{E} &= \frac{\rho}{\varepsilon_0} &&\text{(Gauss's Law for Electricity)} \\[6pt]
\nabla \cdot \mathbf{B} &= 0 &&\text{(Gauss's Law for Magnetism)} \\[6pt]
\nabla \times \mathbf{E} &= -\,\frac{\partial \mathbf{B}}{\partial t} &&\text{(Faraday's Law of Induction)} \\[6pt]
\nabla \times \mathbf{B} &= \mu_0 \mathbf{J} + \mu_0 \varepsilon_0 \frac{\partial \mathbf{E}}{\partial t} &&\text{(Ampere¡VMaxwell Law)}
\end{aligned}
```

**Integral Form**

```math
\begin{aligned}
\oint \mathbf{E} \cdot d\mathbf{A} &= \frac{Q_{\text{enclosed}}}{\varepsilon_0} &&\text{(Gauss's Law for Electricity)} \\[6pt]
\oint \mathbf{B} \cdot d\mathbf{A} &= 0 &&\text{(Gauss's Law for Magnetism)} \\[6pt]
\oint \mathbf{E} \cdot d\mathbf{l} &= -\,\frac{d}{dt} \int \mathbf{B} \cdot d\mathbf{A} &&\text{(Faraday's Law of Induction)} \\[6pt]
\oint \mathbf{B} \cdot d\mathbf{l} &= \mu_0 I_{\text{enclosed}} + \mu_0 \varepsilon_0 \frac{d}{dt} \int \mathbf{E} \cdot d\mathbf{A} &&\text{(Ampere¡VMaxwell Law)}
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
Different vector fields with the same divergence could satisfy Gauss¡¦s law but have different forms(Gauss's law is more general than Coulomb's law).

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

## Magnetodynamics
Let's skip electrodynamics and talk about magnetodynamics first, the reason would be reveal soon. The magnetodynamics is just Faraday's law which is simply telling change of magnetic field would create a circulating electric field which would move the charge. 

## Electrodynamics
Originally from the Ampere's circuital law:
```math
\oint_{\mathcal{C}} \mathbf{B} \cdot d\mathbf{l} = \mu_0 I_{\text{enc}}
```
or
```math
\nabla \times \mathbf{B} = \mu_0 \mathbf{J}
```

You can use Biot-Savart law to derive Ampere's law. However, structurally similar like electrostatics, Ampere's law is more general than Biot-Savart law, Biot-Savart law is a special case of Ampere's law, you need additional conditions for Ampere's law to derive Biot-Savart law back. It's like Biot-Savart law coresponding to Coulomb's law and Ampere's law corresponding to Gauss's law.

According to the symmetric structure of electrocity and magntism, if change of magnetic field would generate electric field, then change of electric field should also generate magnetic field. This idea let Maxwell modify Ampere's law as Ampere-Maxwell law. 

However, there's no magnetic charge or so called magnetic monopole which means there no magnetic current, so in magnetodynamics, Faraday's law doesn't need to be modified to include the idea of magnetic current generating electric field.

# Lorentz force
My teacher back from college used to tell me that Maxwell's equations have already tell the whole story of electrodynamics. 

But it's not true.  

We have already know how 
 - charge generates field
 - moving charge generates conjugate field
 - changing field generates conjugate field

There's one more miss block for the map: How charge moves in a field?

People may think that the field itself already told how the charge should move. which is that 
```math
F = qE
```

But here's other thing. From experiments by Ampere, Biot¡VSavart, and others:
 - A wire carry current $I$ in a magnetic field $B$ experiences a force:
```math
F_{wire} = IL \times B
```

In the end, we get this:
```math
F = q\left(E + v \times B\right)
```

We can't explain this from Maxwell's equations. Because Maxwell's equations don't tell how charge would move under magnetic field(We have already know how charge would move under electric field by the definition of the field itself). Also, the magnetic field should move magnetic charge by it's definition(but of course, we haven't find such things yet).

So **Maxwell's equations** Plus **Lorentz force law** make the story completely.

Here's two important things need to be comprehended about which are 
 - both fields and it's generated field exist simultaneously, they are not one thing, they are two things! So if we have a E field and it's generated B field, Both E field and B field would produce Lorentz force.
 - Although we often say that a "changing electric field generates a magnetic field," but, the electric field (E) and its associated magnetic field (B) are **synchronized** and form a **self-consistent solution of Maxwell's equations**. This is because Maxwell's equations strictly tell the paired-relationships between E field and it's conjugate B field. Don't miss understand what Maxwell's equations say. The changing E field does not independently generate a new B field, nor does B generate a new E field in a sequential way; instead, they are **paired and co-evolving**, following the curl relations in Maxwell's equations. This concept will be explained in more detail in the discussion of electromagnetic waves.

# ElectroMagnetic field, wave
Basically, you can turn Maxwell's equations to standard form of **wave equation** in three dimensions:
```math
\nabla^2 u(\mathbf{r}, t) = \frac{1}{v^2} \frac{\partial^2 u(\mathbf{r}, t)}{\partial t^2}
```

Where:
- $u\(\mathbf{r}, t\)$ is the wave function (e.g., displacement, pressure, field component)
- $\nabla^2$ is the Laplacian operator:

```math
\nabla^2 = \frac{\partial^2}{\partial x^2} + \frac{\partial^2}{\partial y^2} + \frac{\partial^2}{\partial z^2}
```
- $v$ is the wave speed in the medium

For one dimensional wave equation:
```math
\frac{\partial^2 u(x, t)}{\partial x^2} = \frac{1}{v^2} \frac{\partial^2 u(x, t)}{\partial t^2}
```
And the general solution for it is:
```math
u(x, t) = f(x - vt) + g(x + vt)
```
Where:
- f() is a wave traveling to the right
- g() is a wave traveling to the left


For simplicity, we start derivation for the situation that the wave traverse in only one direction

## Specific propagation direction
Assume fields depend only on $x$ and $t$, and take the nonzero components
```math
E_y(x,t),\qquad B_z(x,t),
```
so the wave propagates along $+x$ and the fields are transverse.

Start from the relevant Maxwell curl equations in vacuum (no sources, no currents):
```math
\nabla\times\mathbf{E} = -\frac{\partial\mathbf{B}}{\partial t},\qquad
\nabla\times\mathbf{B} = \mu_0\epsilon_0\frac{\partial\mathbf{E}}{\partial t}.
```
With our assumption (dependence only on $x$, only $E_y$ and $B_z$ nonzero),
the nontrivial component equations reduce to
```math
\frac{\partial E_y}{\partial x} = -\frac{\partial B_z}{\partial t} \quad \text{(Faraday)}
```
```math
\frac{\partial B_z}{\partial x} = -\mu_0 \epsilon_0 \frac{\partial E_y}{\partial t} \quad \text{(Ampère-Maxwell y-component)}
```

(Equivalently written)
```math
\frac{\partial B_z}{\partial x} = -\mu_0\epsilon_0\frac{\partial E_y}{\partial t}.
```
---

### Eliminate $B_z$ and get the wave equation for $E_y$

Differentiate the Faraday equation with respect to $x$:
```math
\frac{\partial^2 E_y}{\partial x^2}
= -\frac{\partial}{\partial x}\!\left(\frac{\partial B_z}{\partial t}\right).
```

Swap the order of derivatives on the RHS (mixed partials commute):
```math
\frac{\partial^2 E_y}{\partial x^2}
= -\frac{\partial}{\partial t}\!\left(\frac{\partial B_z}{\partial x}\right).
```

Now substitute $\displaystyle \frac{\partial B_z}{\partial x} = -\mu_0\epsilon_0\frac{\partial E_y}{\partial t}$:
```math
\frac{\partial^2 E_y}{\partial x^2}
= -\frac{\partial}{\partial t}\!\left(-\mu_0\epsilon_0\frac{\partial E_y}{\partial t}\right)
= \mu_0\epsilon_0\frac{\partial^2 E_y}{\partial t^2}.
```

Thus we obtain the 1D wave equation for $E_y$:
```math
\boxed{\ \frac{\partial^2 E_y}{\partial x^2} = \mu_0\epsilon_0\,\frac{\partial^2 E_y}{\partial t^2}\ }
```
or equivalently
```math
\frac{\partial^2 E_y}{\partial x^2} = \frac{1}{c^2}\frac{\partial^2 E_y}{\partial t^2},
\qquad c=\frac{1}{\sqrt{\mu_0\epsilon_0}}.
```

---

You shouldn't be too surprised with this result if you truely understand what happened actually. The Maxwell's equations are paired-relationships between E field and B field, they have already implies the wave equations.

## General 3D (coordinate-free) wave equation
Start from Faraday and take curl:
```math
\nabla\times(\nabla\times\mathbf{E})=-\frac{\partial}{\partial t}(\nabla\times\mathbf{B})
= -\mu_0\epsilon_0\frac{\partial^2\mathbf{E}}{\partial t^2}.
```
Use the identity $\nabla\times(\nabla\times\mathbf{E})=\nabla(\nabla\cdot\mathbf{E})-\nabla^2\mathbf{E}$.
In vacuum $\nabla\cdot\mathbf{E}=0$, hence
```math
\nabla^2\mathbf{E}=\mu_0\epsilon_0\frac{\partial^2\mathbf{E}}{\partial t^2}.
```

Before Maxwell, people knew about electric and magnetic forces, but they thought of them as instantaneous actions at a distance, just like Newton’s gravity.
No one imagined that changes in electric or magnetic fields would travel through space at a finite speed — and even more shockingly, that speed would turn out to be the speed of light

# Relativity
In 1865, Maxwell found that his equations predict electromagnetic waves in vacuum traveling at the speed of light. However, he built his theory based on the existence of an absolute reference frame — the **ether**. 

Although Maxwell’s equations themselves do not explicitly involve reference frames, the key point is that the speed of light is determined by the constants:
```math
c = \frac{1}{\sqrt{\varepsilon_0 \mu_0}}.
```

If we take $\varepsilon_0$ and $\mu_0$ to be invariant under changes of inertial reference frames, then the speed of light must also be invariant. 

Of course, Maxwell believed in the ether, so he would have considered these constants as properties of that medium, not as universal invariants. 

Today we know that $\varepsilon_0$ and $\mu_0$ are indeed invariant constants of spacetime itself. In this sense, Maxwell’s equations are **naturally relativistic** — they already contain the structure that later became the foundation of special relativity.


Einstein's thought experiment, he imagined a very simple situation:
> There is a straight conductor (wire loop) and a magnet.
> You move one relative to the other.

Two cases here
 - Magnet moves, wire loop at rest --> Paired Electric field induced follow by Faraday's law.
 - Magnet at rest, wire loop moves --> No changing magnetic field, but charges moving in magnetic field, the induced electric field follow by Lorentz Force law.
