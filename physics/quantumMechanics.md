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
Mirror the light! Schrödinger thought.

He assumed that if electron's matter-wave relationship is the same as photon's one, then the wave should mean the same.

First of all, we take a look, what is the meaning of light wave as we known? We know that generally, a electromagnetic wave is like below
```math
E(x, t) = e^{(kx - \omega t)}
```

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

Now, the interesting part is that the total number N(t) can be one! This is not wrong at all, it is because we have ...




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

which can let this result:
```math
\Psi(x, t) = e^{(kx - \omega t)}
```
