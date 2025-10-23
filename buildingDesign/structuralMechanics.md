# Basic elements

## Columns
When we discuss structural mechanics in buildings, the first question is how loads act on the structure and how the structure carries them. Consider the simplest case: two columns with a slab placed on top, and a load on the slab. The slab will bend because the load is usually not applied exactly above a column. If the load is closer to a column, the slab bends less because more of the weight is directly carried by the column itself. If the load is at the middle between the columns, the bending is the largest — this is intuitive.

If that bending exceeds what the slab material can tolerate, the slab will crack or break. One way to reduce bending is to add additional columns between the original two. That is why structural design requires estimating how much load the slab must support, and deciding how many columns are needed.

## Wall
The strongest possible structure between two columns is to add infinitely many columns in between, meaning every point is directly supported. Then the slab does not bend at all. Those “infinite columns” are what we call a wall.

The same idea extends to 3D: suppose we have four columns forming the corners of a square and a floor (slab) on top. The floor will bend under loads unless the load is placed exactly above a column. The absolutely strongest possible structure would be to fill the entire space between the four columns with material — forming a solid cube. In that case every point of the floor is supported and there is no bending problem. But this is not a good design: (1) we lose all usable interior space, and (2) we waste enormous material. So designers must balance structural strength, interior usable space for people, and cost.

## Beam
A beam is a smart compromise that saves material and still strengthens the slab.

Since a slab bends, and we want the space below it to be free for living or walking, we cannot just keep adding columns. Another idea is to make the slab thicker so it can tolerate more bending. That would work, but in modern buildings this would make the structure unnecessarily heavy and wasteful. Instead of thickening the entire slab, we only thicken the edges where the bending is most critical. In 3D, the slab is a floor, and the local thickening along its edges is exactly what we call a beam. A beam is therefore literally the slab’s “reinforced edge” that controls bending without filling the space below with columns or making the whole slab massive.

## Bending force and shear force
We have now discussed the basic structural elements but didn't have a strong concepts about how we precisely decide what is a material bending really is. We need to define what bending force of a slab or floor is.

Intuitively, the bending situation is that a slab bar which have some weighted load on it would be pressed on the top and stretch under the bottom part. In short, the top would tend to get shorter and the bottom would tend to get longer(You can imagine this by bending a solid metal bar by your hands).

In the classical **Euler-Bernoulli Beam theory**(the standard model used in basic structural mechanics), two key assumptions are made
1. Plane sections remain plane, means: 
 - Cross-section of the beam do not warp - they rotate as rigid pieces
2. The neutral axis(center line of the beam) has no change in length, means:
 - Fibers above the neutral axis shotten(compression)
 - Fibers below the neutral axis lengthen (tension)
 - The neutral axis itself neither stretches nor compresses

At this point, a natural definition of the bending force on any position of a slab(a 3d-solid horizontal bar) is 
```math
\sigma = \dfrac{M \cdot y}{I}
```
 - M is the bending moment, roughly the rotational torque of the slab caused by the load.
 - y is the distance of the position's axis(fiber) and the central axis
 - I is the moment of inertia of cross-section. This parameter is paired to M, means how well the cross-section can resist bending. Like rotational inertia.

According to this definition, bending force $\sigma$ would be positive above the central axis, and negative under the central axis which is the **compression** and **tension**. (The positive or negative would based on the reference choose. So it could be negative above and positive down but the idea is the same)

Before we talk more detailed about bending force, we need to clarify three elementary forces.
[reference](https://mechanicalc.com/reference/beam-analysis)

### Compression(bending force)
A pair of equal and opposite forces pushing toward each other along the same line. (so the body is being squeezed). Calculuted by $\sigma$ which is a **stress** which is force per area.
### Tension(bending force)
A pair of equal and opposite forces pulling away from each other along the same line. (so the body is being pulled apart). Calculated by $\sigma$ which is a **stress** which is force per area.
### Shear(shear force)
A pair of equal and opposite forces acting parallel but not collinear (i.e. along different lines in parallel planes). (so the body tends to slide one layer over the other). It's also a stress which is force per area.

<p align="center">
  <img src="./images/structuralMechanics_figure_1.png"/>
</p>

<p align="center">
  <img src="./images/structuralMechanics_figure_2.jpg"/>
</p>

<p align="center">
  <img src="./images/structuralMechanics_figure_3.png"/>
</p>

[reference](https://www.youtube.com/watch?v=CVno4aJjMuc)

Basically, compression and tension is the result of bending moment. A slab is a 3 dimensional bar, the position on it would have different bending force which may be compression or tension. If we integral all the area with tension(or compression) across the section, we get moment of bending:
```math
M = \int_A{\sigma y dA}
```
Similarly, for shear force:
```math
V = \int_A{\tau dA}
```
 - $\tau$ is shear stress at a point
 - $dA$ is the area of the slice over which shear acts

The different part is that V is not moment but a force.

We have already told how bending force is caused by the weight of the load. The shear force is exactly caused by the weigt of the load too! 

In fact, bending force and shear force are just two different angles of view to describing how weight load got supported. If we have a load on the slab, the shear force we analysis would be caused by the columns and position that handle the load.

In the other hand, bending force is supporting the load through bending moment. Shear and bending are just two different ways to explain how the load getting support by different physical point of view. We can have the relation below:
```math
V\left(x\right) = \dfrac{dM\left(x\right)}{dx}
```
This means shear force is the derivative of the bending moment.

If we totally ignore material properies including material strength, deformation limits and failure modes(like cracking, yielding, buckling). Then shear force and bending moment are just different mathematical expressions of how a structure internally balances external loads. You can derive one from the other, so they are interchangeable in terms of describing the internal response.

However, in real world, material often tolerate bending better than shear. Shear stress and bending stress act in different directions and affect different failure modes. If we want a more save and precise design of building, we need to consider both factors.

We often use **shear force and bending moment diagram** which is build on the mathematical truth that bending and shear, one can be derived from the other, assuming the loading conditions are known.

The diagram is useful because, mainly, we design building structure by using shear and moment diagram to consider what material is suitable to use for the reasons that some material is better at some critical points in different shear-moment situation.

Roughly, a designer starts his design from some artistic concept including building shape, column placement and spacing and open spaces, curves, cantilevers, etc. These choices express aesthetic, cultural, or functional ideas. And then the designer of course need to translate the vision ideas into something that can physically stand. For example, where loads will be applied, how forces will travel through the structure and what kind of structural system fits the shape(eg., frame, shell, truss). And then use shear and moment diagram to analysis critical point of internal force, understand how the structure will respond to gravity, wind, earthquakes, etc and detrmine where the structure needs to be strongest. Finally based on all of that, the choose the materials.

# Static Mechanics
Before diving deeper into structural analysis, it's important to pause and reflect on a fundamental concept: everything we've discussed so far falls under Static Mechanics. This field deals with systems in equilibrium—where forces cancel out and no motion occurs. While it may seem basic, truly understanding statics is essential for becoming a thoughtful physicist or even a philosophical thinker.

Static mechanics studies systems where all forces are balanced, meaning the net force is zero and the system remains stationary. For example, imagine a man pushing against a wall. Nothing moves, so we consider this a static situation. The force exerted by the man is counteracted by an equal and opposite force from the wall.

However, here’s things get interesting. According to Newton’s second law, $F=ma=\dfrac{dP}{dt}$ a statically balanced system, there’s no acceleration and no change in momentum. So, does force really exist in such a system?

No. In fact, the forces we talk about in statics are just conceptual tools. They help us analyze and understand the structure, but they don’t cause motion. You could say these are imaginary forces, useful for modeling but not physically true.

But What About Force Sensors?

If you place a force sensor between two objects in a static system, it does register a force. Why?

Let’s imagine three particles: two outer particles push on a middle one. If the middle particle is exactly centered, it experiences no net force. But if it shifts slightly toward one side, it accelerates back toward the center. This shows that even in balance, position matters, a tiny displacement leads to a restoring force(real force because of acceleration).

This is the essence of static balance: forces arise from potential energy gradients due to particle positions. The same applies to the man pushing the wall—if his hand moves slightly away, it will be pulled back due immediateyl gain of acceleration back to wall.

Consider a line of wooden blocks forming a train, with the last block pushing against a wall. Between each block, no acceleration no force. But if you try to pull one block slightly away, it will accelerate back toward the wall whic produce force. The force sensor placed between blocks shows a value not because there's a constant force, but because inserting the sensor changes the spacing, causing a temporary imbalance and then real forces produce to make sensor's physical structure disturbed(like a spring get streched or compressed) which can be a measurable value of force. The system then adjusts until a new equilibrium is reached.

On a microscopic level, this is about particles adjusting their positions to minimize potential energy—restoring balance.

Now, a deeper question: if a particle experiences two equal and opposite forces, do those forces truly exist?

The answer is no, at least not in the traditional sense. Force is defined by acceleration. If there's no acceleration, there's no net force. Talking about "two forces on an object" is misleading—what matters is the net force, which determines motion.

Traditionally, we say an object can have multiple forces acting on it, and we sum them to get the "net force," which determines acceleration via Newton’s second law:
```math
F_{net}=ma
```
But this is not a fundamental truth, it's a mathematical abstraction. In reality, an object doesn’t experience multiple forces. It only responds to one interaction, which manifests as acceleration. So the idea of “net force” is just a convenient way to describe the outcome of a system, not a real physical entity.

If we accept that force is defined by acceleration, then only one force can exist on an object at a time, the one that causes that acceleration. Talking about “two forces” or “balancing forces” is misleading. There is no such thing as “net” force, there is only force, and it arises from the geometry and interaction of particles.

All physical systems are made of particles, and what we perceive as force is actually the result of microscopic geometry—the spatial arrangement of particles and their potential energy relationships. When particles are displaced from equilibrium, they experience restoring acceleration. These accelerations produce what we call "forces", but they are not standalone entities, they are emergent effects of geometry and energy gradients.

So instead of thinking in terms of forces being applied or summed, we should think in terms of how particle configurations create tendencies to move. The structure itself—how particles are arranged and constrained—is what determines whether motion occurs or not.

In this view, statics is not about forces being balanced, but about particles being in geometrical equilibrium. The system doesn’t “have forces” acting on it—it simply exists in a configuration where no particle has a reason to move.

# Force flow
Although we say that there's no force in statics mechanics, but we still need to think in solid structure physics, how everything is balanced. 

We still take the blocks train examples. If you put sensor in every position between all blocks, all of them would get same force value. So apparently, the equilibrium is "generally" effect. But how a force pushing from one side cause all the position in structure balanced at the same force? It's because of the reverse force by Newton's third law. 

In microscopic view, Newton's third law is because of identical particles doing exactly same interation to each other but with different direction. 

## Pure bending (bending without shear)

## Torsion(扭力)
We have already talk about **Compression**, **Tension**, **Shear**. (bending is just a combination of compression and tension). These three forces and the fourth one **Torsion** are the **Four Fundamental Internal Forces in Structural Mechanics**. 

<p align="center">
  <img src="./images/structuralMechanics_figure_4.jpg"/>
</p>

Almost every other kind of internal force or stress pattern in a structure can be understood as a combination or variation of these four. For examples:
 - Bending: Tension+Compresion(Top compresses, bottom stretches)
 - Buckling: Compression+Geometry(Instability under axial load)
 - Fatigue: Repeated Tension/Compression/Shear(Damage over time)
 - Torsional Shear: Shear+Rotation(Shear stress from twisting)
 - Thermal Stress: Tension/Compression(Caused by temperature change)
 - Combined Loading: Mix of all(Real-world loads often involve multiple)




