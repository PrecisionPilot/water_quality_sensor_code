<!-- Output copied to clipboard! -->

<!-----

You have some errors, warnings, or alerts. If you are using reckless mode, turn it off to see inline alerts.
* ERRORs: 0
* WARNINGs: 1
* ALERTS: 21

Conversion time: 2.617 seconds.


Using this Markdown file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β34
* Tue Nov 14 2023 22:44:35 GMT-0800 (PST)
* Source doc: ECE 198 Design Document

WARNING:
You have some equations: look for ">>>>>  gd2md-html alert:  equation..." in output.

* This document has images: check for >>>>>  gd2md-html alert:  inline image link in generated source and store images to your server. NOTE: Images in exported zip file from Google Docs may not appear in  the same order as they do in your doc. Please check the images!


WARNING:
You have 7 H1 headings. You may want to use the "H1 -> H2" option to demote all headings by one level.

----->


<p style="color: red; font-weight: bold">>>>>>  gd2md-html alert:  ERRORs: 0; WARNINGs: 2; ALERTS: 21.</p>
<ul style="color: red; font-weight: bold"><li>See top comment block for details on ERRORs and WARNINGs. <li>In the converted Markdown or HTML, search for inline alerts that start with >>>>>  gd2md-html alert:  for specific instances that need correction.</ul>

<p style="color: red; font-weight: bold">Links to alert messages:</p><a href="#gdcalert1">alert1</a>
<a href="#gdcalert2">alert2</a>
<a href="#gdcalert3">alert3</a>
<a href="#gdcalert4">alert4</a>
<a href="#gdcalert5">alert5</a>
<a href="#gdcalert6">alert6</a>
<a href="#gdcalert7">alert7</a>
<a href="#gdcalert8">alert8</a>
<a href="#gdcalert9">alert9</a>
<a href="#gdcalert10">alert10</a>
<a href="#gdcalert11">alert11</a>
<a href="#gdcalert12">alert12</a>
<a href="#gdcalert13">alert13</a>
<a href="#gdcalert14">alert14</a>
<a href="#gdcalert15">alert15</a>
<a href="#gdcalert16">alert16</a>
<a href="#gdcalert17">alert17</a>
<a href="#gdcalert18">alert18</a>
<a href="#gdcalert19">alert19</a>
<a href="#gdcalert20">alert20</a>
<a href="#gdcalert21">alert21</a>

<p style="color: red; font-weight: bold">>>>>> PLEASE check and correct alert issues and delete this message and the inline alerts.<hr></p>



# ECE 198 Design Document

Sean Wang, David Ye


# <p style="text-align: right">
Needs Assessment</p>



## Client/Customer Definition

The customer in this project comprises Canadian First Nations groups on reserves that are currently experiencing a water crisis. For an individual to be within the client scope, they must:



1. currently under a government-issued long-term water advisory* [1] 
2. be a First Nations person or an individual of First Nations descent [2]
3. currently live on a Reserve formally defined by the Canadian Government to be a reserve [3]

*A water advisory is issued if the government deems that a group of stakeholders are at risk of physical harm due to consumption or use of unsafe water. There are currently 28 long-term water advisories affecting 26 First Nations communities. The number of people affected by these advisories is estimated at around 80,000 individuals [1]


## Competitive Landscape

The Canadian government has announced many action plans aimed at improving the situation facing First Nations on reserves with unsafe drinking conditions. For example, last year they announced their commitment to introduce water management legislation for First Nations groups. [4] They aim to accomplish this by providing economic aid and improving infrastructure on reserves. Since 2016, the Canadian government has spent $1.6 B on providing aid aimed at lifting all long-term water advisories in Canada. 

In addition, activist and awareness groups are campaigning to raise social awareness to the issue plaguing First Nations groups. For example, the Free Grassy Narrows group is currently campaigning to raise social and public awareness to the pollution and unsanitary conditions affecting First Nations groups on the Grassy Narrows reserve. [5]

Finally, both the government and other groups are working on creating new technologies to improve the water condition. Innovations like reverse osmosis filters are able to process saltwater and remove particles from the water. [6] In addition, scientists are constantly researching new ways to improve filtration systems to both be more advanced and also more affordable.


## Requirement Specification



1. The pull-up circuit should be able to calculate a voltage based on the resistance of the water measured and return a voltage between 0V and 5V*. It is expected to return a different voltage depending on the resistivity of the water (due to ions or other contaminants) This information will be used to decide the water quality by the STM32 microcontroller
2. The turbidity sensor should be able to estimate the quantity of particles in a liquid using the intensity of scattered light. Similar to the pullup circuit, it should return a voltage from between 0V - 5V*, and return different voltages for different water samples. This information will also be used to decide the water quality
3. The readings of both sensors will be displayed on an LCD display to give the user an indication of the concentration of ions and quantity of particles present within the water. In addition, LEDs will be used to display the quality of water, with a green and red light representing safe and unsafe water, respectively. This quality evaluation will be determined based on sensor data processed by the STM32 microcontroller. A suitable evaluation algorithm should be able to classify the sensor data to recognize if the water is safe or not to drink. The algorithm should output a number from 0 - 100, with 0 being completely contaminated and 100 being pure water.
4. The housing must enclose all the electronics and prevent them from being exposed to any water due to small splashes. The circuitry within the product should be insulated to avoid short circuits, and appropriate measures must be taken to ensure that no moisture or water is able to get into the electronics component. Furthermore, as the product is meant to be handheld, the housing must be designed to be comfortable for the user to hold and should be able to fit in their hand. The product should not take up an area larger than 30 cm ⨉ 15 cm ⨉ 15 cm
5. The product is able to reliably read measurements that are consistent; there should be little to no variation between readings for the same water sample. In other words, the deviation between the water quality readings should be no more than 5 units

* See the mathematical principles for further details on the output range of voltage




# Analysis


## Design

	The design of the product will be a hand-held, portable probe that the user can insert into a water sample to test its purity. The product features 5 distinct components: 



* 2 probes (turbidity and conductivity sensor) provide the input data. These 2 probes extend out of the housing and are designed to be inserted into a water sample
* The STM32 microcontroller serves as the “brain” of the product, as it takes the input data and performs the calculations needed to display the appropriate output
* A 3D printed casing will be used to house the components. The casing must be made so that it is comfortable to hold and must be waterproof, to ensure that water does not reach the electronics within the casing. A similar case will be used to house the probes. Both cases are subject to the same design and testing requirements for the housing
* A LCD and various LEDs comprise the output of the product. The LCD gives a numerical reading of the quality of the water, while the LEDs indicate the status of the water (safe or not safe to drink)
* Wires will be used to transmit information and power to various components

While for commercial applications, a 9V battery will be used to supply the components with power, for the purposes of the demonstration, the battery will be replaced by a USB connection (attached to an external power bank or laptop) to supply power.



Circuit Schematic:



<p id="gdcalert1" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image1.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert2">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image1.png "image_tooltip")


Top view:



<p id="gdcalert2" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image2.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert3">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image2.png "image_tooltip")


Front view:



<p id="gdcalert3" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image3.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert4">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image3.png "image_tooltip")


<p id="gdcalert4" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image4.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert5">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image4.png "image_tooltip")


Rear view:



<p id="gdcalert5" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image5.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert6">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image5.png "image_tooltip")


<p id="gdcalert6" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image6.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert7">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image6.png "image_tooltip")



## Scientific or Mathematical Principles

Pullup circuits are widely used for detecting voltage in an input pin of a microcontroller to prevent a floating voltage. [7] It can be used in circuits involving buttons, photoresistors, or any other component with a changing resistance value. Essentially, a constant resistor connects the input pin of the microcontroller to the positive side of the power source and a “variable” resistor connects the input pin to ground at the same time, creating a voltage divider. The voltage received by the input pin can be modeled by the following equation: 

<p id="gdcalert7" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert8">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>

, where R<sub>1</sub> and R<sub>2</sub> are the constant and the variable resistors respectively. In our case, the “variable” resistor will be the water the user is trying to test where the resistance value inversely correlates with the ionic density of the water, which is also correlated with the purity of the water (the more contaminants, the more ions there are). The input pin will then use the resultant voltage to check the amount of ionic density of the water. The following voltage analysis for water ionic density (also known as conductivity) is shown below:



<p id="gdcalert8" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert9">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>



Pure water has an average resistance of 1 Mꭥ

Rain water has an average resistance of 20 kꭥ

Let:


    R<sub>1</sub> = 1,000,000Ω

		R<sub>2</sub> = 20,000Ω

		V<sub>total</sub> = 5 V

Then for dirty water: 

<p id="gdcalert9" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert10">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>



And for clean water: 

<p id="gdcalert10" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert11">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>




    In other words, if the resulting voltage is closer to 0.02V, the water is most likely dirty. If the resulting voltage is closer to 2.5V, the water is most likely clean. These equations also give us the parameters for the voltage - the resulting voltage will be between 0.02 and 2.5 volts.

Ohm’s Law described the proportional relationship between the current, voltage, and resistance within a conductor. [8] Mathematically, Ohm’s Law can be expressed in the equation 

<p id="gdcalert11" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert12">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>

, where I is the current flowing through a conductor, V is the voltage across the conductor, and R is the resistance of the conductor. Ohm’s Law will be used within this project to regulate the voltage and current levels across the circuit by dictating where and what type of resistors must be used. Many of the components within the circuit, including the turbidity sensor or LEDs operate within a certain voltage and current range. If the incoming voltage/current is above the operating levels of a component, Ohm’s Law will be used to determine the resistance needed to reduce the voltage/current to the correct level.

Scattering theory provides a framework to describe how particles interact with other particles, and their resulting change in direction, speed, and overall intensity as a result of these interactions. There are 2 main types of scattering that are relevant to this project: Mie and Rayleigh scattering. Mie scattering describes the interactions between particles with similar diameter and wavelength [9]. Rayleigh scattering focuses on interactions between particles with a difference of size/wavelength by a factor of 10 or above. [10] Mie scattering largely scatters light in a sphere with equal intensity, while Rayleigh scatters light in various directions based on multiple factors. The intensity of light due to Rayleigh scattering can be modeled by the following equation: 

<p id="gdcalert12" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert13">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>

. [9] The turbidity sensor used in this project performs this calculation, and simply returns the final intensity of light. [11]


    The turbidity sensor has a measuring range of 0 - 3000 NTU, and returns an analog reading of 0 - 4.5 V. To convert from voltage to NTU, the following equation is used (provided by the supplier): 

<p id="gdcalert13" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert14">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>




    This can be described by the following graph, where the x-axis is Voltage and the y-axis is NTU (per 1000)


     \
To find the maximum possible NTU, we take the derivative of the function and solve for the optimum point: 

<p id="gdcalert14" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert15">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>



	

<p id="gdcalert15" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert16">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>



	

<p id="gdcalert16" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert17">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>



	

<p id="gdcalert17" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert18">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>



To find when the NTU would be 0, we solve for the zeros of the function:



<p id="gdcalert18" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert19">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>



Since the function is restricted to be > 2.562, the minimum value is V = 4.20

Therefore the domain and range of the function are the following:


    

<p id="gdcalert19" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert20">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>




    

<p id="gdcalert20" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert21">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>






# Costs


## Manufacturing Costs

_Components contained:_



* **STM32 microcontroller** - printed circuit boards like the STM32 contain a mixture of plastics (refined from petroleum) and metals (ex. gold, copper). [12] These metals are often mined in countries like Africa, China, and Chile. The assembly of the STM boards happens worldwide, with facilities in Italy, Singapore, and France [13], [14]
* **Turbidity sensor** - like most electronics, the turbidity sensor contains typical metals like copper. Notably, the turbidity sensor can also contain a small quantity of titanium and sapphire, which are both primarily produced in China and Australia [15]
* **LCD and LED displays** - LCD screens use a compound called Indium Tin Oxide (ITO). [16] Indium is primarily found in China and Korea, while Tin is mostly mined in Malaysia and Indonesia. [17] Both LCD screens and LED lights are mainly manufactured and assembled in China
* **Wires **- the wires used in the project are made up of copper wire with a plastic sleeve. Similar to the STM32, the copper is primarily mined in countries like Chile and Peru. [13] These wires are also assembled worldwide and shipped different customers
* **Housing **- the casing for the product will be 3D printed, using a non-toxic plastic polymer. The 3D printer uses polylactic acid, a biodegradable polymer derived from starch [18]

_Assembly of product:_



* The assembly of the final product requires some soldering to form electrical connections between the wires and components. To accomplish this, lead-free solder and flux is used. Solder is now usually made using tin and sometimes silver, and is manufactured worldwide
* To create the components needed for the STM microcontroller and turbidity sensor, large assembly lines generally used to manufacture the products at a large scale
* The overall product features an abundance of metals like Copper, Gold, and Silver in addition to plastic (produced from petroleum)
* The housing requires a 3D printer, which can be provided by the University of Waterloo


## Implementation Costs

_Installation manual:_



1. Remove the product from the packaging
2. Unscrew the back cover and insert a 9-volt battery to power the product, taking care to appropriately match opposite-signs for the terminals. For the purposes of the demonstration, a USB type-A cable connected to an external power source will be used to power the device. A different back port can be removed, exposing a USB port to power the device
3. Remove the protective covering on the prongs of the pullup circuit. These coverings insulate the prongs and reduce the risk of an electric shock or electrical short
4. The device is now ready to use. For use, consult the user manual

_User manual:_



1. Inspect the product for any cracks, leaks (due to the battery), or unusual contamination. If any concerns are found, avoid using the product and do not expose the product to moisture to reduce any risk of a short circuit
2. Using a slightly damp cloth, wipe down the conductive surfaces of the pullup circuit and the turbidity sensor. Make sure to not overwet the cloth, as that may cause residual water to build up on the sensor probes, resulting in bad readings
3. Insert the probe into the liquid sample to be tested. Do not fully immerse the entire product into the liquid. Only submerge the tip of the probes to avoid possible short circuits or erroneous readings
4. Hold the probe still for at least 3 seconds to allow for a steady and accurate measurement
5. Consult the LCD display for a readout of the water quality. If the LED lights up green, then the water is safe for use. If the LED lights up red, the water is not safe for use, and should either be processed or disposed of
6. Once done with the product, wipe down any areas exposed to water using a cloth


# 


# Risks


## Energy Analysis

The components used within the product operate at a maximum of 5V, with the exception of the battery. For commercial designs, a 9V battery will be used. For the purposes of this demonstration, a USB cable attached to an external power source will be used to supply power. This ceiling of 5V will act as the reference standard for the entire project, as all components do not use more than 5V at any instance. 

Most 9V alkaline batteries contain 4.95 Wh (watt-hours) of energy. [19] Since 1 Wh corresponds to 3600 Joules, a typical 9V battery would contain 17,820 J of energy, or 17.8 kJ. This exceeds the limit for power storage, which is set at 500 mJ, or 0.5 J. As a result, using a USB cable will circumvent this potential issue, making the product much safer.

Since all components will use a maximum of 5 V and operate within 10 - 20 mA of current, the total discharge of energy is limited to a maximum of 

<p id="gdcalert21" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: equation: use MathJax/LaTeX if your publishing platform supports it. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert22">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>



As a result, the maximum total discharge of the product will not exceed 0.1 Watts, which is several orders of magnitude below the maximum threshold of 30 Watts. 

Furthermore, the product only uses DC current, and there is no danger of potentially harmful AC currents. For all circuit schematics, all wires and components are implicitly marked as DC. 

Additional forms of energy like mechanical or heat energy are unlikely, as the product does not have any moving parts. There is some risk of the STM board overheating, but that is not consistent with normal operations and only occurs as a result of damage to the board or due to a short circuit. As a result, the user manual states that the product should not be used if there is any external damage to the housing that could potentially jeopardize the functionality of the electronic components inside. 


## Risk Analysis

The largest risk to the safety of the user is due to a potential short circuit, which is most likely to occur if water is exposed into the system. As a result, the housing is designed to be watertight and prevent exposure due to small splashes. Another cause of a short circuit can be attributed to touching wires or surfaces. As a result, care will be taken during assembly to ensure that any potential conductive surfaces are kept isolated from other surfaces. 

Other potential risks include the risk of cross contamination - where the probe is used with dirty water, and then transfers contaminants over upon insertion into a clean water sample. As a result, the user manual dictates that the probe should be cleaned before and after use to prevent this situation.

There are no major environmental impacts of the use of the product, and the only major environmental impacts occur when the product is disposed of. The housing is made from a biodegradable polymer, and as a result will decompose within a reasonable amount of time (unlike normal plastics that may take thousands of years to decompose). However, the electronics contained within must be specially disposed of, as they contain precious metals that can be recycled, and can also contain dangerous chemicals that must be properly dealt with (mostly found in batteries). 

Given that the product does not have any moving parts, it is difficult for a user to misuse the product and potentially injure themselves or others. However, the most likely misuse of the product comes if the user decides to use the product to test different samples that the product was not designed for. The pullup circuit used in the product measures the resistance of a substance by passing a current through the substance. If the user places the probe on a substance with very low resistance, it offers a direct path between opposite terminals - potentially creating a short circuit. 

Short circuits are frequently referenced throughout this section because they pose the greatest risk to both the product and the user. Short circuits cause electricity to flow in unintended areas, which can damage and destroy the electronics contained within the product. Furthermore, the electricity can potentially reach other areas - including the user themselves. While the operating voltage is relatively low (5V compared to the 120V of a standard outlet), the safety philosophy for this product dictates that absolutely no electricity should reach the user. 

This is due to the dangers electricity has when exposed to humans. Currents can cause internal burns within the body, and at the worst case can cause the heart to stop beating or beat erratically. This can lead to a potentially life threatening situation, where the victim faces the threat of death if medical aid is not administered within a short time. 




# Testing And Validation


## Test Plan

_Pullup Circuit:_

**Test setup **- the pullup circuit will be tested with different water samples as per the user manual, and the final voltage will be recorded

**Environmental parameters **- 2 samples of water will be used, one consisting of filtered tap water and the other consisting of dirty water collected from a nearby pond

**Quantifiable measurement standard **- the main measurement will be the resulting voltage, which should range from 0.02V to 2.5V

**Pass criteria **- the circuit is considered to pass the test if the resulting voltage for the clean water is approximately 2.5V while the dirty water should be approximately 0.02V

_Turbidity Sensor:_

**Test setup **- the turbidity will be tested with different water samples as per the user manual, and the final voltage will be recorded. Note for consistent measurements, the same type of container will be used for each sample (the container will be thoroughly cleaned before each use)

**Environmental parameters **- 2 samples of water will be used, one consisting of filtered tap water and the other consisting of dirty water collected from a nearby pond

**Quantifiable measurement standard **- the main measurement will be the resulting voltage, which should range from 2.56V to 4.20V

**Pass criteria **- the sensor is considered to pass the test if the resulting voltage for the clean water is approximately 2.56V while the dirty water should be approximately 4.20V

_Water Quality Algorithm:_

**Test setup **- the algorithm will be tested with different water samples similar to how a user would use the final product, and the results of the LCD display and LEDs will be noted

**Environmental parameters **- 2 samples of water will be used, one consisting of filtered tap water and the other consisting of dirty water collected from a nearby pond

**Quantifiable measurement standard **- the main measurement will be the display on the LCD display, which should display a number from 0 - 100 and the LEDs, which will light up either green or red

**Pass criteria **- the algorithm is considered to pass the test if the dirty water causes the red LED to light up, the clean water causes the green LED to light up, and the water quality reading for the clean water is higher than the reading for the dirty water

_Housing System:_

**Test setup **- measurements of the housing system will be taken and then compared to the average hand size

**Environmental parameters **- dimensions and hand size

**Quantifiable measurement standard **- the deviation between the dimensions of the housing system and the weight of the product

**Pass criteria **- the housing is considered to pass the test if the weight of the final product does not exceed 0.5 kg, the dimensions of the housing fit within a 30 cm ⨉ 15 cm ⨉ 15 cm rectangular prism, there are no sharp edges with angles less than or equal 90<sup>o</sup>, and the contact points of the housing (where the user will hold it) should not have any flat edges longer than 10 cm or curves with diameter larger than 10 cm. 

_Product Consistency:_

**Test setup **- different samples of water will be measured, with 3 readings for each sample. The product should be cleaned following the user manual between measurements for each sample

**Environmental parameters **- different samples of water, each with varying quality (filtered tap water, tap water, and dirty water from a nearby pond)

**Quantifiable measurement standard **- the deviation between the output of water quality (a number from 0 - 100 displayed on the LCD screen and is calculated based on measurements from the sensors)

**Pass criteria **- the product is considered to pass the test if the maximum deviation for the readings for each sample is less than 5. If different LEDs light up for a sample (ex. a sample of water causes the LED to light up green on the first reading, but lights up red on the second reading), the product automatically fails the test




# References

[1]

Government of Canada, “Ending long-term drinking water advisories,” _Sac-isc.gc.ca_, 2021. https://www.sac-isc.gc.ca/eng/1506514143353/1533317130660

[2]

Government of Canada, “Indigenous Peoples and Communities,” _www.rcaanc-cirnac.gc.ca_, Jan. 12, 2009. https://www.rcaanc-cirnac.gc.ca/eng/1100100013785/1529102490303

[3]

R. Irwin, “Reserves | The Canadian Encyclopedia,” _Thecanadianencyclopedia.ca_, May 31, 2011. https://www.thecanadianencyclopedia.ca/en/article/aboriginal-reserves

[4]

G. of C. C.-I. R. and N. A. Canada, “Developing laws and regulations for First Nations drinking water and wastewater: engagement 2022 to 2023,” _www.rcaanc-cirnac.gc.ca_, Feb. 29, 2012. https://www.rcaanc-cirnac.gc.ca/eng/1330528512623/1698157290139

[5]

“Free Grassy.” https://freegrassy.net/

[6]

“How Reverse Osmosis Works | ESP Water Products,” _www.espwaterproducts.com_. https://www.espwaterproducts.com/understanding-ro/

[7]

“Pull-up Resistors - learn.sparkfun.com,” _Sparkfun.com_, 2019. https://learn.sparkfun.com/tutorials/pull-up-resistors/all

[8]

Wikipedia Contributors, “Ohm’s law,” _Wikipedia_, Mar. 14, 2019. https://en.wikipedia.org/wiki/Ohm%27s_law

[9]

Wikipedia Contributors, “Mie scattering,” _Wikipedia_, Sep. 19, 2019. https://en.wikipedia.org/wiki/Mie_scattering

[10]

Wikipedia Contributors, “Rayleigh scattering,” _Wikipedia_, Mar. 13, 2019. https://en.wikipedia.org/wiki/Rayleigh_scattering

[11]

“What is Turbidity? How do you test for it in water? - Aquaread,” _www.aquaread.com_. https://www.aquaread.com/sensors/turbidity

[12]

“What are printed circuit boards made of?,” _ABL Circuits_, Oct. 15, 2020. https://www.ablcircuits.co.uk/blog/what-are-printed-circuit-boards-made-of/

[13]

“Copper & Kids - Where Does Copper Come From?,” _www.copper.org_. https://www.copper.org/education/Kids/copperandkids_wheredoescopper.html

[14]

“STMicroelectronics.” Available: https://www.st.com/content/ccc/fragment/corporate/company_information/company_description/group0/6b/3c/8b/65/8c/91/47/e7/Profile/files/profile.pdf/_jcr_content/translations/en.profile.pdf

[15]

“What Is A Turbidity Sensor?,” _Atlas Scientific_, May 13, 2022. https://atlas-scientific.com/blog/what-is-a-turbidity-sensor/

[16]

“Liquid-crystal display,” _Wikipedia_, Sep. 18, 2023. https://en.wikipedia.org/wiki/Liquid-crystal_display

[17]

“Indium,” _American Chemical Society_. https://www.acs.org/greenchemistry/research-innovation/endangered-elements/indium.html

[18]

M. Does, “Metal, Concrete, and Wood Are the Next Frontiers in 3D-Printing Materials,” _Autodesk.com_, May 19, 2023. https://www.autodesk.com/design-make/articles/what-materials-are-used-in-3d-printing

[19]

“Nine-volt battery,” _Wikipedia_, Feb. 22, 2020. https://en.wikipedia.org/wiki/Nine-volt_battery
