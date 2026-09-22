# The Night Sky
## Celestial Sphere
### Celestial sphere
#### Celestial Poles
We have **North Celestial Pole** and **South Celestial Pole**. The definition of poles is the points of earth's rotational axis points to at celestial sphere. If Earth's rotation axis were perfectly fixed relative to the distant stars, then we have fixed celestial poles, of course. However, our Earth's rotation axis slowly precesses, which means its direction in space slowly changes(actually circular around a point). The precession angles is around 23.5 degree which is exactly the angle between earth equator and celestial equator. This is not a coincident, this is phyiscs, we'll talk about this latter. Anyway, this also means the poles point aren't fixed, they are changed, although very slow, take about 26000 years per round.

                 ★
            .         .
         .               .
       ★        ●          ★
         .               .
            .         .
                 ★

                 ● = North Ecliptic Pole
                 ★ = possible positions
                     of North Celestial Pole

#### Angular momentum and Torque
The detail of how precession works is about angular momentum and torque which is highly used in **rigid body**. The reason is that rigid body has constrains for every points of mass in the body, so it's okay to treat it as a single thing(just as like you see a single mass point, not see it as many distributed mass points). It follows two basic physics laws(actually only one, but we say two here for convenient) momentum law and angular momentum law. For example, if the spinning axis of a spinning toy which has fixed rotation pivot point and rigid body properties, has an angle between z-axis, intuitively, we think it should fall down by gravity. However, the truth is that because the gravity does a torque which direction is always horizontal to ground and also perpendicular to angular momentum of the toy, you'll find that it only changes angular momentum by horizontal direction which makes the toy never fall down and keep circulate by z-axis. 

The key idea is that the definition of torque is $dL/dt$ which is changing angular momentum per time. To comprehend this idea, you need to consider why angular velocity and angular acceleration can be treated as vectors. First of all, velocity and accerelation for linear motion can be treated as vectors, you can easily understand this by thinking they can be discomposed by x and y components.  For example, a velocity (1, 1), you can discompose it as (1, 0)+(0, 1) which means the moving effect of (1, 1) can be seen as moving in x direction at speed of 1 plus moving in y direction at speed of 1.

Can angular velocity and accerelation does that? In the case of angular, You can take the similar example, an angular velocity rotate around (1, 1) which is with magnitude and direction, you can discompose it as (1, 0)+(0, 1) which means the rotation effect can be seen as rotation disk (1, 1) discompose as rotation disk (1, 0) plus roation disk (0, 1). The idea of Projection of (1, 1) rotation disk to x-axis and y-axis. If angular speed hold vector properties this way, then angular acceleration does the same. 

Use this idea to deal with precession, you can get deeply what happens about spinning toy's precession. For example, suppose we have a particle circulate (0, 0, 0) with angular momentum (1, 0, 0), and suddenly, if we have an angular acceraltion or a torque $\tau$ (0, 0, a) on it instantly, which is perpendicular to (1, 0, 0), then the magnittude of particle circulation would tend to be constant but change the direction. If $\tau$ is always perpendicular to the particlar circulation, then you would see it the circulation itself rotates y axis.

Let's take another example, a particle X doing same circular motion with same angular momentum (1, 0, 0) but it's located at (1, 0, 0). In this case, one important thing comes. Just as velocity need reference frames, angular velocity also needs one reference frame. You can choose any point as origin of rotation as you want. However, if you have torque $\tau$ (0, a, 0) which is rotates according to (0, 0, 0), then the origin reference point of particle X should be using (0, 0, 0) for convenient. This is actually the idea of rigid body which has constraints to restrict the rotation pivot point fixed. Anyway, in this situation, you would see that X circulation would....

### Constellations
Stars appear to form a recognizable pattern, for examle like this below:
★             ★
      ★
   ★       ★
         ★

Of course, This is not necessarily how they are arranged in physical space, but just the directly projectional view from the observers at origin of celestial origin which is earth as us, the human beings are the observer in this sense. But since stars are so far way, it's almost static on the celestial sphere. It's very valuable to recognized the pattern of the shapes stars form as direction notation. Of course, we can just use coordinate(which we are gonna talk about soon later) like (x, y, z) as direction vector of celestial sphere. However, it's like when you live in a country, you can use (x, y) as your direction notation, but you can also recognized the buildings, roads, rivers, mountains and cities to help you recognized the country better.

The ecliptic is the Sun’s apparent path across the sky, while the famous **zodiac** is the band of constellations along that path; they are related but not the same.

Here's a perfect [website](https://stellarium-web.org/p/observations) that you can simulate the celestial on the sky, and help you remember the patterns of the stars.

For the beginners, it's useful to find out the **Big bear(in chinese astronomical system, literally just 北斗七星)** constellation, and use it to find the north star. Knowing this rough coordinate in the head, you can find the other constellations on the sky.

> [NOTE!]
> One thing should be noticed here. In the earth, you can only see half of the sky in celestial sphere if your position is fixed. The reason is that the rest half view of the sphere is blocked by earth! You can think that earth is a huge horizontal ground extending to infinity(of course it's not, but for observers, earth is huge enough), So you can only see the view one side of the ground. Doesn't matter about the position you are, you can only see half, but of course, this half would be different accoding to your position. For example, if you see "W" shape in the sky at north earth, you would see same thing as "M" at south earth. But of course, I mean if they both can see the same constellation. If two positions are exactly opposite on Earth, they see mutually exclusive halves of the celestial sphere.


### Coordinate systems
For observing objects from a fixed location, telescope pointing and star catalogues. There are two common coordinate systems. 
#### Horizontal Coordinate System
This includes main two parameters: 
- **Altitude h**: The angular distance above the horizon. which is $0\leq h \leq \dfrac{\pi}{2}$. In astronomical/antenna/satellite data, this term is written as "Elevation Angle", sometimes briefly written as "elv". For the ground station/antenna pointing side, satellite receiving very often uses the Horizontal Coordinate System.
- **Azimuth A**: Azimuth tells you which direction along the horizon the object is located. The standard astronomical convention is N=$0$, E=$dfrac{\pi}{2}$, S=$\pi$, W=$\dfrac{3\pi}{2}$

> [NOTE!]
> Horizontal coordinates are observer-dependent! This means, suppose you and I stand at different locations on Earth. We will generally measure different altitude and azimuth. Even if you stay in exactly the same location, the coordinates change as Earth rotates. That's why ground station use this system, because the location is fixed. Another thing you should noticed is that, Earth rotates! In the observer point of view, the printed Az/El is just the instantaneous direction from your location to the satellite, in your local sky. So from the user’s point of view, you don’t need to mentally add Earth’s rotation. You just follow the Az/El numbers. However, to produce those Az/El values, the software must transform the satellite’s position from an inertial/orbital frame into your Earth-fixed local horizon frame. That transformation includes Earth’s rotation. If Earth didn’t rotate, the same satellite orbit would produce different Az/El values over time.

#### Equatorial Coordinate System
This one is more important. Instead of using your location horizon, we use the celestial equator. It is essentially Earth's latitude/longitude system projected onto the celestial sphere.

There are two parameters:
- Declination(Dec, δ): is defined using the same geometric idea as latitude, but on the celestial sphere. Aka, the latitude of celestial sphere. Latitude is specially for earth, and declination is for celestial sphere, but conceptually, they are the same model for different objects. 

For north, δ>0. For south, δ<0.

For the earth, people often say something like "latitude is 30 degree south.". But the mathematical sign convention is the same actually(just not that much used for normal people): "ϕ=−30 degree" means "30 degree S".

- Right Ascension(RA): again, conceptually, just longitude of celestial sphere.


### Angular distance / angular measurement
### Arcsecond
### Astronomical Unit (AU)
### Parsec (pc)

## Apparent Motion of Celestial Objects

### Apparent motion of the Sun, Moon, and stars
### Diurnal motion
### Annual motion
### Phases of the Moon
### Solar and lunar eclipses
### Precession

## Actual Motion of Celestial Objects

### Actual motion of celestial objects

## Time

### Sidereal day
### Solar day
### Sidereal month
### Synodic month
### Standard time
### Calendar

## Brightness

### Apparent magnitude
### Absolute magnitude


# Telescopes & Instruments

## Functions of Telescopes

### Light gathering
### Imaging
### Resolution

## Basic Imaging Principles

### Refracting telescope
### Reflecting telescope
### Advantages / disadvantages

## Telescope Mounts

### Equatorial mount
### Alt-azimuth mount
### Advantages / disadvantages

## Telescope Performance

### Aperture
### Field of view

## Detectors

### Human eye
### Camera

## Radio Telescopes

### Basic radio telescope concepts


# Astronomical Radiation

## Temperature and Radiation

### Temperature and radiation color

## Spectroscopy

### Continuous spectrum
### Absorption spectrum
### Emission spectrum

## Doppler Effect

### Doppler effect


# Observing Environment

## Earth's Atmosphere

### Atmospheric turbulence
### Wavelength limitations

## Observing Sites

### Conditions for a good observing site

## Light Pollution

### Light pollution

## Atmospheric Pollution

### Atmospheric pollution






# other stuff random notes:
The ecliptic is the Sun’s apparent path across the sky, while the zodiac is the band of constellations along that path; they are related but not the same.
