# cca-programming-electronics-fall-2016-monday_FINAL_PROJ_PROPOSAL

# StairAware: Meditations on Stillness

Stair Aware is a modular light block system powered by Dot Star LED’s that aims to capture a user’s 1D position leveraging infrared light and photo resistors and burst graphics across an LED matrix in the form of circular waves (water ripple emulations) from the position of each foot on a person’s walking path.   

## Summary

Here, write a few paragraphs (half a page?) or so describing the goals of your project.

The goal of my project stack ranked in order is to first “master” 1D position, specifically where a users foot is on a path of walking. Once that is understood building cool functions of the lights to work off of that understanding. One step further would be to develop an interesting interface that can be updated and changed by the user of the lights. 

Include a discussion how it will be interactive or responsive to the environment.

I need to map the results of environment where light is showing to see ir light and see where a persons foot is. Once the system understands foot position it burst a set of circle that grow in size across a matrix of dot star LED’s and upon ever foot step it continues the animation. 

## Component Parts

This project will be built via stair aware blocks I have already v1 prototyped which I will improve the geometry of. I will try to use a photon if I can get enough inputs to work off of a photon. Otherwise I am going to move over to a bigger board. I need to sort this out by week 2 and I am going to buy into a few different boards arduinos that are internet controlled and photon stuff. 

I am going to need to circle back on the block diagram. However, here is a rough start.
![Startblockdiagram] (file:///Users/natty/Dropbox/School%20CCA/14.%20Adv%20Progrm%20&%20Elec/5.%20HW%20Masters/14.%20Final%20Proj%20Ideas/Board_Schema.png)

## Challenges

A brief discussion of what you anticipate will be the hardest and most time-consuming parts.
I already started working on a project I just wrapped up today where we put these LED’s with a photon off of a sensor. Getting the animation sequences to work and sync to the sensor across the photon weren’t easy. I built the object, because my partner couldn’t so I don’t know all of the code, but I saw how long it took him. However, I have access to all the code and I can at least ask him if I can’t figure it out. So I feel like this gives me at least a leg forward as I can leverage and build upon that code. 

I don’t fully understand matrix yet and I think that will be a challenge to figure out as well as the complex math that goes along with running these animation sequences. Mapping the correct value to to trigger location I don’t think we be too hard, but making sure the values of light in each environment are right each time the product shifts will be perhaps a challenge. 

## Timeline

What parts of the project do you anticipate you will complete in each of the next 5 weeks? Your goal is to solve the scary problems as quickly as possible! 

- Week 1: 
	•	Write proposal
	•	BOM-By Sunday & Start Ordering
	•	Figure Out Light Libraries and Patterns
	•	Deeper Detail Of Plan-By Monday Morning
- Week 2: 
	•	Layout the Full Schematic of the System by Monday
	•	Make a fast animation to mock the entire interaction
	•	Product sketches of the final presentation in the gallery
	⁃	What are all the components we need to build for presentation? 
	•	Fix the Geometry on Stair Aware Light Blocks
	⁃	Make the bodies accept and contain the light block plugs
	⁃	Make sure the blocks and have the ir leds mounted, ir photo transistors mounted, dot star mounted.
	•	Price out total order of 3D parts from Victif/ Price with Fathom (better options?)
	•	Receive Parts in Mail By End of week
	•	Start Cutting Lights and Wiring up All Parts & Boards
	•	Go through Pagoda Learnings Code and LED libraries associated with that
- Week 3:
	•	Assemble out a bigger part of the system and begin to test and refine it
	•	Master LED matrix’s and sending data based on if based statements
	•	Get graphics running across the matrix 
	•	Get the blocks seeing location and triggering on location
- Week 4:
	•	Refine graphics patterns
	•	Tweak it for optimal visual results 
	•	Answer how we might make this even more interesting? 
	•	Final challenge time for extra rad credit points! 
	•	Go to environment of presentation and measure sensor results of light as it will be the day of the presentation before to tweak all the code for presentation. 
- Week 5: Present!

## References and link
Tutorials, comments, videos, magazine articles - Anything you found that helps you understand your project 
I will circle back on all of this tomorrow I have learned a lot already! 
