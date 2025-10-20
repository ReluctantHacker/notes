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

## Bending force
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
