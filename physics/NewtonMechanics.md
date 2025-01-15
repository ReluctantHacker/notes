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

The idea is that if two objects attract each other, the force between them must be related to a certain "property" of the objects. This property is called **gravitational mass** (this newly hypothesized property is not the same as **inertial mass**, though for convenience we call it mass. Later, it will be proven that they are the same because gravitational force is equivalent to inertial force, as per Einstein's principle of equivalence in General Relativity. But here, we initially consider them as different properties). In fact, even in Newton's time, it was observed that when measuring gravity using devices like balances, gravitational mass was proportional to inertial mass. Newton did infer that they are the same but didn't delve deeply into their essence. 

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
> Again! Just like time, you can compare a ruler to another reference frame(could be a bigger ruler or something) to declare if that ruler maintains the same length under that reference frame but this is not enough because one can always argue that the reference frame also needs to be comfirmed.

It turns out, as time turns out similarly, we can only BELIEVE a ruler keep it's length. Or more precisely we DEFINE a ruler's length is fixed so we can used it as reference.

# Absolute/Relative space time
Intuitively, we may think that the universe has an absolute reference frame which can be used to compare to any motion. 

We know that position is relative, obviously. And speed is also relative, as two observers could not tell which one of them is truely moving inertially. 

However, the acceleration doesn't seem relative. 

Accoding to Newton's argument, he used his famous water bucket as example to explain why. The water bucket argument is equivalent to directional acceleration actually, so I discuss in this simpler situation. When we hold a water cup and run with acceleration, the water in the cup would perform incline. However, the one who is not moving with acceleration won't observe this. 

Newton thought, the accelerating one observes different result to the inertial observer. If they are relative with each other, they must observe the same phenomona, the only explanation is that they are not relative with each other. There must be an absolute reference frame exists and every motion is relative that reference frame so we can tell which one really accelerates.

No! The conclusion is wrong.  There is a huge flaw in his argument about the concept of "relative". 

In fact, acceleration is also relative because we still can't tell which one actually accelerates, both observers can say they are the one perform acceleration. In the water cup experiment, inertial observer indeed doesn't see the water incline. However, he can argue that all the observers are in an **acceleration field** which perform horizontal directional acceleration to all the objects around. This acceleration field makes all the water incline but he accelerates to an inverse direction, which cancel the force that should make his water perform incline. So he is the one accelerates.

We can change this thought experiement to another platform. Let's suppose there are two identical springs, they are moving away from each other with an acceleration. One spring has a longer stretch length. Can we say the longer one perform the acceleration? No! Because the shorter spring can always argue that he is the one perform acceleration with inversely directional pushing force which makes it contract shorter compare to the longer one. 

You don't know the absolute statical length of a spring because there's no absolute statical reference frame. Every spring can argue that he is the statical one with statical length.

> [!NOTE]
> Human beings feel acceleration and do observe the phenomona of acceleration(like water incline). So intuitively, we think acceleration is absolute. But it is just an illusion. We live on earth, earth's acceleration field(gravitation field) is so natural to us that we all think the state of water or spring on earth is the absolute statical. We thought the statical phenamona on earth is the absolute statical. But it's not true. Since, of course, earth is not the center of the universe.

# Mass and Force
We know that Different objects may need different force to accelerate to the same speed. 

> [!NOTE]
> We define **mass** as how hard an object gains acceleration(negative or positive). If an object has a larger mass then we need more force to give it to make it gains the same acceleration as the smaller mass one.

However, the concept of force is based on mass. So the argument here is circular. Like force defines mass and mass also defines force. This is not valid. In fact, the only valid way we can define force is by gravitational law. 

We've already argue about gravitational mass and inertial mass are the same thing in modern sense. And gravitational force is equivalent to acceleration force, you can't tell if you're in a gravitational field or in normal acceleration field.

In fact, in Newton's age, people had started using gravitational force measuring mass long ago. 

> [!NOTE]
> To get things clear, suppose we are in the same microscopic world, two particles $P_1$ and $P_2$ attracts each other by the law of gravitation. Suppose we don't know anything about inverse square rule, we just observed that $P_2$ performs an acceleration $a_2$ toward $P_1$, and also, $P_1$ performs another acceleration $a_1$ toward $P_2$. We define mass as a property that makes $a_1 \cdot m_1 = a_2 \cdot m_2$. 

Finally we define force as $F = m \cdot a$, totally from gravitational law.

# Momentum, Kinetic Energy and Work
How can we define how much an object is moving? Speed alone is not enough to tell the whole story because we know that two objects with same speed may need different time to be stoped if we perform the same continuous force.

A natural definition of this "how much" would be directly the product of two properties of motion, speed and mass, which is the momentum $P = m \cdot v$.

And easily we can derive that 
```math
\Delta P=F \cdot \Delta t
```

Intuitively, this mean we need perform $-F$ force to an object that have momentum $\Delta P$ for $\Delta t$ time to stop it.

So, if two objects have same momentum, even though they have different speed, as we perform the same force on them, the time we spend to stop them would be the same.
```math
\Delta t = \dfrac{\Delta P}{F}
```

However, in this circumstance, even thought the time we spend is the same, the distance they go until stop may be different.

There is no magic behind, the reason is that the **initial speed** of them are different and the acceleration are also different because of different masses. So the distance doesn't have to be the same.
```math
\Delta P = F \cdot \Delta t = m_1 \cdot v_1 = m_2 \cdot v_2
```
And accelerations are:
```math
a_1 = \dfrac{F}{m_1}
```
```math
a_2 = \dfrac{F}{m_2}
```

With this result, it seems like momentum is not enough to describe the property about "how much" an object is moving.

We know the distance an objects go from stop if perform uniform force(therefore uniform acceleration) is 
```math
\Delta s = \dfrac{1}{2}\cdot a\cdot t^2
```

Mathematically, we suppose there is a "how much moving-related" quantity $E$ that if two objects with same value of this quantity, then the distance these two objects goes until stop would be the same if we perform the same force on them.

To find this quantity, let us rewrite distance $\Delta s$, as initial speed $\dfrac{P}{m}$ plus final speed $0$ and multiply time it spend $\dfrac{P}{F}$ and over 2.
```math
\Delta s = \dfrac{1}{2}\cdot a\cdot t^2 = 
```
```math
\dfrac{1}{2} \cdot \left(\dfrac{P}{m} + 0\right) \cdot \dfrac{P}{F} = 
```
```math
\dfrac{1}{2} \cdot \dfrac{P^2}{m \cdot F}
```
At this point, obviously, We find the $E$
```math
\Delta s = \left(\dfrac{1}{2}\cdot\dfrac{P^2}{m}\right) \cdot \dfrac{1}{F} = \dfrac{\Delta E}{F}
```
where 
```math
\Delta E = \dfrac{1}{2} \cdot \dfrac{P^2}{m} = \dfrac{1}{2}mv^2
```

At this point, the whole arguments actually means that we have two quantity to use to describe how much an object is moving:
  * **$\Delta t = \dfrac{\Delta P}{F}$**: How much time do we need to stop an object if we perform a force $F$ on it.
  * **$\Delta s = \dfrac{\Delta E}{F}$**: How much distance does the object go until it stop if we perform a force $F$ on it.


Of course, at this point, a force we perform on an object, we can rewrite it as 
```math
F = \dfrac{\Delta P}{\Delta t}
```
```math
= \dfrac{\Delta E}{\Delta s}
```

which can be also written as 
```math 
\Delta P \cdot \Delta s = \Delta E \cdot \Delta t
```



# Noether's theorem and Conservation law
Newton's three law is based on conservationo of momentum which is based on **symmetric of convervative force** 


if the particles is performed by **convervative force** which means the work is not relative to the path.

We've already discuss about conservation of momentum. However, it's not the end, there's some deeper idea about momentum.




> [!NOTE]
> Lagrangian mechanics is naturally more suitable for applications in relativistic theories, whereas Hamiltonian mechanics naturally allows for a simpler way to go from a classical theory to a quantum theory (i.e. quantization). 
