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

> [!NOTE]
> One thing you should notice here. Earth and celestial sphere only share the pole direction(north and south), but not the motion. This means Earth is self-rotating but celestial sphere isn't self-rotating with earth. Conceptually, it's what it is.


#### Precession, Angular momentum and Torque
In ancient era, people had already found "Precession of the Equinoxes", althought they don't know why it does. The word "precession" is from "precede" which means something happens before we predicted it should do. And the word "equinox" is also from latin which is "equi+nox" means equal night means the time range of day and night are the roughly same(In chinese, it is just "春(秋)分"). 

In 1687, Newton used his math and physics mechanics to explain the reason of this "precession" by using earth's self-spinning axis changes because of angular momentum and toque. From then on, people call the motion like that "precession".

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
> One thing should be noticed here. In the earth, you can only see half of the sky in celestial sphere if your position is fixed at a moment. The reason is that the rest half view of the sphere is blocked by earth! You can think that earth is a huge horizontal ground extending to infinity(of course it's not, but for observers, earth is huge enough), So you can only see the view one side of the ground. Doesn't matter about the position you are, you can only see half, but of course, this half would be different accoding to your position. For example, if you see "W" shape in the sky at north earth, you would see same thing as "M" at south earth. But of course, I mean if they both can see the same constellation. If two positions are exactly opposite on Earth, they see mutually exclusive halves of the celestial sphere. Another thing should be noticed is that, althought I say we see half of the celestial sphere, but it means "at a moment". However, when you talk about how much you can see "through a specific of time range", the thing becomes not that simple because earth is self-rotating. Well roughly, if you are at equator, at a moment, indeed, you can only see half of the sphere, but because of self-rotating, it gradually change that half sphere you see. In Theorically ideal situation, you can see all the sphere through the whole night. However, if you are at poles(north or south), you can only see the constant half sphere no matter how earth self-rotates.


### Coordinate systems
For observing objects from a fixed location, telescope pointing and star catalogues. There are two common coordinate systems. 
#### Horizontal Coordinate System
This includes main two parameters: 
- **Altitude h**: The angular distance above the horizon. which is $0\leq h \leq \dfrac{\pi}{2}$. In astronomical/antenna/satellite data, this term is written as "Elevation Angle", sometimes briefly written as "elv". For the ground station/antenna pointing side, satellite receiving very often uses the Horizontal Coordinate System.
- **Azimuth A**: Azimuth tells you which direction along the horizon the object is located. The standard astronomical convention is N=$0$, E=$dfrac{\pi}{2}$, S=$\pi$, W=$\dfrac{3\pi}{2}$

> [NOTE!]
> Horizontal coordinates are observer-dependent! This means, suppose you and I stand at different locations on Earth. We will generally measure different altitude and azimuth. Even if you stay in exactly the same location, the coordinates change as Earth rotates. That's why ground station use this system, because the location is fixed. Another thing you should noticed is that, Earth rotates! In the observer point of view, the printed Az/El is just the instantaneous direction from your location to the satellite, in your local sky. So from the user’s point of view, you don’t need to mentally add Earth’s rotation. You just follow the Az/El numbers. However, to produce those Az/El values, the software must transform the satellite’s position from an inertial/orbital frame into your Earth-fixed local horizon frame. That transformation includes Earth’s rotation. If Earth didn’t rotate, the same satellite orbit would produce different Az/El values over time.

#### Equatorial Coordinate System
This one is more important. Instead of using your location horizon, we use the celestial equator. It is essentially Earth's latitude/longitude system projected onto the celestial sphere. This system is still the standard and very widely used in modern astronomy.

There are two parameters:
- Declination(Dec, δ): is defined using the same geometric idea as latitude, but on the celestial sphere. Aka, the latitude of celestial sphere. Latitude is specially for earth, and declination is for celestial sphere, but conceptually, they are the same model for different objects. 

For north, δ>0. For south, δ<0.

For the earth, people often say something like "latitude is 30 degree south.". But the mathematical sign convention is the same actually(just not that much used for normal people): "ϕ=−30 degree" means "30 degree S".

- Right Ascension(RA): again, conceptually, just longitude of celestial sphere. But there's one important difference. Earth longitude starts from Greewich meridian as 0 degree and to east 180 degree or to west 180 degree(total 360 degree). RA starts from **Vernal Equinox** and is normally expressed in hours, mininutes, seconds, which means total is: 24h = 360 degree. Example:
``` math
\alpha = 5^h 35^m 17.3^s
```
Therefore:
``` math
1^h = 15\degree
```
``` math
1^m = 15'
```
``` math
1^s = 15''
```

$1'$ here is called one **Arcminute** and $1''$ is called one **Arcsecond**. They all belong to angular degree system. The usage of them is describe the angles smaller than one degree, like this below:
``` math
1\degree=60'
```
``` math
1' = 60''
```

> [NOTE!]
> From a astrophysicist: "As a professional astrophysicist - we use a WACKY set of units, not just arcseconds are weird. Magnitude, for example, (the way we measure "brightness") is a complete mess, the smaller the number, the brighter the object, and it is historically calibrated in relation to a specific star (usually Vega). But there you also get a hint of why our units are so weird - they all stem from conventions shaped by the techniques and instruments used over centuries. Arcseconds go back to the earliest astronomers of ancient cultures, and traditions like that have a strong hold on astronomy. When you have a field as old as astronomy, trying to enforce "better" units gets very tricky, because your entire catalogue of references and records would have to be translated into the new units, and that ALWAYS leads to transcription errors. It's already a horrid mess that we have multiple different systems to record the location of objects in the sky (we have Right Ascension and Declination, but those can be given in radians, arcseconds, minutes, etc etc, all kinds of units, even with different reference points...). In the end, it's just easier to stick with the old system, and maybe translate it to better units when you have to do specific calculations." From another one: "As another professional astrophysicist, I at least do what I can to nudge things in the right direction by giving coordinates in decimal degrees instead of the old standard with degree-arcmin-arcsec on one coordinate axis and hours-minutes-seconds on the other axis." The argument is that the unit is weird because of historical reasons.

Vernal equinox(春(秋)分) is the point where the celestial equator crosses the ecliptic. But of course, if talk about the cross point, there are actually two intersection points. 
* Vernal Equinox — the point where the Sun crosses the celestial equator from south to north. which is the 0h point.
* Autumnal Equinox — the point where the Sun crosses the celestial equator from north to south. which is the 12h point.

But because earth precession, vernal equinox is not fixed, that means the 0 reference of RA is not fixed. Since the Vernal Equinox itself moves because Earth's equatorial plane precesses, we can choose one particular moment, take the Vernal Equinox's direction at that moment, and use that direction as a permanent reference direction. Traditionally, like Ptolemy and other ancient astronomists, they did use this idea, not in modern formal system, though.

The modern system now use **J2000.0**

ICRS


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
> [NOTE!]
> There's very convenient coincident you can keep in mind. Earth's self-rotation and it's revolution around the sun both coincidentally fit **right-hand rule**.

There's one very important thing in this chapter you need to notice. You need to separate "date" and "time". For example, in UTC, we may have something like "2010-04-05T00:07:10Z". The symbol T is a separator between date "2010-04-05" and time "00:07:10Z". Why do they do that? Because time has precisely definition: 1h = 60m, 1m = 60s. However, 1 day is not necessarily to be 24 hours! 1 month is not necessarily 30 days. 1 year is not necessarily 365 days.

**Sidereal day** is the time earth self-rotates spend relative to the distant stars(abstract absolute universe coordinate system), which is 23h 56m 4.0905s in atomic second(SI second). 

It's not perfectly 24 hours, the reason we would explain in next chapter solar day.
### Solar day
The reason a sedereal day is only 23h56m4s is that in ancient, we define a day like...

                  【 direction of distant star ───> 】
  [ Earth ] 1 ────(direction facing sun and distant star)─────────► [ Sun ]
     │                                                   
     │                                                    
     │ (Earth revolute around sun)                      
     │                                                
     ▼                                             
  [ Earth ] 2 ────(already turned full 360 degree, point to distant star, Sidereal day) ───►
     │                                             
     │ need to turn 1 more degree counterclock to face sun again, this is Solar day
     ▼ (roughly 4 minutes)                      

Like the diagram above, a solar day is like above. More specifically, if you observe the sun on earth, a solar day is the time takes the sun pass through meridian twice. A meridan is a longitude of celestial sphere, that longitude is the highest at the sky which means it includes the zenith point(the z axis intersection point of celestial sphere of the observer). 

### A second
In the earlier, people use a solar day to define a second which is 1/86400 mean solar day. The reason we use "mean solar day" is because the orbit of earth which revolutes around the sun is not perfect circle, so the orbit circulation **angular speed** is not constant(You should definitely go to review about planet motion to understand more here). It makes the solar day not constant. We have already discussed that a solar day got about 4 minutes longer than sidereal day. It is the effect of earth revolution. So that 4 minutes should be something like 4.01, 3.99, 4.02....for different solar day because the revolution motion is not a perfect circle. That's the reason we use time range of mean solar day for definition of a second.

However, even so, as we count the effect of revolution of earth, the spining(self-rotation) of earth is still unstable because of earthquake, tide and weather, etc. In 1960, people use the time range of 1900's tropical year as a year to define a second which is a **ephemeris second**. It's a constant because we choose the specific epoch! But pratically, the operation of getting the same time range of that second is hard to repeat. So in 1967, people use Cs-133 atomic transition(which can be easily reproduce) like 9,192,631,770 times as a second, the **SI second**, which had been highly match that ephemeris second. So **1 SI second = 1 ephemeris second**.

### A year
We define 24 hours a day, But how do we define a year?

> [!NOTE]
> One important thing you need to notice here, is that self-rotation motion of earth and revolution of earth around sun, they are independent motion, the ratio of them are not a perfectly 365 but roughly 365.25....

Mostly, there are two ways to define a year:
- tropical year: about 365.2422 days. Defined as the time earth spend to revolute from a equinox to the same equinox again.
- sidereal year: about 365.2564 days. Defined as the time earth spend to revolute from a position to the same position again, relative to distant stars.

Of course, these two years are NOT the same, because of precession of earth, equinox slowly changes which makes equinox "precede" to come. Earlier coming means it takes shorter time, it turns out precede about 20 minutes.

### Sidereal month
This is the time that moon spend to revolute earth to the same position relative to distant stars. It's about 27.321661 mean solar days.

### Synodic month
This is the time range that moon spend to turn back to the same phase. It's about 29.5 mean solar days. The reason why this is longer than sidereal one is because earth is revoluting around the sun. After moon revoluting around earth one time, Earth is not at the same position compare to sun anymore, moon need to spin a little more to face the sun and get the same phase again.

> [!NOTE]
> The synodic month is not a constant! The reason is that moon revolutes around earth, earth also revolutes around sun. So after moon has already revolutes a cycle, it needs to revolute some more to chase the sun to get the same phase(pretty much like the situation of solar day, but not solar year, earth revolution doesn't need to chase anything, don't get mis). If moon's revolution orbit is perfect circle, then a month would be a constant. However, it's not perfect circle, so the angular speed is not constant! The angle the moon revolute additionally to chase the sun is about 29 degree. If you use the fastest angular speed and slowest angular speed of moon to calculate how many times it takes to go that 29 degree, they're about 1.97 days and 2.46 days. The difference is about 0.49 days.

For observation, the shortest days of a synodic month are 29.27 days~29.83 days(0.56 days difference). Roughly match.

### Standard time
### Calendar
#### (pure)solar calendar
Totally based on concept of solar year and solar day. One year(tropical year) has about 365.2422 days which we have mentioned before. One of the calendars called **Gregorian calendar** which is also the broadly used today. It's not directly set 365.2422/12 a month but use the idea of leap(閏) month, leap year. Every four years a leap, not leap at the hundred, but leap again at four hundreds. The average days a year would be:
``` math
365+\dfrac{1}{4}+\dfrac{1}{100}+\dfrac{1}{400} = 365.2425 days
```

Which is very close to tropical year 365.2422 days. The error is small enough to pratical usage.

Other famous ancient civilization that used solar calendar: 
- Ancient Egyptian civil calendar: 12 months x 30 days + 5 days. Total 365 days without leap, slowly getting offset.
- Julian calendar(used by Rome): 365 days, 4 years a leap, average 365.25 days a year, which is the mother of Gregorian calendar
- Yazdegerdi calendar(used by Sasanian persian): 12 months x 30 days + 5 days. Same as Egyptian one. 
- Jalali Calendar(created by muslim around 11AD): it fixed the offset problem of Yazdegerdi calendar by adding rules of leap year which is four leaps for every 33 years. More precisely, 5, 9, 13, 17, 21, 25, 29, 33 leaps for every 33 years.
- Maya Haab calendar: 18 months x 20 days + 5 days. Totaly 365 days without leap, slowly getting offset.

#### (pure)lunar calendar
Totally based on concept of synodic month, 12 months a year(very roughly match tropical year), so you would have about 354 days a year. It makes this calendar offset 11 days every year. About 33 years, it would offset a year! This makes the calendar not possible to determine and doesn't care about seasons and weather, etc. Since this, pure lunar calendar is seldom for usage for most civilizations on earth.


The famous ones:
- Islamic/Hijri Calendar(broadly used by muslim even nowaday): This calendar doesn't care about seasons and weather, only cares about moon phase.

#### Lunisolar calendar
Basically, this is trying to define a month by moon phase and define year by solar tropical concept. The reason is that in pure solar calendar, moon phase would be getting offset. 


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
