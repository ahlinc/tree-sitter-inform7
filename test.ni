"Magenta Zero" by Kelly MacNeill


a thing has some text called flavor.
a thing can be conductive. a thing is usually not conductive.

after taking:
	if the noun provides property flavor:
		say "[run paragraph on][The noun] tastes like [the flavor of the noun].";
		
Instead of taking inventory: 
	say "[if the player carries something] I've eaten [a list of things carried by the player][otherwise]i'm hungry";
	say "[if the player wears something]. [We]['re] wearing [a list of things worn by the player][end if]." ;


understand "use [something]" as using.
using is an action applying to one thing.

report using:
	say "[one of]I'm [i]definitely[/i] doing something with [the noun]![or]I'm definitely [i]doing[/i] something with [the noun]![or]I'm definitely doing [i]something[/i] with [the noun]![at random]".


understand "use [something carried] on/with [something]" as using it with.
using it with is an action applying to two things.

report using it with:
	say "I can't figure out how to use [the noun] with [the second noun].";


Section - Rules for cats

a config is a kind of value. The configs are loaf, floop, bagpipes, and the gom jabbar.
a cat has a config.
A configuration is a kind of thing. A configuration is a part of every cat. 
understand "config" as configuration.


a cat is a kind of animal.
a cat has a number called purr power. the purr power of a cat is usually 0.
[a cat has a number called the max purr power. the max purr power of a cat is usually 9.]

To decide which number is the max purr power of (kitty - a cat): 
	if config of kitty is bagpipes:
		decide on 18;
	otherwise:
		decide on 9.


To decide what price is the player's cash: 
    let sum be the total price of money enclosed by the player; 
    decide on sum. 


To decide what price is the sum in (item - a container): 
    let sum be the total price of the money in the item; 
    decide on sum. 


To decide what money is the best money from (buyer - a thing) for (cost - a price): 
	repeat with bill offered running through money: 
		if the bill offered is enclosed by the buyer: 
			if the price of the bill offered is the cost, decide on the bill offered; 
			if the price of the bill offered is greater than the cost, now the functional relation of bill offered is overpayment; 
			otherwise now the functional relation of the bill offered is underpayment; 
		otherwise: 
			now the functional relation of the bill offered is irrelevant; 
	[say "underpayment: [a list of underpayment money] 
	overpayment: [a list of overpayment money]";] 
	if the total price of underpayment money is less than the cost: 
		decide on the cheapest money which is overpayment; 
	otherwise: 
		decide on the costliest money which is underpayment.