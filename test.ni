"Magenta Zero" by Kelly MacNeill


a thing has some text called flavor.
a thing can be conductive. a thing is usually not conductive.

after taking:
	if the noun provides property flavor:
		say "[run paragraph on][The noun] tastes like [the flavor of the noun]."
		
Instead of taking inventory: 
	say "[if the player carries something] I've eaten [a list of things carried by the player][otherwise]i'm hungry";
	say "[if the player wears something]. [We]['re] wearing [a list of things worn by the player][end if]." 


understand "use [something]" as using.
using is an action applying to one thing.

report using:
	say "[one of]I'm [i]definitely[/i] doing something with [the noun]![or]I'm definitely [i]doing[/i] something with [the noun]![or]I'm definitely doing [i]something[/i] with [the noun]![at random]".


understand "use [something carried] on/with [something]" as using it with.
using it with is an action applying to two things.

report using it with:
	say "I can't figure out how to use [the noun] with [the second noun]."


Section - Rules for cats

a cat is a kind of animal.
a cat has a number called purr power. the purr power of a cat is usually 0.
[a cat has a number called the max purr power. the max purr power of a cat is usually 9.]

To decide which number is the max purr power of (kitty - a cat): 
	if config of kitty is bagpipes:
		decide on 18;
	otherwise:
		decide on 9.
