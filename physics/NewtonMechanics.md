# Brief History
Before Newton, there is no definition of "force". The definition of force is whether an object gains acceleration. Thus, defining "force" also defines "inertia"(with force there is acceleration, without force there is uniform motion). "Force" and "inertia" actaully bond together, as they refer to the same concept. Without the support of Newtonian mechanics, astronomy which is one of the main target of mechanics would be reduced to an empirical summary without any explanatory foundation.

# Newton's three laws of motion
* **First Law**: Law of Inertia
* **Second Law**: Define $F = ma = {dP \over dt}$
* **Third Law**: Every action (force) in nature there is an equal and opposite reaction

> [!NOTE]
> Newton's three laws are actually equivalent to each others and are all equivalent to **conversation of momentum**. 

The Law of Inertia states that no force no acceleration and vice versa, which is exactly the same argument $F = ma$. Therefore, the first law is equivalent to the second law.

The second law, $F = ma = {dP \over dt}$, indicates that without force, there is no change in momentum, which is exactly the statement of conservation of momentum. Hence, the second law is equivalent to the conservation of momentum.

Assuming **spatial symmetry**(including translational symmetry, rotational symmetry) holds, and consider basic particles A and B. Suppose they are the same type of particle (homogeneity), they will have identical properties with different states of motion. If particle A exerts an attractive force on particle B, then particle B must exert an equal and opposite force on particle A due to their identical properties and adherence to spatial symmetry (this mutual attraction has no primary or secondary; both are active participants). This result is equivalent to the statement of third law. Finally, the macroscopic world is composed of microscopic particles, thus Every macroscopic objects must follow the third law. Therefore, we can conclude conservation of momentum is equivalent to the third law (if spatial symmetry and particle homogeneity hold) which implies the second laws is equivalent to the third law.

# Newton's law of Universal Gravitation
Newton realized that the motion of celestial bodies and the falling of an apple are governed by the same law. By some studies and obvervation he concludes that

> [!NOTE]
> Gravitational force is inversely proportional to the square of the distance between the objects.

Newton chose an inverse square laws because it fits Kepler's law of Planetary motion. 

For a uniform circular orbit of radius r, Newton's know the acceleration is 
```math
a = \omega^2r
```
As Kepler's law says, we can have following
```math
\omega = {2\pi \over T}
```
```math
T^2 \propto r^3
```
Now, we can conclude that gravitational acceleration is
```math
a \propto r^{-2}
```
which is the inverse square rule. [reference](https://physics.stackexchange.com/questions/128245/how-was-newton-able-to-guess-that-gravitational-force-is-inversely-proportional)

> [!NOTE]
> Gravitational force is directly proportional to the masses of the objects.

The idea is that if two objects attract each other, the force between them must be related to a certain "property" of the objects. This property is called "gravitational mass" (this newly hypothesized property is not the same as inertial mass, though for convenience we call it mass. Later, it will be proven that they are the same because gravitational force is equivalent to inertial force, as per Einstein's principle of equivalence in General Relativity. But here, we initially consider them as different properties). In fact, even in Newton's time, it was observed that when measuring gravity using devices like balances, gravitational mass was proportional to inertial mass. However, Newton did not delve deeply into their essence. 

Combining these two principles above, we write the expression: 
```math
F = {GMm \over {r^2}}
```

# Physics quantity
It's easy to discuss a physical problem with time and distance like there's no problem. However, time is actually a very tricky concept. To completely comprehend the idea behind time, we suppose we are in microscopic world, and we have no ideas about force, time, distance and any other physical laws. 

Now, we observed a particle moving across the view, it's natural to define **Event** as particle's position. Event has order, like event A happens first and event B happens latter. With this order of events, it's natural to define **time** as the order of happening of events. 

In particle moving case, the position of the particle is the event. For example position $p_0 = \left( x_0, y_0, z_0 \right)$ happened earlier than $p_1 = \left( x_1, y_1, z_1 \right)$ which happened earlier than $p_2 = \left( x_2h

Suppose we take time range $t\left(p_1\right)-t\left(p_0\right)$ as an unit to meansure other time range, it's easily to conclude that time range $t\left(p_2\right)-t\left(p_0\right)$ is much longer than $t\left(p_1\right)- t\left(p_0\right)$. But it's hard to use $p_1$ to measure other events which is not start from 



# Noether's theorem

We have already discuss about conservation of momentum. However, it's not the end, there's some deeper idea about momentum.


# Momentum, Energy and Work


> [!NOTE]
> Lagrangian mechanics is naturally more suitable for applications in relativistic theories, whereas Hamiltonian mechanics naturally allows for a simpler way to go from a classical theory to a quantum theory (i.e. quantization). 
