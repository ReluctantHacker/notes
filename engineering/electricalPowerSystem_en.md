# Alternating Current(AC)
Currently, the global power grid uses alternating current, and household outlets naturally provide AC. Compared to DC, AC has three major advantages:

1. AC voltage changes over time, which allows it to generate an alternating magnetic field. Based on this principle, if you align two coils (A and B) concentrically and pass AC through coil A, coil B will experience induced voltage. The induced voltage is proportional to the number of turns in coils A and B.

Different devices require different power levels because each device typically has a fixed load. Voltage and current must match the load value:
 - If the load resistance is high, a higher voltage is needed;
 - If the load resistance is low, a lower voltage is needed.

Otherwise, the current will be too small (or too large), and the power will not reach the required level. For example, if you apply a hair dryer with a voltage, resistance means the current will also be small, resulting in low power and weak airflow. 

Therefore, the ability to freely adjust voltage is crucial. DC cannot induce voltage and thus cannot easily change voltage levels.

In theory, we often treat a power source as a voltage source (providing stable voltage regardless of current or power). This is because...

# Power Generation Basics
Typical generators(manual, wind, thermal, hydro) stop supplying power when they stop rotating. A generator relies on an engine to rotate its rotor, causing coils to cut through magnetic field lines and generate induced voltage. If the engine stops, the rotor stops, and no voltage is produced.

Continuous and stable electricity supply exists because generators rarely stop (except for maintenance or failure). For example:
 - Hydropower uses a reservoir to provide continuous water flow to drive the rotor.
 - Thermal power continuously burns fuel to produce steam that drives the rotor.

When a magnet moves back and forth through a coil, the induced magnetic field exerts resistance on the magnet (Lenz’s Law). Maxwell’s equations show this with a negative sign in Faraday’s law of induction.

When you manually rotate a generator’s rotor, if the load is high, you need more force to maintain a stable speed. A higher load means:
 - Required voltage remains constant,
 - Current increases,
 - Increased current strengthens the opposing magnetic field,
 - Making rotation harder.

Large generators maintain constant speed (adjusted as needed) to provide stable voltage. Typical power plant generators output 10 kV to 30 kV, then step up to 100 kV to 500 kV via transformers.

Generator speed determines frequency:
 - For a 50 Hz system, speed is usually 1500 rpm or 3000 rpm, depending on the number of poles.

If load suddenly increases, electromagnetic resistance rises, rotor speed drops, and frequency (and voltage) decreases. At this point, the prime mover (water flow, steam, etc.) increases power to compensate.

2. Long-Distance Transmission
Long-distance transmission uses high voltage to reduce power loss. Here’s a common misunderstanding:

We know Ohm’s law: R=V/IR = V/IR=V/I. If resistance is constant and voltage increases, current also increases, and power P=V×IP = V \times IP=V×I seems to increase. So why does high voltage reduce losses?

## Load
First, understand load. Load is not resistance. Load refers to the amount of energy required for a device to perform its intended function. It’s a human-defined fixed value.

Example:
 - A hair dryer needs 10 units of power to meet user expectations.
 - If the system voltage is 2 units, then current must be 5 units (since P=V×IP = V \times IP=V×I).
 - Therefore, its resistance is R=V/I=2/5.

If another hair dryer needs 20 units of power, then current must be 10 units, and resistance becomes 2/10 (fixed volatage).

So: Higher load → Lower resistance (inverse relationship).

Note: The hair dryer’s resistance is fixed. If you supply lower voltage, its power decreases, which is fine—it just won’t meet design expectations. For example, a 220 V appliance running on 110 V will work but with reduced performance.

Back to generators:
To maintain constant voltage, the rotor speed must remain constant. If load increases, resistance decreases, current increases, and opposing magnetic field strengthens, requiring more torque to maintain speed.

## Why High Voltage Reduces Losses
If resistance is fixed, higher voltage seems to cause higher current and higher losses. But the truth is:
 - The power company cannot control load (it’s based on user demand),
 - But it can control design voltage, which indirectly determines appliance resistance.

Power companies set a standard voltage. Appliance manufacturers design resistance based on that voltage to meet the required load.

For example again, suppose we have a hair dryer with load 10 units. If voltage is 2 units, current 5 units, would we get resistance 2/5. If voltage is 5 units, current 2 units, the resistance would be 5/2. 

So, Higher voltage → Higher resistance → Lower current.

Transmission line losses depend on current, so lower current means lower losses.

Again, suppose the load is fixed, we could have the summary below:
 - Low voltage + low resistance → high current → high losses
 - High voltage + high resistance → low current → low losses

# Reference
[some reference books? I am not sure if those things are useful or not.](https://github.com/tmhd99/power-electronics-studymaterials/blob/main/power%20electronics%20books/advanced-control-of-electrical-drives-and-power-electronic-conve-2017.pdf)
[Power System Analysis Software? Seems not a a open-source free thing but it's an inspiration for me.](https://electrisim.com/)
[Civil Engineering Drawing Sessional](https://www.aust.edu/lab_manuals/CE/CE%201100.pdf)
[Civil Engineering Drawings: A Comprehensive Guide](https://worldcivilsociety.com/civil-engineering-drawings/)
You need to study about the real case of Civil Engineering drawings.
You also need to study about the 電力平面圖, 電力單線圖
