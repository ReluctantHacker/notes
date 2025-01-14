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

# Time
It's easy to discuss a physical problem with time like there's no problem. However, time is actually very tricky concepts. To completely comprehend the idea behind it, we need to suppose we are in microscopic world, and we have no ideas about force, time, distance and any other physical laws. 

Now, we observed a particle moving across our sight view, it's natural to define a certain **Event** as that particle's position relative to you(observer) in certain moment. And because every events has order of happening, like event A happens first and event B happens latter. With this order of events, it's natural to define **time** as the **order of happening of events**. 

This is actually the idea Einstein told about in special theory of relativity.

For example position $p_0 = \left( x_0, y_0, z_0 \right)$ happened earlier than $p_1 = \left( x_1, y_1, z_1 \right)$ which happened earlier than $p_2 = \left( x_2, y_2, z_2\right)$

Suppose we take time range $t\left(p_1\right)-t\left(p_0\right)$ as an unit to meansure other time range, it's easily to conclude that time range $t\left(p_2\right)-t\left(p_0\right)$ is much longer than $t\left(p_1\right)- t\left(p_0\right)$. And, of course, $p_3$, $p_4$, $p_5$, $p_6$... However, this partcile is go away, and never come back, so we can't use this particle's events to re-measure other particle's event.

Then what kinda motion that a particle have allows us to measure other particle's time range? The answer is **circular motion** or more precisely **periodic motion**. Be careful, at this point, we still have no idea about any physical laws, we just observe that there exist some kinda motion that is periodic, it would go around and around. 

Now here's the thing that blows your mind. We directly DEFINE a period of this kinda circular motion a unit of time. We can use this unit of time to measure any time range of events. Intuitively reasonable, right? The blowing mind part is that it's natural to rise a philisophical question, how do we know every period that time passed of that circular motion is the same? 

> [!NOTE]
> We can compare it to another circular motion. And if they have fixed ratio, we can say that in the reference of a certain circular motion, this circular motion's period fixed. However, it is not enough, because one can always argues that the reference circular motion also needs to be comfirmed.

Well, the answer is WE DON'T KNOW. We can only BELEIVE that it's true. Or more precisely we DEFINE that it is fixed so we can use it as our reference. There's no other way to make sure because that's what we choose what time is. This is what we called physical law! You can't prove law, you just believe it and believe that it works every position every time.

> [!NOTE]
> Of course, no one use this time definition as law, because we all follow the same path as Newton gave us. However, we should suppose to realize that, even though it's not obvious, they're equivalent. 

Still in the same microscopic world, we've observed that a circular motion happens when there're two identical particles attract each other. This is actually Kepler's Planet Motion. And it follows Newton's Gravitational Law. 

At this point, we can finally connect Newton's law and the definition of time.
```math
T = 2\pi\sqrt{\dfrac{r^3}{GM}}
```
where $r$ is the radius of a perfect circular orbit.

At this point, we can easily see that if we beleive that Newton's laws are true, then the period time of circular motion must be maintain the same. Inversely, if we believe period time of circular motion remains the same, then we must admit that Newton's laws are true.

# Space
Still in the same microscopic world, when we want to discuss space, it's pretty much similar trick, WE NEED REFERENCE. We can't just declare the distance length between two particles(or two positions), we need comparison. In modern case, we usually use reference frame.

Just like time, Here's also a blowing your mind philisophical question, how do we know if the length of two points or two particles maintains the same? For example a ruler, how do we know the ruler's length maintains? It's not a nonsense question. As I said, when we talk about space, everything need reference or so called comparison. What should we compare to to confirm that a ruler keep the same length? If we reference a ruler to a reference frame. It seems to work, but how can we be sure that reference frame maintained? 

> [!NOTE]
> Again! Just like time, you can compare a ruler to another reference frame(could be a bigger ruler or something) to declare if that ruler maintains the same length under that reference frame but this not enough because one can always argue that the reference frame also needs to be comfirmed.

It turns out, as time turns out similarly, we can only BELIEVE a ruler keep it's length. Or more precisely we DEFINE a ruler's length fixed so we can used it as reference.

# Absolute space time
Intuitively, we may think that the universe has an absolute reference frame which can be used to compare to any motion. 

We know that position is relative, obviously. And speed is relative, as two observers could not tell which one of them is truely moving. 

However, the acceleration isn't relative, accoding to Newton's argument. Newton use his famous water bucket as example to explain the idea. But I just simplify the situation.


# Noether's theorem

We have already discuss about conservation of momentum. However, it's not the end, there's some deeper idea about momentum.


# Momentum, Energy and Work


> [!NOTE]
> Lagrangian mechanics is naturally more suitable for applications in relativistic theories, whereas Hamiltonian mechanics naturally allows for a simpler way to go from a classical theory to a quantum theory (i.e. quantization). 
