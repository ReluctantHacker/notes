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
Although we say that there’s no force in static mechanics, we still need to understand how everything stays balanced in solid structures.

Let’s return to the wooden block train example. If you place a sensor between every pair of blocks, each sensor would show the same force value. This suggests that equilibrium is a distributed effect. But how does a force applied at one end result in the same force being measured throughout the structure?

It’s due to Newton’s third law—every action has an equal and opposite reaction.


## Microscopic View
At the particle level, Newton’s third law arises because identical particles interact symmetrically—they exert equal and opposite forces on each other. In a balanced structure made of many identical particles, the force required to move any single particle by a certain distance is the same throughout the structure. This is because the bond strength and spacing are uniform.

## Macroscopic View
In the block train, each contact surface between blocks is identical. When you try to separate two blocks, the distance you create between them generates a force. Since the geometry and material properties are the same at every contact point, the force-distance relationship is consistent across the structure.
This is how force "flows" through a static system—not as a moving entity, but as a pattern of resistance that emerges from uniform geometry and interactions.


## Non-uniform force distribution and again the force flow
However, even in static systems, the internal forces don't have to be uniformly distributed throughout the structure. A simple example is a ceiling that hangs a spring, which holds a weight. That weight, in turn, hangs another spring which hangs another weight. In this setup, the force in the upper spring is smaller than the force in the lower spring, yet the entire system remains in equilibrium. This difference arises due to boundary conditions — the constraints that can be applied anywhere in the system.

In static mechanics, true equilibrium is only possible when external forces or boundary conditions are present. For example, consider three identical particles arranged in a line: A — B — C. Suppose particle B is exactly between A and C, and all particles interact via the same force law. In this case, B can remain static due to equal and opposite forces from A and C. However, particles A and C will experience unbalanced forces pushing them outward, causing motion unless external forces or constraints hold them in place.

Boundary conditions are crucial because they allow non-uniform force distributions to exist in equilibrium. For instance, if the force between A and B is different from the force between B and C, the system can still be balanced — as long as external constraints adjust the position of B to maintain equilibrium.

This kind of situation is very common in microscopic structures constructed by non-uniform particles which are not identical between each other.

Let's talk about force flow more deeply. Suppose we have a solid bar which is fixed to a wall at one end, and you push on the other end. What happens?

 - The force you apply at the free end of the bar creates internal stress within the bar.
 - This stress is transmitted through the material toward the fixed end.
 - The wall, being the boundary constraint, provides the reaction force that balances the force you applied.

The force "flows" from the point of application toward the boundary, because the boundary is what ultimately resists the motion and maintains equilibrium.

When a system is in static equilibrium, there must be at least one boundary condition — a constraint that prevents motion. One way to identify which part of the system acts as a boundary is to mentally remove the point you suspect is constrained and imagine what would happen.

Take the example of a solid bar fixed to a wall: if you remove the wall, the bar would no longer stay in place — if you push one end of it, it would move. This tells us that the wall is the boundary condition that keeps the system static. The same reasoning can be applied to any static structure.

# Advanced elements
Now, we have the statics mechanics and force flow concepts, we can then have an idea which is that if something is pushing something by a force, but nothing's moving, then balanced force must go through the whole solid structure. It's not like just we push one end of a bar by a force, the only forced point is the end side of the bar, but every position in bar have the force. The things we got to discuss is what direction of the force is flowing.

## Pure bending (bending without shear)
The directly example is a screw

## Torsion
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





# 中華民國建築流程
## 勘驗
勘驗指的是由主管建築機關（如直轄市或縣市政府）派員，對建築工程的特定施工階段進行現場查驗。這些查驗通常包括：

 - 放樣勘驗：建築物放樣後、挖掘基礎前。
 - 基礎勘驗：基礎土方挖掘後、澆置混凝土前。
 - 配筋勘驗：鋼筋混凝土構造樓板或屋頂配筋完畢後。
 - 鋼骨勘驗：鋼骨結構組立完成後。
 - 屋架勘驗：屋架豎立後、蓋屋面之前。

每一個階段都由申請方（通常是承造人與監造人)提出申請(含勘驗時間), 主管機關收到申請後再安排勘驗人員於勘驗時間到場.

## 放樣
放樣簡單來說就是在還沒建起來的時候, 在整地上畫線或標記建築結構的一些重要參考點, 放樣勘驗的目的就是政府派人檢查到底畫線畫的準不準, 因為之後要依照放樣實際施工.(有誤差容許範圍)

**高程測量**是測量該地的地面相對於某點的高度, 而非建築物完工的高度. 建築高度無法放樣.

## 水平線繪製
簡單來說, 假設我正在蓋二樓, 通常施工人員會在一根柱子(或垂直結構)上畫上高度水平線, 來表示二樓的位置. 且水平線繪製符合:
1. 柱子必須垂直地板
2. 肯定不能只有一條水平線, 而是依照地板最終的幾何圖樣, 決定在那些柱子(或牆壁)畫出水平線, 否則參考系不夠, 精準度會有問題

柱子一開始可能只是鋼筋, 還沒有灌水泥, 許多情況下都是鋼筋先都架好在全部一起灌水泥, 所以也很可能一樓鋼筋綁好後直接開始綁二樓鋼筋, 如此以來, 工人也會在鋼筋上畫水平線

## 鋼筋工程
目前大部分的鋼筋仍舊是人力綁起來的, 這不是指鋼筋是由人力彎曲的, 而是指用鐵絲將交錯的鋼筋綁緊. 實際上, 通常不會於施工現場彎鋼筋, 大部分是在工廠彎好了, 在運到施工現場給工人"組裝". 

例如假設一個最簡單的情況, 有10條直線鋼筋, 我們要用這十條鋼筋做一個地板(二樓)結構, 用5條平行在下, 然後另外5條垂直擺放在原先5條之上, 然後用鐵絲把交叉處全部綑綁. 這就是施工工人在做的事情.

還有另一個例子, 簡單柱子鋼筋的做法, 用垂直鋼筋幾條立起來(鋼筋之間都互相平行), 形成矩形橫切面, 然後再用彎成矩形的鋼筋套在外面, 每隔一段垂直高度就套一個. 垂直的鋼筋在此稱作"主筋", 而外圍套上去的矩形鋼筋稱為"箍筋".

箍筋的作用是防止主筋出現角度偏移, 用鐵絲綁緊箍筋與主筋的交叉處, 提結構整合性.(注意! 鐵絲本身不承受主要結構力, 如壓力, 拉力, 剪力, 這些力是由鋼筋與混凝土共同承擔的。鐵絲的強度只需要足以在施工過程中維持鋼筋位置即可. 事實上, 鐵絲的作用在水泥上去後, 其實就沒用了, 只是未上水泥前, 防止鋼筋位移的臨時手段, 一旦混凝土澆置並硬化，整個鋼筋籠就會被混凝土包覆並鎖定，鐵絲的結構功能就結束了)
