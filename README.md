# Switch Modifier
## Overview

The switch modifier is an affordable accessibility device that enables specific switch output functions. With the provided Arduino code, the switch modifier outputs a momentary switch signal for a specific hold duration, in response to a digital input signal. Regardless of the duration of the input signal, the output can be set to any duration from 20 to 500 milliseconds. Manually turning a potentiometer allows for adjustment in output duration.

## Usage

With the provided Arduino code, the intended usage is for applications that require fast, short duration switch activation, where the user’s motor control is too slow to achieve such movement. To achieve multiple switch activations, the user must release the input switch first before activating it again. Minor adjustments to the code may provide for longer output durations, or latching functionality.

## Disclaimer
**Construction, use and modification of this device is the responsibility of the end user. The Stan Cassidy Centre for Rehabilitation and its employees are not responsible for any damages or harm as a result of the construction or use of this device.**

## Build Instructions

#### Tools Required

- Soldering Iron
- Screw Driver
- Wire Cutters / wire strippers
- Super Glue

#### 3D Printing

The lid and the base are printed face up with no supports. The middle piece is printed in its intended usage orientation (lettering upright) and will require supports in the bottom battery compartment, and port holes in the walls. The original box was printed on a Raise3D N2 printer using PLA. Speed printing is approximately 7.5 hours and high quality is approximately 18.5 hours.

### Assembling the Circuit

Take care in the placement of the electronics on the proto board to allow for everything to fit. Only attach the back end of the nano controller up to pins D2 and A7 (inclusive). The remaining portion of the controller will overhang and rest on the support structure. Ensure the nano controller will line up with the access port on the side wall of the 3D printed box.
Please refer to the following diagram for assembling the rest of the circuit.
Note: Do not solder the battery holder wires on until the 3D printed box is ready and the wires can be passed through the access hole.

### Assembling the Box

1. Remove all 3D printed supports from the middle section of the box.
2. Feed the battery holder wires through the access hole and mount it in the bottom compartment using two M2x6 screws.
3. Mount the assembled proto board to the standoffs in the upper compartment using two M2x6 screws.
4. Solder the battery wires to the appropriate locations on the proto board. Ensure not to melt the plastic box.
5. Mount the auxiliary mono jacks in the appropriate port holes in the walls of the box.
6. Mount the ON/OFF switch in the remaining port hole in the wall of the box using super glue. Ensure not to glue the switch stuck in the ON or OFF position.
7. Attach the lid of the box using four M2x20 screws. Ensure not to over torque the screws and damage the lid. Also, ensure that no wires are pinched between the lid and the walls of the box.
8. Insert four AA batteries (not included in list of materials) into the battery holder.
9. Attach the base of the box using found M2x20 screws. Ensure not to over torque the screws and damage the base.


## License
<!--- LICENSE Choose an appropriate license. We recommend an open-source hardware compatible license. --->
Everything needed or used to design, make, test, or prepare the Switch Modifier is licensed under the CERN 2.0 Weakly Reciprocal license <https://ohwr.org/project/cernohl/wikis/Documents/CERN-OHL-version-2> (CERN-OHL-W).

Accompanying material such as instruction manuals, videos, and other copyrightable works that are useful but not necessary to design, make, test, or prepare the Switch Modifier are published under a Creative Commons Attribution-ShareAlike 4.0 license <https://creativecommons.org/licenses/by-sa/4.0/> (CC BY-SA 4.0).

## Attribution 
<!--- ATTRIBUTION Include any information related to the development of the design. This may include who identified the initial challenge, who contributed to the design --->
The Lift Switch was designed by the Rehabilitation Engineering Department at Horizon Health's Stan Cassidy Centre for Rehabilitation (SCCR).  

The documentation template was created by Makers Making Change and is used under a CC BY-SA 4.0 license. It is available at the following link: https://github.com/makersmakingchange/OpenAT-Template

---

<!-- ABOUT MMC START -->
## About Makers Making Change
<img src="https://www.makersmakingchange.com/wp-content/uploads/logo/mmc_logo.svg" width="500" alt="Makers Making Change Logo">

Makers Making Change is an initiative of [Neil Squire](https://www.neilsquire.ca/), a Canadian non-profit that uses technology, knowledge, and passion to empower people with disabilities.

We are committed to cultivating a network of volunteer makers who support people with disabilities in their communities through cost effective assistive technology. Check out our library of free, open-source assistive technologies.

 - Website: [www.MakersMakingChange.com](https://www.makersmakingchange.com/)
 - [GitHub](https://github.com/makersmakingchange)
 - [Thingiverse](https://www.thingiverse.com/makersmakingchange/about)
 - Twitter: [@makermakechange](https://twitter.com/makermakechange)
 - Instagram: [@makersmakingchange](https://www.instagram.com/makersmakingchange)

### Contact Us
For technical questions, to get involved, or to share your experience we encourage you to visit [MMC Forum](https://forum.makersmakingchange.com) or contact info@makersmakingchange.com
<!-- ABOUT MMC END -->
