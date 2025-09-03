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

Well, the answer is WE DON'T KNOW. We can only BELEIVE that it's true. Or more precisely we DEFINE that it is fixed so we can use it as our reference. There's no other way to make sure because that's what we choose what time is. This is what we called physical law! You can't prove law, you just believe it and believe that it works every position any time.

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

At this point, the whole arguments actually means that we have two ways to describe how much an object is moving:
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

In quantum mechanics, this is the conjugate variables for uncertainty principle.

The concept of $\Delta s = \dfrac{\Delta E}{F}$ is very important because we would discuss a lot things based on objects position. The difference of the position is the distance. So energy would be the quantity of an object about how much that object moving in different position.

# Noether's theorem for Energy Conservation
Noether's theorem states that every continuous symmetry of the action of a physical system with **conservative forces** has a corresponding conservation law.

> [!NOTE]
> What is **conservative forces**? It's a **conservative vector field** which is must be a **gradient** of a **scalar field**. And object moving in a conservative force field, the kinetic energy it would have is lock by it's position which means we have a **kinectic energy field** that an object moving in only has one corresponding kinetic energy if the position of that object is given. And the **field** means (in mathematical sense) a function of position.

The conservative forces restriction is important. Without this restriction Noether's theorem won't stand.

Let's look at **Energy Conservation**. Energy Conservation is because **Time translation Symmetry** which means that physical laws doesn't change by time. For example, Newton's Gravitational law is true for all identical elementary particles. Every particle moving in a static gravitational field of other particle, apparently, particle's kinectic energy only matter with it's **Relative Position** to each other because conservative force field(gradient of potential energy) says kinetic energy only matters with relative position of field source. If the gravitational law holds by time, it means relative **Kinect energy field** won't change by time which makes "Potential energy plus Kinetic energy" invariant over time of every particles!

If the vector field is not conservative(the curl of the field is not 0), this automatically means no potential(scalar field), then of couse no such things as "Potential energy plus Kinetic energy". So the conservation of Energy automatically fail. This is why the vector field must be conservative.

> [!NOTE]
> Noticed!! The Potential field here is just THE scalar field we talk about earlier and it's highly implied by kinetic energy field. If we have some scalar field, then it's gradient must be a conservative vector field. This is math, not physics. A conservative vector field just says that the integral result of the vector by position(or distance) $ds$ must be fixed if the two point of integral path(by position) fixed. In math, the vector doesn't have to be force, and the scalar field doesn't have to be potential. It could be anything. In physics, we already define force and kinetic energy, and found gravitational field is conservative. So gravitational field must have it's own scalar field(which is the potential).

> [!NOTE]
> Also noticed! When we talk about potential field doesn't change by time, we are saying it's **relative** field. Because a particle can move, and so as it's potential field. The static observer would observe that the potential generated by that particle at certain position would change over time because that particle is moving. What **time translation invariant** means is that **the physical law** won't change by time which means that If we are moving with that moving particle, we would see the potential field won't change by time. Actually, in two particles case, we can actually suppose one of them is static because we only focus on kinetic energy and potential energy so the speed of they getting closer doesn't matter.

Now, suppose relative potential field of two particles change by time, easily we can have this below:
```math
\Delta V = \int dV\left(x, t\right) =
```
```math
\int \dfrac{\partial V}{\partial x}dx + \dfrac{\partial V}{\partial t}dt =
```
```math
\int \dfrac{\partial V}{\partial x}dx + \int \dfrac{\partial V}{\partial t}dt
```

and we know that:

```math
\Delta K = - \int \dfrac{\partial V}{\partial x}dx
```

The kinetic energy here is using **partial integral**[reference](https://math.stackexchange.com/questions/606679/is-there-such-a-thing-as-partial-integration) which not a formal term in math but we indeed use it sometimes. In this case, it's perfectly used here. According to above formula, we have

```math
\Delta K + \Delta V = \int \dfrac{\partial V}{\partial t}dt
```

Intuitively, without math, we can also imagine that particle moving in a potential which is conservative in any time but also getting larger at every position by time. Simply speaking, like constant of Gravitation getting larger by time. The particle moving in the field would, suppose from starting position with $0$ potential to ending position with $V$ potential at beginning $0$ time. The ending position would be $2V$ in the ending time $T$. The final position of that particle would have potential $2V$ but the kinetic energy won't be $-2V$ because if the kinetic energy is $-2V$, then the gravitational field must be fixed in large situation all the time rather than small in the beginning. So kinetic energy plus potential energy is not conservative if time translattion invariance doesn't hold.

> [!NOTE]
> Energy conservation only needs **time symetric** to work, doesn't need **space Symetric**. So two particles attract each other, they can have DIFFERENT conservative vector field, for example different gravitational constant $G$. This doesn't make conservation of energy failed because if we take a look and focus one by one in each other's field, you would see that it's totally just a single particle problem in a conservative vector field. And with time symetric, of course, total energy is conservative. Same as the other particle.


# Noether's theorem for Momentum Conservation
We've already discussed about conservative field. Suppose two particles attract each others, the relational distance between them is the key point because if **space translation invariance** hold, two particles would have same kinetic energy moving forward each other. And we know that momentum is just speed times mass, so their momentum would be the same scale, inverse direction(suppose both are static at beginning means total momentum is 0). **Space translation invariance** means physical law is invariant no matter what position the particle is at. This makes two particles generate exactly same field to each others(inverse direction, of course). 

If the field is not conservative, that means the relative distance between them doesn't make both must has the same kinetic energy because now kinetic energy is not position fixed, same position may have different kinetic energy which make total momentum not equal to 0. Conservation of momentum fail.

If space symmetry is not hold, then two particles would have different kinetic energy field which means they have different kinetic energy which automatically make total momentum not equal to 0. So conservation of momentum fail.

The above arguments of Noether's theorem is rough, if we want to know deeper, we must learn Langrange Mechanics.

# Lagrange Mechanics
The core idea in Lagrange Mechanics is **least action principle** which describe the rule that every real path is the stationary path(least action path). I had tried to comprehend and derive least action principle from geometry method but failed, however, the logic of algebraic method to lead to the truth about least action principle is surpisely way more elegant and simple. 

> [NOTE!]
> First of all, we need to have an idea: Least action principle is an mathematical equivalent-reconstruction of Newton's $F=ma$.

Every math function which can be written as $y\left(z\right)=\dfrac{ad^2 x}{dz}$ must can be written as Euler-Lagrange equation's forms

```math
y\left(z\right) = \dfrac{ad^2x}{dz}
```
As Euler-Lagrange equation's form
```math
\dfrac{d}{dz}\dfrac{\partial L}{\partial x'}-\dfrac{\partial L}{\partial x} = ax''\left(z\right)-y(z)=0
```
when Lagrangian is
```math
L\left(x, x', z\right)=\dfrac{a}{2}\left(x'\right)^2-xf\left(z\right)
```

And now, here's the key concept. 

> [NOTE!]
> Euler-Lagrange equation is the necessary condition of calculus of variations problem. Noticed Euler-Lagrange equation is just for Newton's force formula, it can for any form of math equation as long as the form holds 

```math
S[x] = \int {L\left(x, x', t \right) dt}
```
```math
\delta S = 0 => \dfrac{d}{dt} \dfrac{\partial L}{\partial x'} - \dfrac{\partial L}{\partial x} = 0
```

This mean that if a function can be turn into Euler-Lagrange equation's form. That means it must be a problem of calculus of variation problem which is the stationary problem(or least action problem in special case). And of course, $F\left(x\right)=-\dfrac{dV}{dx}=ma=mx''\left(t\right)$ is the same form as the example above, so it must can be turn into Euler-Lagrange's equation form.
```math
L\left(x, x'\right) = \dfrac{1}{2}m\left(x'\right)^2-V\left(x\right)
```
so 
```math
\dfrac{d}{dt}\dfrac{\partial L}{\partial x'}-\dfrac{\partial L}{\partial x}
```

So the connection between Newton's mechanics and stationary action principle is that $F=ma" can be turn into Euler-Lagrange equation's form, means it must be a problem of a stationary action problem. This is the whole logic chain.

Now, we know that $F=ma$ can be turned into Euler-Lagrange equation's form with Lagrangian $L=T-V". However, a natural question arises, is Euler-Lagrange equation's form with $L=T-V" the only way that $F=ma$ can be turned into?

The answer is NO. 

Because 
```math
L'=L+\dfrac{d}{dt}f\left(x, t\right)
```
$L'$ would still holds in Euler-Lagrange equation, as you can take into equation and you would find the extra term cancel itself.

Another question arises, is $L'=L+\dfrac{d}{dt}f\left(x, t\right)$ gives whole possible Lagrangian? 

The answer is still No.

The $\dfrac{d}{dt}f\left(x, t\right)$ only guarantee that when you know certain form of L(for example L=T-V), then the equivalence class of all other valid forms is exactly
```math
L'=L+\dfrac{d}{dt}f\left(x, t\right)
```
However, we can prove that the lagrangian of class of $L'=L+\dfrac{d}{dt}f\left(x, t\right)$ is the only class when F=F(x) by supposing Lagrangian should be like this below if Euler-Lagrange equation would reduce to Newton's law which is $mx''=F\left(x\right)$
```math
L\left(x, x'\right)=\dfrac{1}{2}M\left(x\right)x'^2+A\left(x\right)x'+B\left(x\right)
``` 
The reason the terms can't be something like $xx'^2$ or $x'^3$ is because the Lagrangian should reduce to $F=ma$, the exotic terms can't make it except for the linear ones. You can try calculate yourself and you'll get why.

## Generalized force
Generalized force $Q_i$ is as below:
```math
\dfrac{d}{dt}\dfrac{\partial L}{\partial (q_i)'} - \dfrac{\partial L}{\partial q_i} = Q_i
```
Which is exactly the Euler-Lagrange equation but not equal to 0 but $Q_i$.
Before we explains this, we need to distinguish another idea: Abstract generalized force.

In Newton's law, we have 
```math
mx''=F\left(x, x', t\right)
```

Suppose we have any second-order ODE. We can rewrite it as 
```math
Force=A\left(t\right)=B''\left(t\right)
```

In this sense, A(t) plays the role of a kind of generalized force in the abstract system. The most direct and apparent example is **Torque**. However, the generalized force we mentioned in Lagrange mechanics is not the exactly the same thing. The generalized force is actually an **external force** which is not conservative. This is because when $Q_i$ is 0, the force is totally act by potential and it's an inner force, so the whole system is conservative.

The inner generalized force(or here we can say the conservative force in generalized cooridnates) is generated by potential
```math
F_i=\dfrac{dV(q_i)}{dq_i}
```
if there's no external generlized force(in generalized coordinates, of course), Euler-Lagrange equation is 0 as we already known
```math
\draf{d}{dt} \dfraf{\partial L}{\partial q_i} - \dfrac{\partial L}{\partial q_i} = 
```
```math
\dfrac{d}{dt} \dfrac{\partial L}{\partial q_i} - \dfrac{\partial V\left(q_i\right)}{\partial q_i} =
```
```math
\dfrac{d}{dt} \dfrac{\partial L}{\partial q_i} - F_i = 0
```

In here, you can see that in Euler-Lagrange equation, the first term is momentum differentiates time. And the second term is potential energy differentiate distance, they are both generalized force in abstract sense, the relationship pattern is as we told before:
```math
F=\dfrac{P}{dt}=\dfrac{T}{ds}
```
so obviously, the first term without time differentiation, we can define it as **generalized momentum**
```math
p_i = \dfrac{\partial L}{\partial (q_i)'}
```

The first term which is about momentum actually came from kinetic energy which is the real energy the system gains, and the second term is the force that potential energy provide, but this doesn't have to be fully gained by system except for the conservative system. So if we got $Q_i$ when first term minuse second term 
```math
\draf{d}{dt} \dfraf{\partial L}{\partial q_i} - \dfrac{\partial L}{\partial q_i} = Q_i
```
if $Q_i$ is netaive, that means first is potential energy only partly converts to kinetic energy probably caused by fictions, damping or resistance. If $Q_i$ is positive means there's extra external force injects energy into the system.

Or more accurately, 
```math
Q_i (q_i)' > 0
```
-> The generalized (external) force is injecting energy to system
```math
Q_i (q_i)' < 0
```
-> The generalized (external) force is removing energy from the system
-> e.g. friction, damping, air resistance
```math
Q_i (q_i)' = 0
```
-> The system is purely conservative, energy is just exchanged between T and V.

## Maupertuis's principle (Euler's version of least action principle)
As we told before, Least action principle is actually find the path that makes summation of action the extreme value, it's a problem of variation of calculus.
```math
S[x] = \int {L\left(x, x', t \right) dt}
```
Maupertuis found this problem another version of variation of calculus. 
```math
S[x] = \int {\vec{P} \dot \vec{dq}}
```
Of course, P is generalized momentum, and q is generalized coordinates infinitesimal distance.
```math
P_k = \dfrac{\partial L}{\partial (q_k)'}
```

This result is easily can be derive from Lagrangian version:
```math
S[x] = \int {L\left(x, x', t \right) dt} = 
```
```math
\int {\left(T-V\right) dt} = 
```
```math
\int {\left(T-\left(E-T\right)\right) dt} =
```
```math
\int {2T dt}
```
Because this is a least action problem so we can cancel constant 2 and according from the truth that 
```math
P ds = T dt
```
we get 
```math
S[x] = \int {P ds}
```
In multiple dimensions, finally
```math
S[x] = \int {\overrightarrow{P} \dot \overrightarrow{dq}}
```

Euler found this a little bit latter, so he didn't argue for the authority. 

If mass m is constant, we can also write the formula as
```math
S[x] = \int {\vec{v} \dot \vec{dq}}
```

At this point, you can see it's very similar as famous Fermat's principle
```math
S[x] = \int {n\left(\vec{r}\right) ds} = 0
```
where $n\left(\vec{r}\right)$ is the defraction index and $ds$ is the path length it takes. 

The similarity is not coincident, it's because it is a special case of Maupertuis's principle. Light doesn't have mass but it has momentum. According to quantum mechanics, we know a photon's momentum is
```math
P_photon = \dfrac{h}{\lambda_0} = \dfrac{h\nu}{c}
```
where $\lambda_0$ is the vacuum wavelength.

We know that frequency $\nu$ doesn't change when light going to another medium but only change it's wavelength, so apparently
```math
\lambda = \dfrac{\lambda_0}{n}
```
and then we take this into photon's momentum
```math
P_photon = \dfrac{h}{\lambda} = n\dfrac{h}{\lambda_0}
```
So apparently, 
```math
P_photon \propto n
```
and then we take Maupertuis's principle
```math
[S] = \int {\vec{P_photon} ds} = 0
```
And because $\dfrac{h}{\lambda_0}$ is constant, we get the fermat's principle
```math
[S] = \int {n \dfrac{h}{\lambda_0}} = \int {n ds} = 0
```






An object must take its path to go. This is nothing special here. However, we have field here, field decide how an object's path should be. We can compare imaginary paths in field with the true path by mathematical method.

In conservative field, or kinetic energy field, we should easily derive a **speed field**. The study of the speed field should be the same as study of kinetic field if mass is constant. So for convinence, we first discuss speed field.

If we have a speed field that an object is moving in, and have the start position and end position, then how this object path being decided? 

It must be some kinda of a **stationary path**. This is actually a math statement, not a physics statement. The physics part here is the conservative field itself which would derive the law of conservative. 

The reason why the path must be a stationary over all the imaginary paths by some quantity(suppose we have not yet known) is that, mathematically, the **Lagrange Multiplier** which is used for finding the stationary value of a function when there's a constraint, is applied to a simple geometric path-length-finding problem between two position. The so called constraint is the physical law itself. If there's no constraint, which means no force at all, the speed field has all the same value in space, then of course, the true path the object would go is the directly straight path between two position. When we adding constraint, for example conservative gravitationl field. So, Lagrange problem is actually just a normal geometric length of path problem but with some kinda constraint! and the normal geometric length of path problem just simple find the extremum value of geometric path.


Remember, the speed field is a derived form of the gradient of the force field. The force field decide how the object should move.

an object would take a path to go, we would notice that even though the kinetic energy field(or potential field) has its value in every position, there would be only one true-final-path would be taken in the real motion. The study of kinetic energy field should be the same as studying of **speed field** because the mass is constant and the kinetic energy is basically square of the speed of the object.

There's no spooky mystery deep meaning here. The reason for this is that 

That one-true-final-path must be the **extreme path** of all the paths. There is noting miracle here. The reason for this is that when we have an object in a force field, going from starting position with initial velocity, the force performed by field on the object is for sure and for certain by gravitational law. The direction and the distance of that object's moving is decided by the force the field perform on it. Specifically speaking, object will change it's moving direction to fit the direction of the force.


t the object moves not following the vector. Specifically, People called this **Action Principle(stationary action principle)**. 

Velocity field, because of the kinetic energy field exist in conservative law, there must be **speed field** existed. The speed field field also exist in optics when different diffraction which is the ratio of speed of light in vacuum and speed of light in material.

As long as now, we are talking about kinetic energy field to derive Stationary-Action principle, it means that Stationary-Action principle is true when potenial field existed which is the system that in conservative force. For non-conservative field, we should have **Generalized Force** form of lagrange equation which we are gonna talk about latter. [reference](https://physics.stackexchange.com/questions/342294/euler-lagrange-equations-with-non-conservative-force-example)

The Fermet's principle which is finding the stationary value of $\int nds$, the situation is actually kinda inverse with gravitational one. They both are **speed field** which must be conservative, however, in optics, a beam of light goes from low speed to high speed region in speed field, it tend to not go into the high speed region. On the contrary, in gravitational field, the object tend to go into high speed region. You can draw the path of motion for light going through non-uniform optics materials optics and an object going through a gravitational field, compare how their trajectory tend to bend.


A = mvs(momentum, velocity, distance)  must be extreme value. 


F dot ds 
Deep meaning of Lagrangian, I think this reference has a very important concept that need to be understood. [reference](https://www.quora.com/Whats-the-deeper-meaning-behind-the-principle-of-least-action)

> [!NOTE]
> Lagrangian mechanics is naturally more suitable for applications in relativistic theories, whereas Hamiltonian mechanics naturally allows for a simpler way to go from a classical theory to a quantum theory (i.e. quantization). 
