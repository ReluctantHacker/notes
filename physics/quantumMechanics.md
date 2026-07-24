# Intuition
The wave function is the most important concept in quantum mechanics. The story begins with the dual nature of light — specifically, the photon. Experiments revealed that light exhibits both particle-like properties (e.g., the photoelectric effect) and wave-like properties (e.g., interference and diffraction). The wave nature of light had been known for many years, but the particle nature — widely accepted since Isaac Newton — was largely abandoned during the 19th century.
Eventually, two key relationships emerged that connect the particle and wave aspects of light:
```math 
E=h\nu
```
```math
P=\dfrac{h}{\lambda}
```

## Plank
The first quantum idea came from Planck’s solution to the blackbody radiation problem. He proposed that energy is quantized, leading to the formula $E=h\nu$ , which perfectly matched experimental results.

## Einstein
Later, Einstein applied Planck’s formula to the photoelectric effect and found that it also matched experimental observations. This reinforced the idea that light behaves as particles — photons — under certain conditions.

## Bohr
After that, Plank's constant got used again by Bohr construct his elegant model of the hydrogen atom by using the concept of quantized orbits.

People began to realize that phenomena previously thought to be continuous were actually quantized.

However, Bohr's model had some sincere problems. One and most important one is that: From the model, the electron should fall into nuclear due to continuous radiation emitting from its circular motion(acceleration)?

## de Brogli
Bohr’s model still treated the electron as a classical particle. De Broglie took a bold step forward: if the electron is a wave, then it wouldn’t radiate energy in circular motion — just like a standing wave.

But what kind of wave should the electron be? De Broglie reasoned: like a photon!

He proposed that the electron’s wave-particle relationship mirrors that of the photon, and that Bohr’s quantized orbits are simply standing waves.

## Schrödinger
But what does this “wave” actually mean?
Again, mirror the light! Schrödinger thought.

He assumed that if electron's matter-wave relationship is the same as photon's one, then the wave should mean the same.

First of all, we take a look, what is the meaning of light wave as we known? We know that generally, a electromagnetic wave is like below
```math
E(x, t) = e^{-i(kx - \omega t)}
```

> [!NOTE] 
> We use complex number here. For if you forget what complex number deeply mean, I'll bring your memory back here. First, we have rational number, and then find irrational number which can't be build by rational number. This makes number system expands. This is the definition of real number which can build number line. The reason that number line can be built by real number is that real number geometric can be build by any other real number. So we can conclude that real number is geometric existed number. But here's more, when we solve some algebraic problem, we would find some solution has $\sqrt{-1}$. Intuitively, we would not admit such number exists because we can't build such $\sqrt{-1}$ by any other real number(geometric number) because we can't geometrically find a number in geometric space that has square value of -1. However, again, math is not science(it's a subset of math), we can define what basic axioms is anyway we want as long as the logic derivation keeps.  And it can get and then expands to real number and then expands to complex number. We can say that real number is mostly the number including x^(y). 

E is electric field.

Matter wave should have same form:
```math
\Phi(x, t) = e^{(kx-\omega t)}
```

But what does $\Phi(x, t)$ mean, physically?

An electromagnetic wave itself is indeed a wave but it has no matter-meaning at all, it doesn't tell anything about what behavior(which is the electromagnetic wave's particle form) of photons.(Notice! One electromagnetic wave does not necessarily correspond to one photon)

> [!NOTE] 
> Photons (electromagnetic waves) do not interact with each other directly. While they interact with charged particles, they do not interact with other photons. By analogy, matter waves — if modeled after photons — should not interact with other matter either. (Though they may interact with other entities, we focus here only on matter-matter interaction.)

Although the electromagnetic wave itself doesn’t carry particle meaning, its square does.

Classical electrodynamics tells us that the intensity of a wave is:
```math
I = \dfrac{1}{2} \epsilon_0 c E^2
```

This represents energy per time per area

We also know the energy of a single photon is:
```math
E=h\nu
```
So $E^2$ is proportional to the **number of photons per time per area**. 

More specifically, the instantaneous energy density is:
```math
u(x, t) = \epsilon_0 E(x, t)^2
```

This gives the energy density at a specific point in space and time — essentially telling us the photon density (photons per unit space) at that space-time point.

If we know the total number $N(t)$ of photons at a specific time $t$. We can have
```math
N(t) = \int{u(x, t) dx} = \int{E(x, t)^2 dx}
```

If the matter wave behaves as light, we can define a matter wave function $\Psi (x,t)$, and write:
```math
N(t) = \int{\Psi(x, t)^2 dx}
```

Now, the interesting part is that the total number N(t) can be one! This is nothing wrong here, when we talk about particle density, we're referring to a statistical average — not a literal count of particles at a point. So something like "0.5 particles per space per time", you're describing a rate or density, not an actual half-particle.

In statistical mechanics, we often deal with average quantities. For example, if 5 particles pass through a surface every 10 seconds, the average rate is 0.5 particles per second.

For Schrödinger, He was trying to describe the behavior of a single particle. So naturally he normalizes the wave function.
```math
\int {\left|\Psi(x, t)\right|^2 dx = 1}
```
$\left|\Psi(x, t)\right|$ this is the famous probability density.


Now we have the meaning of the wave function, we are going to find the equation of motion.


According to matter-wave relationships:
```math
E=h\nu
```
```math
P=\dfrac{h}{\lambda}
```

we know three things below:
```math
c=\nu \lambda
```
```math
\omega=2\pi\nu
```
```math
k=\dfrac{2\pi}{\lambda}
```

which can let this result:
```math
E=\dfrac{h\omega}{2\pi}
```
```math
P=\dfrac{hk}{2\pi}
```

So we can see that energy E is just proportional property to omega. And P is just proportional property to k. so if we want to get momentum from wave function, theoritically we can just differentiate it by x, so that we can let k go appeared from exponential position down!
```math
\dfrac{\partial\Psi(x, t)}{\partial x} = 
```
```math
\dfrac{\partial e^{(kx - \omega t)}}{\partial x} = 
```
```math
k e^{(kx - \omega t)} =  
```
```math
\dfrac{2\pi P}{h} e^{(kx - \omega t)}
```

And now naturally we can and should define an operator call $\hat{P}$ for "getting momentum"
```math
P \Psi(x, t) = \hat{P} \Psi(x, t)
```

so Apparently,
```math
\hat{P} = \dfrac{h}{2\pi}\dfrac{\partial}{\partial x} = i\hbar \frac{\partial}{\partial x}
```

And as for energy E, of course, from the same idea, we can get below:
``` math
\hat{E} = i\hbar \frac{\partial}{\partial t}
```

Now, the idea of Shrodinger is very easy, he just used Energy conservation:
``` math
E = K + V = \dfrac{P^2}{2m} + V
```

And then take the operators into the conservation equation, we can get shrodinger equation:
``` math
i\hbar \frac{\partial}{\partial t}\psi(x,t)
= \left[ -\frac{\hbar^2}{2m}\frac{\partial^2}{\partial x^2} + V(x) \right]\psi(x,t)
```

## Wave Function Collapse
Now we have define what the wave should look like and what laws it should follow by. Now here comes a problem, when we use experiment to observe the wave, the wave would **collapse** to a certain state(an eigen state) which means it's not superposition no more according to the experiment. If we have two particles entangle each other, because the collapse happened to the one whole wave function. Two particles should collapse at the same time because they are just the result of one whole wave function. 

But if two particles are very distant, like thousands of light years away from each other. Then wouldn't that the sudden collapse between two particles violate the law of speed of light?

For example, if observer_A who observes particle 甲 and observer_B who observes particle 乙 which entangles with 甲. And when observer_A observes 甲 as 1, observer_B observes 乙 as 0.

Now we have to talk about two important ideas to keep going: 
- **Reality**: things exist even without observing.
- **Locality**: things constrained by spacetime which has a property that speed is limited(light speed)

Here's an important thing. If something has reality, then it must have locality. Because special theory of relativity which declare locality is silently and defaultly based on Realism. And so if something has no reality, then it doesn't have to have locality anymore because it doesn't have to be stricted by relativity anymore.

In Bohr argues that physics quantities is not reality which means they are all not certain, or more frighenly, not even exist, until you observe them. So of course, the concept of entangling particles collapse doesn't violate the law of speed of light because the particles physics properties(including location, mass, brabra) not even exist, so we can't say that information transfer faster than speed of light, because we can't even locate the particles.

In Einstein's idea. Everything is local which means everything needs space and time to travel(Everything). And we know that the limit of speed of light is a property of spacetime. So everything is constrainted by speed of light. He called this property **locality**.

So When observer_A observes, 乙 immediate collapse. This is not local.

Well, however, according to **Old Copenhagen Interpretation**, the probability is real random, but wave function is not real! It's just a math tool to describe this random probability. It means that **probability density**(wave function) is not a real physical quantity but just a math tool. And so, the idea of Collapse which based on wave function is not physical real, either. So it doesn't violate relativity(**locality**).

Noticed here, When we talk about "real random probability", it means Bohr declares that random is real physics, not just math tool. In classical probability theory, everything is decided. It is just that we don't have enough information to decide it yet. But Bohr declares that matter random is real undecided. Which means you have no way to know the information, before revealing the result. Notice again, you can't declare that something is decided and also we can't find any information to decide it, because if so, then that thing is real undecided. For quantum mechanics matter wave, Born declare(or define it in quantum mechanics) that matter wave probability is real undecided, which means there's no way from any respect you can decide it before reveal. But he thinks that probability density(wave function) is fake(just a tool to describe real)

More specifically, Again, back to the observers, when observer_A observes 乙 as 1, observer_B observes 乙 as 0. But observer_B has no idea who start the collapse. It means observer_B can't figure out it's him that starts collapse or observer_A start the collapse. For observer_B, the probability density of observing 乙 as 1 or 0 is no different than the situaton that collapse hasn't happen yet. So you see, no information transfering here! Observer_B receive nothing from Observer_乙, because he doesn't know anything from observer_Y.

