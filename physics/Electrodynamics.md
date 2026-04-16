# Maxwell's equations
Generally, electrodynamics including four major laws which are **electrostatics**, **magnetostatics**, **electrodynamics**, **magnetodynamics** 
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

## Wave theory, Superposition of waves, phase and grop velocity

### Definition of a wave
According to the definition of a wave from Wikipedia:
A wave is a propagating dynamic disturbance (change from equilibrium) of one or more quantities.

Notice here, the definition doesn't restrict the quantities. So that means the quantities can also be mass. And this rises a question: 

Now, imagine a particle as a disturbance in mass density that propagates through space and time. From this perspective, I cannot think of a single reason why this could not be interpreted as a wave.

For more precisely, If you define a mass density field M(x,t) with equilibrium M=0, then the particle corresponds to a localized disturbance (M=1 at its position). As the particle moves, this disturbance propagates through space and time. Each point in space experiences a temporary change from equilibrium as the particle passes.

But the particle has to be moving or it would violate the definition which claims that a wave is propagating.

Here I use the definition above but be careful, here's another statement from wikipedia:
"While waves are ubiquitous features of physical systems, no single definition adequately describes the topic."
(from Wikipedia)

This also means a wave has no rigourous definition around there and when others discuss about waves, we always talk about it intuitively.


### Medium
In Newton's era, people didn't believe that gravity can work without medium, so they imagined a medium called **aether**. The aether idea was even still dominating in Maxwell's era when he found electromagnetic wave. This is very reasonable because in classical senes, **everything is matter**. And transmission of energy and momentum is depends on contact by two matters. If we don't have medium then how does force and energy transfer? Even though the equations itself doesn't require aether mathematically, the aether was more of a physical interpretation layered on top.

But in the modern sense, **everything is field**, and a field(including gravity field) is action at distance without any medium. This idea is nothing wrong because we are building the basic rule here, either everything is matter or everything is field. If something is matter but others is field, this could break the consistent of fundamental.

But even though, the classical idea is helpful when we deal some classical problem, this help us intuitively understand what's going on.

### Linear wave
Well, let's change back to the classical sense, when we talk about wave equation, we often talks about Linear, small amplitude waves which transmits energy & momentum without transfer matter. Which follows the equation below:
``` math
\frac{\partial^2 u}{\partial t^2} = c^2 \frac{\partial^2 u}{\partial x^2}
```

This wave equation only transmits energy but no matter.

### Non-linear wave

### Superposition of two waves

The question is Why do we have an envelope when two waves overlap?

Suppose we have two base waves, when you overlap both of them, no matter how different they are, there would be an envelope wave(with phase velocity and group velocity) finally. To simplify the situation, we first assume that every property of two waves is the same, including frequency, amplitude, speed, except for the phase. And because the speed is the same, we can suppose the waves are static because the speed won't affect the discussion result. So we can write
``` math
y(x) = cos(kx)+cos(kx+\phi)
```
do some math with tri identity
``` math
cos(A)+cos(B) = 2cos\dfrac{A-B}{2}cos\dfrac{A+B}{2}
```

and we can get
``` math
y(x) = 2cos \dfrac{\phi}{2} cos\left(kx+\dfrac{\phi}{2}\right)
```
Technically, we can take $2cos(\phi/2)$ as the amplitude, and the wave itself is $cos(kx+\phi/2)$. In this case we get the final result the same wavenumber k as original, same "frequency" in space. 

A more important thing we can get is, according to the trig identity $cos\dfrac{A+B}{2}$, the final phase of the superpositional wave should be the arithmetic mean of two original phases. And the amplitude of the wave is the difference of the phase.

$\phi$ can be written as $n\pi$ where if n is 0, 2, 4..., then the superposition becomes **Constructive interference**, if n is 1, 3, 5..., then the superposition becomes **Destrcutive interference**. Notice here, the wave structure is still the same, it just has different amplitude.

Now, let's focus n between 0~2(because n=n+2m, for m is any natural number). Suppose n gradually grows from 0 to 2, the superposition is going from Constructive interference to Destructive interference.

With those ideas in mind, let's go deeper. Suppose we have a superposition of two waves with different k like below
``` math
y(x) = cos(k_1x) + cos(k_2x)
```
which can be written as below according to trig identity
``` math
y(x) = 2cos\left(\dfrac{(k_1-k_2)x}{2}\right) cos\left(\dfrac{(k_1+k_2)x}{2}\right)
```

Here's a site that you can perform an animation that shows envelope of two waves superposition: [reference](https://www.geogebra.org/m/yzgvgcqk?utm_source=chatgpt.com)

If we take a good look at the first term there, we would see that, suppose $k_1-k_2$ is constant, and if we chose a position that is totally Constructive interference which means $(k_1-k_2)x$=0, for x=0, with k1 not equal to k2, if we gradually move the position far from Constructive interference position, you would find that Constructive pattern gradually change to Destructive pattern and then change back to Constructive again, around and around. And so, the oscillation pattern would go through some high oscillation to low oscillation to no oscillation and back to high oscilation again. If k1 is very close to k2, the "envelope" picture would be very apparent through the whole transmission of wave pass. 

### group velocity and phase velocity and envelope
There's one more interesting thing, theoretically, k1 and k2 can't be smaller than 0, so $(k_1-k_2)<(k_1+k_2)$, so the term $cos\left(\dfrac{(k_1-k_2)x}{2}\right)$ must have a lower frequency which means longer wavelength. And $cos\left(\dfrac{(k_1+k_2)x}{2}\right)$, on the other hand, would have a higher frequency which means shorter wavelength.

Mathematically, we define **phase velocity** the velocity of relative peak(the small peak), and define **group velocity** the velocity of absolute peak(the big peak). In this case, We can say that $\dfrac{(\omega_1+\omega_2)}{(k_1+k_2)}$ is the phase velocity, and $\dfrac{(\omega_1-\omega_2)}{(k_1-k_2)}$ is the the group velocity. But notice here, strictly speaking, there's no group velocity and phase velocity in two waves cases, because it's discrete combination. We are gonna talk about continous version in Fourier's theory

### Fourier's theory
Suppose t=0(temporaily ignore t), for continuous waves combination, we can have 
``` math
f(x) = \int_{-\infty}^{\infty} A(k) \, e^{i k x} \, dk.
```
There's a trick here, assume the amplitude distribution $A(k)$ is peaked around a central wavenumber $k_0$.
Define:
``` math
k = k_0 + \Delta k.
```
Then:
``` math
f(x) = \int_{-\infty}^{\infty} A(k_0 + \Delta k) \,
e^{i (k_0 + \Delta k)x} \, d(\Delta k).
```

Factor out the central oscillation:
``` math
f(x) = e^{i k_0 x} \int_{-\infty}^{\infty}
A(k_0 + \Delta k) \, e^{i \Delta k \, x} \, d(\Delta k).
```

``` math
f(x) = e^{i k_0 x} \int_{-\infty}^{\infty}
A(k) \, e^{i (k-k_0) x} \, d(k).
```

The term $e^{i k_0 x}$ is the so called **Carrier**. If you look at the example of superposition of two waves. There is a same carrier $cos\left(\dfrac{(k_1+k_2)x}{2}\right)$. They are the same thing, in fact, if you look at the three waves superposition, mathematically you'll find that the combination result has carrier, too, and so as 5, 6, 7...waves until the infinity number of waves, continuous number of waves.

If $A(k)$ is the Gaussian, then the integral result would still be Gaussian, it's the properties of that integral. This means if the distribution of the continuous wave amplitude is Gaussian, then the result 

``` math
f(x) = e^{i k_0 x} \int_{-\infty}^{\infty}
A(k) \, e^{i (k-k_0) x} \, d(k) = 
e^{i k_0 x} e^{-\dfrac{\sigma^2 x^2}{2}}
```

This is so called **Fourier Transformation**, it means we take all the different k-components(plane waves) and combine them into a single function completely describes the wave in x-space. We can also change it back to the space of k like 
``` math
A(k) = \dfrac{1}{2 \pi} \int_{-\infty}^{\infty} f(x) \, e^{(-ikx)} \, d(x)
```

This takes the wave packet f(x) which is described in space x back in the spectrum A(k) which describes how much of each sinusoidal component $e^{ikx}$ is present.

We've already know that $e^{i k_0 x}$ is the carrier, mathematically, just like two waves case, the other part $E^{-\dfrac{\sigma^2 x^2}{2}}$ is the **Envelope** which has group velocity. Both A(k) and f(x) are both complete description of the same wave, but from two different perspectives.

### Gaussian Distribution
From probability theory, we know that Central limit theory is classically derived from random variables by an idea called **characteristic function**, this is actually using Fourier transformation. 

To get Gaussian Distribution, first, assume that we have two variables $X$ and $Y$ and they follow the same probability density function $\rho()



Define $Z = X + Y$.  
The probability density of $Z$ is given by the convolution:
``` math
p_Z(z) = \int_{-\infty}^{\infty} p_X(x)\, p_Y(z-x)\, dx.
```

\subsection*{Characteristic Function of $Z$}
By definition:
``` math
\varphi_Z(k) = \int_{-\infty}^{\infty} p_Z(z)\, e^{i k z}\, dz.
```

Substitute the convolution:
``` math
\varphi_Z(k) = \int_{-\infty}^{\infty} \left( \int_{-\infty}^{\infty} p_X(x)\, p_Y(z-x)\, dx \right) e^{i k z}\, dz.
```

\subsection*{Swap Integrals}
``` math
\varphi_Z(k) = \int_{-\infty}^{\infty} p_X(x) \left( \int_{-\infty}^{\infty} p_Y(z-x)\, e^{i k z}\, dz \right) dx.
```

\subsection*{Change of Variable}
Inside the inner integral, set $y = z - x$ (with $dz = dy$ since $x$ is fixed):
``` math
\int_{-\infty}^{\infty} p_Y(z-x)\, e^{i k z}\, dz
= \int_{-\infty}^{\infty} p_Y(y)\, e^{i k (y+x)}\, dy.
```

Factor out $e^{i k x}$:
``` math
= e^{i k x} \int_{-\infty}^{\infty} p_Y(y)\, e^{i k y}\, dy.
```

\subsection*{Recognize Characteristic Functions}
The inner integral is $\varphi_Y(k)$.  
Thus:
``` math
\varphi_Z(k) = \varphi_Y(k) \int_{-\infty}^{\infty} p_X(x)\, e^{i k x}\, dx.
```

The outer integral is $\varphi_X(k)$.

subsection
``` math
\varphi_Z(k) = \varphi_X(k)\cdot \varphi_Y(k).
```




Let $X_1, X_2, \dots, X_n$ be i.i.d. random variables with mean $\mu$ and variance $\sigma^2 < \infty$.  
Define the normalized sum:
```math
S_n = \frac{X_1 + X_2 + \cdots + X_n - n\mu}{\sqrt{n}\,\sigma}.
```





#### Fourier series
Fourier series theory says that any well-defined continuous and periodic function(I am not gonna make it preciselly here) can be decomposite to the superposition of basic wave functions which are sine and cosine. One important thing here is that Fourier series is strictly a theory that deal with **periodic functions**. So for example, if you want to decomposite a function like $f(x)=x$ with Fourier series, that's not possible. It can only handle it if we give the function an "interval", and artificially make it periodic. In short, we need to make a non-periodic function to a periodic function. $f(x)=x$ should be like this
``` math
f(x) = x - T \cdot \left\lfloor \frac{x}{T} \right\rfloor
```
```math
\text{For } T = 2\pi: \quad f(x) = x - 2\pi \cdot \left\lfloor \frac{x}{2\pi} \right\rfloor
```

# Relativity
In 1865, Maxwell found that his equations predict electromagnetic waves in vacuum traveling at the speed of light. However, he built his theory based on the existence of an absolute reference frame — the **aether**. 

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
