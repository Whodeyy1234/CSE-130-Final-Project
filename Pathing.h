#ifndef PATHING_H
#define PATHING_H

#include "Creation.h"
#include "Controls.h"

// Encounter class to hold and create encounters
class Encounter { 
public:
	Player* player;
	int trail = 0;

	Encounter(Player* p, int trailpaths) {
		player = p;
		trail = trailpaths;
	}
	void callTrail() { //calls different trails that the user can encounter
		system("cls");
		if (trail == 1) {
			cout << "You: Hmmm, I could do with some more resources for my travels... I don't want to run out." << endl;
			enterPause();
			cout << "As you continue walking, you look around at the beauty nature has to offer." << endl;
			enterPause();
			cout << "The sun is ripe in the sky and nature seems to be thriving. Deer are playing and butterflies are gliding with one another. The wind is just perfect for a warm day like such." << endl;
			enterPause();
			cout << "As you continue your path to find more resources, you spot a village ahead and decide to take a look at what the village has to offer." << endl;
			cout << "From a far, the village looks gorgeous, flourishing with dragon trees, willows, and white oaks. Children are running around the village and everyone seems to be out enjoying the weather." << endl;
			enterPause();
			cout << "After walking for a half mile to the village, you enter the heart of the village and see plenty of stands offering resources for sale such as food, flasks of water, and weapons." << endl;
			enterPause();
			cout << "While approaching a food stand, you see out of the corner of your eye, a young boy, looking to be about 11 years old. He was of small stature, with short brown hair and piercing green eyes covered, in dirt while curled up next to a willow tree." << endl;
			enterPause();
			cout << "Though unsure of what his situation is, you decide to approach the boy after noticing he is all alone." << endl;
			enterPause();
			cout << "You: Hello there, are you okay child?" << endl;
			enterPause();
			cout << "Child: I'm okay... I have lost my mother and haven't seen her in a few days... We stopped here on our way back from visiting family to grab some food from the market but so many people started to swarm in..." << endl;
			enterPause();
			cout << "Child: My mother and I were split apart admist the chaos and I had lost her... The people coming in were from small villages 30 minutes away, they fled due to an invasion of monsters..." << endl;
			enterPause();
			cout << "You: That makes sense as to why so many people are here today... What's your name? Where are you from?" << endl;
			enterPause();
			cout << "Child: My name is William, my family and I are from Winchester." << endl;
			enterPause();
			cout << "You: Well William, I'm " << player->toString() << ". What do you say about me helping you find your mother ? " << endl;
			enterPause();
			cout << "William shakes his head in excitement, standing up quickly but losing his balance due to his malnourishment from not eating the past few days." << endl;
			enterPause();
			cout << "You: Hey, what do you say about grabbing some food before heading out?" << endl;
			enterPause();
			cout << "William: Yes please!" << endl;
			enterPause();
			cout << "William runs up to you and grabs your hand. You feel at ease that the child feels safe with you." << endl;
			enterPause();
			cout << "You take William to a food stand and hear his stomach growl" << endl;
			enterPause();
			cout << "Seller: What can I do for you two today?" << endl;
			enterPause();
			cout << "You: I will take a loaf of bread, 8 pieces of your finest meats, and three pastries please. Also, two flasks of water." << endl;
			enterPause();
			cout << "Seller: Got it, will that be all?" << endl;
			enterPause();
			cout << "You: William? Go ahead and get what you'd like." << endl;
			enterPause();
			cout << "William: Are you sure?!" << endl;
			enterPause();
			cout << "You: Of course, we have to get you some energy for our trip." << endl;
			enterPause();
			cout << "William: Okay! Can I also get bread, meat, and pastries please!" << endl;
			enterPause();
			cout << "Seller: Of course, I will just double the order for you guys." << endl;
			enterPause();
			cout << "The woman at the stand smiles at us and begins packaging the food." << endl;
			enterPause();
			cout << "You: We can go sit under that oak tree for lunch William, does that sound okay?" << endl;
			enterPause();
			cout << "William: Yes! Of course!" << endl;
			enterPause();
			cout << "Seller: Your total will be five pieces of silver, please." << endl;
			enterPause();
			cout << "You hand her the silver in exchange for the food and walk over to the oak tree with William." << endl;
			enterPause();
			cout << "You both sit down in a patch of grass under the tree and begin to unpack your foods." << endl;
			enterPause();
			cout << "You: So William, tell me about yourself!" << endl;
			enterPause();
			cout << "William: Well, my mother is Aelswith and my father is Beocca, they're both originally from Bebbanburg but moved to Winchester for a better life since Bebbanburg is infested with monsters..." << endl;
			enterPause();
			cout << "William: I also have a baby goat back home that I take care of!" << endl;
			enterPause();
			cout << "William smiles with excitement, hoping to be home soon to see his family." << endl;
			enterPause();
			cout << "You: Sounds like you have some big responsibilities back home!" << endl;
			enterPause();
			cout << "Both you and William laugh and begin to eat sandwiches." << endl;
			enterPause();
			cout << "William: I am an only child so I do take on a lot of chores for my parents. I just hope they know I am okay... They're probably worried sick." << endl;
			enterPause();
			cout << "You: Well, we will suprise them soon enough." << endl;
			enterPause();
			cout << "You both continue to eat until your full and get to know one another more and more. He reminds you of your younger brother who passed not long ago due to a goblin attack..." << endl;
			enterPause();
			cout << "You begin to reminisce about the day he passed away... It was last year during October, you were out running errands for your father around the village. You can't help but blame yourself and your father for what had happened." << endl;
			enterPause();
			cout << "Father was a drunk, he said he would stay sober long enough to watch your 12 year old brother, Uhtred, while you were gone. You can't help but feel like you should've took him with you..." << endl;
			enterPause();
			cout << "Uhtred wanted to play hide and seek outside with his friends so you figured you might as well let him enjoy his young days while he can because sooner rather than later, he was to join your side, fighting off the monsters infesting villages." << endl;
			enterPause();
			cout << "The moment you got back from the store and seen father was asleep and Uhtred nowhere to be found, something had happened... You went searching for him throughout the village and surrounding woods until you came across one of his best friends.." << endl;
			enterPause();
			cout << "As soon as you asked about Uhtred, the child broke down crying, saying he found him during hide and seek, but being torn apart by a Goblin and immediately ran to find you but no one had answered the door..." << endl;
			enterPause();
			cout << "William: A-are you okay?" << endl;
			enterPause();
			cout << "You realize tears are streaming down your face and quickly wipe them away." << endl;
			enterPause();
			cout << "You: I'm alright William, are you ready to pack up and hit the road? We can grab a horse from the villiage on our way out and should make it to Winchester by sunset." << endl;
			enterPause();
			cout << "William: Yes, that sounds great!" << endl;
			enterPause();
			cout << "You all pack up your belongings, swing by a stable to grab a horse for the road, and head out on your 2 hour journey." << endl;
			enterPause();
			cout << "After traveling for about an hour, you notice William is asleep on your back. You smile and can't help but appreciate the kid for how kind and positive he has been." << endl;
			enterPause();
			cout << "Another hour passes and you spot Winchester in the distance. You decide to wake up William." << endl;
			enterPause();
			cout << "You: Hey William, you're home!" << endl;
			enterPause();
			cout << "William jolts up with excitement and starts cheering." << endl;
			enterPause();
			cout << "William: Thank you! Thank you! I can take you to my home and have my mother repay you for treating me so kindly and taking care of me!" << endl;
			enterPause();
			cout << "You: No need William! It was a pleasure meeting you!" << endl;
			enterPause();
			cout << "You stop the horse at the gates of Winchester." << endl;
			enterPause();
			cout << "You: Are you okay to walk from here to your home?" << endl;
			enterPause();
			cout << "William: Yes!" << endl;
			enterPause();
			cout << "You hop off the horse and help William down. William gives you a tight hug and begins to walk up to the gates as they begin to open." << endl;
			enterPause();
			cout << "William smiles and waves at you and begins to run inside." << endl;
			enterPause();
			cout << "You: I wish you the best kid!" << endl;
			enterPause();
			cout << "You smile and hop back on the horse and begin to ride away." << endl;
			enterPause();
			cout << "The sun begins to set and you can't help but feel relief... The beauty in helping someone inspires you to fight for the people more and more each day..." << endl;
			enterPause();
		}
		else if (trail == 2) {
			cout << "After a long journey of traveling from your home in Eoferwic, you finally decide to take a break and stay at a village in East Anglia." << endl;
			enterPause();
			cout << "You ride up to the open gate into town on your horse and decide to stop at a market to get some more water to fill your flasks with." << endl;
			enterPause();
			cout << "As you walk through the market you notice some stares... You decide to ignore it since people of this village are quite well-off compared to your homeland." << endl;
			enterPause();
			cout << "Stranger: You! Stop right there!" << endl;
			enterPause();
			cout << "You turn around a see a man on horseback with a sword riding towards you quickly." << endl;
			enterPause();
			cout << "You: What's going on, sir?" << endl;
			enterPause();
			cout << "You notice in the distance another man joining him... You think to yourself *This cannot be good...*" << endl;
			enterPause();
			cout << "Stranger: You are not allowed to be here. You are not to be trusted. You could be one of those monster-bringing folks that wish for the monsters to rule these lands and allow them into our village at nightfall." << endl;
			enterPause();
			cout << "Stranger 2: We are going to ask you to leave, kindly... We don't take well to strangers showing up uninvited." << endl;
			enterPause();
			cout << "Both of the men point their swords at you and circle you on their horses." << endl;
			enterPause();
			cout << "You: Look, I mean no trouble, I am not one of those people, I've lost kin to a goblin before... If I head out now, dusk will soon fall and the lands surrounding are infested with monsters during the nighttime." << endl;
			enterPause();
			cout << "Stranger: Leave now or we will make you." << endl;
			enterPause();
			cout << "The men start to enclose on you..." << endl;
			enterPause();
			cout << "You: Alright, alright, I'll grab some water and leave." << endl;
			enterPause();
			cout << "You throw your hands up and slowly back away from the men, looking to head towards a stand in the market." << endl;
			enterPause();
			cout << "Stranger 2: You should've listened..." << endl;
			enterPause();
			cout << "The men start to charge after you on horseback with all intentions of killing. You begin to run to grab a flask off a stand and head straight for your horse." << endl;
			enterPause();
			cout << "When running to your horse past a home, you notice a sword laying against the house. You grab the sword, jump on your horse, and ride out of the gates of town." << endl;
			enterPause();
			cout << "You turn around after passing through the gate and notice the men are still chasing you," << endl;
			enterPause();
			cout << "You: Okayyyy... Looks like they want a fight..." << endl;
			enterPause();
			cout << "You continue to ride as fast as you can, weaving through trees while the men are still hot on your trail. You decide to try to escape without a fight." << endl;
			enterPause();
			cout << "You grab a branch and lower the branch to the ground, covering the tracks you leave behind." << endl;
			enterPause();
			cout << "Ahead there is a giant, 5 foot deep ditch and you decide head full speed at the ditch. As soon as you hit the ditch line you quickly do a 180 turn and start heading north again." << endl;
			enterPause();
			cout << "You look over your shoulder and see the men couldn't react in enough time and ended up getting thrown off their horses into the ditch." << endl;
			enterPause();
			cout << "You: Haha, looks like we did a good job, eh?" << endl;
			enterPause();
			cout << "You continue to ride through the sunset and head northeast towards London to make it to safety before night fall." << endl;
			enterPause();
			cout << "The lands around East Anglia are notorious for the monsters that flock at night. Comparitively, Wessex would be the safest and most welcoming choice but London is a closer bet." << endl;
			enterPause();
			cout << "As you race against the nightfall, you find yourself hearing the screeches and mumbles of monsters, echoing through the sky" << endl;
			enterPause();
			cout << "You: Five more minutes and we should be safe..." << endl;
			enterPause();
			cout << "You continue riding for about 3 minutes and begin to hear the screeches of monsters getting louder and louder..." << endl;
			enterPause();
			cout << "In the distance, you see the town of London and guards standing at the posts. " << endl;
			enterPause();
			cout << "You: Open the gates!!!" << endl;
			enterPause();
			cout << "You yell as loud as you can, hoping the guards notice you. You see a guard turn in your direction and quickly give signal to open the gates for you." << endl;
			enterPause();
			cout << "You push your horse to go faster than ever, trying to avoid conflict with monsters due to the low energy you have from not eating in the past 8 hours." << endl;
			enterPause();
			cout << "Guard: Hurry it up! Don't look back now but there are several beasts chasing you!" << endl;
			enterPause();
			cout << "You swiftly ride along side the stone walls of the village and finally reach the gate and as soon as your horse steps foot in, the guards begin to close the gates again." << endl;
			enterPause();
			cout << "You quickly jump off your horse and turn around in disbelief." << endl;
			enterPause();
			cout << "The gate is almost closed but the arm of a beast gets stuck in the gate, screeching loud enough to wake the town." << endl;
			enterPause();
			cout << "You act fast and grab an axe from a guard, removing the beasts arm in one, swift swing." << endl;
			enterPause();
			cout << "Guard: That was close, kid. What were you doing out in this area during the nighttime anyway?" << endl;
			enterPause();
			cout << "You: Long story short, East Anglia is not friendly..." << endl;
			enterPause();
			cout << "The guards all laugh as you catch your breath. You hand the axe back to the guard and shake his hand." << endl;
			enterPause();
			cout << "Guard 2: Just know you're welcome here, we are not like the people of East Anglia, they're stuck up their own arses." << endl;
			enterPause();
			cout << "You laugh and decide to head towards a cabin made for travelers." << endl;
			enterPause();
			cout << "Guard: Hey kid, take this!" << endl;
			enterPause();
			cout << "The guard throws you a sack. You turn around and catch the sack and continue walking towards the cabin." << endl;
			enterPause();
			cout << "You: Thank you! Your hospitality is much appreciated!" << endl;
			enterPause();
			cout << "After arriving at the cabin, you lay down on the bed and open the sack which is filled with foods and beverages." << endl;
			enterPause();
			cout << "You: What a night..." << endl;
			enterPause();
			cout << "You begin to snack on the food the guard gave you and settle into bed in preparation of joining the guards in the morning to slay monsters, for repayment of their kindness..." << endl;
			enterPause();
		}
		else if (trail == 3) {
			cout << "In the distance, you spot an opening to a cave, nestled in a hill." << endl;
			enterPause();
			cout << "You: Well, I've come this far so I might as well venture in..." << endl;
			enterPause();
			cout << "You decide to enter into the dark, damp cave... You can hear the sound of bats squeaking, as well as droplets of water falling from the stone above." << endl;
			enterPause();
			cout << "You: This cave is quite eerie... But who knows, maybe I can find something of importance in here." << endl;
			enterPause();
			cout << "As you walk deeper into the cave, it becomes harder to see as the light of day diminishes." << endl;
			enterPause();
			cout << "Between the bats flying around and the sound of still water, it looks like the cave has no end." << endl;
			enterPause();
			cout << "You walk for about a half a mile longer and see a fire in the distance... It seems like a torch proped against the cave walls." << endl;
			enterPause();
			cout << "You grab the torch and start to wonder..." << endl;
			enterPause();
			cout << "You: Hello?! Is anyone here?!" << endl;
			enterPause();
			cout << "In the distance you hear a voice call out to you... " << endl;
			enterPause();
			cout << "Stranger: Please! Help!" << endl;
			enterPause();
			cout << "You follow the echos of the voice calling out to you." << endl;
			enterPause();
			cout << "You see an older man, who seems to be injured and worried out of his mind." << endl;
			enterPause();
			cout << "You approach the man. Upon examining the situation, you notice the man has bruising along his body and a nasty gash on his forearm that seems to be fresh." << endl;
			enterPause();
			cout << "You: Are you okay sir?! What happened?!" << endl;
			enterPause();
			cout << "Old Man: I am fine child, I was attacked by a monster a week ago and have been staying in this cave since, I am afraid of what will happen if I go outside alone so I am living off of my belongings here." << endl;
			enterPause();
			cout << "Old Man: I was traveling back to York from work and when night fell, I was attacked by a monster out of nowhere. I managed to escape into this cave after fighting for my life but I am scared to leave this place alone." << endl;
			enterPause();
			cout << "You: I am sorry to hear that. Here, let me help you." << endl;
			enterPause();
			cout << "You reach into your bag and pull out your medical kit, pouring alcohol on the mans forearm and wrapping it with gauze." << endl;
			enterPause();
			cout << "Old Man: If you do not mind, would I be able to join your side until I reach the road to York?" << endl;
			enterPause();
			cout << "You: Of course I will help you sir." << endl;
			enterPause();
			cout << "Old Man: Thank you child. Your escort will not go unpaid." << endl;
			enterPause();
			cout << "You: If you're ready to hit the road, I am as well." << endl;
			enterPause();
			cout << "Old Man: Of course, I will try not to make our trips longer than needed." << endl;
			enterPause();
			cout << "As the sun starts to set on the horizon, you all head out of the cave and follow the road to York." << endl;
			enterPause();
			cout << "The bright yellow sun is now turning to a deep orange, painting the skies with a beautiful pale pinks and oranges..." << endl;
			enterPause();
			cout << "The trip will take roughly 6 hours on foot from the cave, but the presence of each other allows time to fly by." << endl;
			enterPause();
			cout << "You both learn a lot about one another on your travels. The old man's name is Alfred, at a grand age of 65 years old, though injured, he act's like he is still in his 40's." << endl;
			enterPause();
			cout << "You also learned that Alfred lives in York and has his whole life, along with his wife and two sons. They seem to be a wonderful family from what you've gathered." << endl;
			enterPause();
			cout << "After traveling far with few breaks, you all finally come across York." << endl;
			enterPause();
			cout << "You decide to join Alfred from some brunch and chat a while longer before parting ways." << endl;
			enterPause();
			cout << "Alfred: You've been an amazing friend to me, child... No one has shown me the kindness you have today, that is why I would like to give you this..." << endl;
			enterPause();
			cout << "Alfred reaches in his bag and hands you a box." << endl;
			enterPause();
			cout << "You: No Alfred, I can't take this from you. You owe me nothing." << endl;
			enterPause();
			cout << "Alfred: But I do, child. Please, take it." << endl;
			enterPause();
			cout << "You take the box and open it, the contents inside contain of a pendant necklace that seems to be like the one's warriors wear... You also find a map inside, along with a small amount of gold." << endl;
			enterPause();
			cout << "You: Alfred... Were you-" << endl;
			enterPause();
			cout << "Alfred: Upon a time, yes, I was a warrior like you child but to a greater degree. But as time passes, I have deemed it unwise of me to continue fighting monsters as I would just be a burden." << endl;
			enterPause();
			cout << "You: Thank you sir..." << endl;
			enterPause();
			cout << "Alfred: Of course. Now please, continue your journey to help save us from these monsters, but do a better job than I ever could've. I will be rooting for you and hope to hear from you again." << endl;
			enterPause();
			cout << "You: I will sir. Thank you again for everything. I will do everything in my power to make every single village a safe place again." << endl;
			enterPause();
			cout << "After saying your goodbyes to one another, you pack up your things into your bag and continue on foot to Mercia to help rid of the monsters cuasing chaos in their towns..." << endl;
			enterPause();
		}
		else if (trail == 4) {
			cout << "You wake up to a loud pounding on your door at your home in Eoferwic." << endl;
			enterPause();
			cout << "You: I wish these kids would find something worth their time instead of pranking me..." << endl;
			enterPause();
			cout << "You get out of bed, throw on the first thing you see, and walk to the door to answer it." << endl;
			enterPause();
			cout << "You rub your eyes, open the door, and before you can say a word..." << endl;
			enterPause();
			cout << "Random Person: Hello, you are to be summoned to Lincoln immidiately, there is an issue that the King would like to discuss with you. I have rounded up horses for us to ride on." << endl;
			enterPause();
			cout << "Your eyes finally come to focus and you realize- Clovis?!" << endl;
			enterPause();
			cout << "You: Good morning to you too, Clovis." << endl;
			enterPause();
			cout << "Clovis laughs and gives you a hug. It has been roughly 9 months since the last time you saw her. She was sent off to East Anglia to help fight off the monsters that are invading the lands there." << endl;
			enterPause();
			cout << "You: It has been so long, how have you been?" << endl;
			enterPause();
			cout << "Clovis: Pretty fine, how about yourself?" << endl;
			enterPause();
			cout << "You: There have been better times." << endl;
			enterPause();
			cout << "You both laugh and walk to the kitchen table." << endl;
			enterPause();
			cout << "You: Would you join me for some ale and reminisce on old times? Unless you're in a rush to get yourself back into the action, that is." << endl;
			enterPause();
			cout << "Clovis: I can fit you in my schedule, I think, since I will be living here with you until I find my own home here in Eoferwic." << endl;
			enterPause();
			cout << "You both sip on ale and snack on bread with butter while chatting about your childhoods together." << endl;
			enterPause();
			cout << "Years ago, Clovis and I were both orphans here in Eoferwic. Both of our parents had died when we were young children. She has been by my side since I was 2 years old. We had grew up together..." << endl;
			enterPause();
			cout << "She's been my best friend since I can remember... From the times we would sneak out past sunset to play hide and seek to the times I would accidently break something or forget to do a chore and she would take the fall." << endl;
			enterPause();
			cout << "Clovis has been all I've ever known. When father came to the orphanage, he originally fell in love with Clovis, but after spending years growing up beside one another, she told father she would not leave without me." << endl;
			enterPause();
			cout << "From that day forward, Clovis being 14 and I being 11, we grew up in a broken household together... Father had a severe drinking problem, he would drink ale at bars everynight and leave us by ourselves." << endl;
			enterPause();
			cout << "Father doesn't like to admit it but his drinking problem stems from losing his first blood son. His son did not die, but he left with his mother when father and her had split." << endl;
			enterPause();
			cout << "I knew the son for a while, his name was Bancroft and he was very kind to Clovis and I. Sometimes I wish he had kept in contact with us but once he had left, he forgot we all existed." << endl;
			enterPause();
			cout << "While father and Bancroft's mother were still together, us kids would have sleepless nights. There was constant arguing, threats, throwing of objects, and more often than not, talks of leaving one another." << endl;
			enterPause();
			cout << "While I hate to admit it, they were not meant for one another, and it took them 5 years to realize such... When the time finally came, Clovis and I were left with father who soon after, was never around due to his addiction." << endl;
			enterPause();
			cout << "From my understanding, Bancroft and his mother traveled to Scotland to start fresh. I still wonder if they're doing well from time to time..." << endl;
			enterPause();
			cout << "After they departed, Clovis had become a mother like figure to me, though being only 3 years older than I, she took on the chores around the household so that I could focus on school." << endl;
			enterPause();
			cout << "Whenever we had free time and father wasn't around, we would walk the town and offer food to those who needed it. Father never caught on that we were giving away food for free, but he had enough wealth as is to keep the pantry stocked while he was home." << endl;
			enterPause();
			cout << "Sometimes I wish that the day never came, that is, when Clovis heard of the news about monsters first being spotted outside of Wessex. She took it upon herself to start training to become a warrior." << endl;
			enterPause();
			cout << "When I heard the news that she would go away for training and then off to Wessex to fight, I didn't want to believe it. The very next day, I had woken up and she was gone, leaving me a heartfelt letter, promising her return." << endl;
			enterPause();
			cout << "She was 20 when she had left me, a 17 year old, to deal with our drunken father alone. Coincendentally, in that same night, father brought someone home. That was Uhtred, the younger brother that he had kept a secret from everyone." << endl;
			enterPause();
			cout << "I still ponder as to if that's the reason father and Bancroft's mother had always fought, maybe she had knew and that's what sparked all their problems..." << endl;
			enterPause();
			cout << "Either way, I am glad that I at least have Clovis back in my life... I didn't have anyone that would stick by my side like she would. Sure, I resented her for a little while after she left me but her reasoning was to keep the world safe for me..." << endl;
			enterPause();
			cout << "You: Hey Clovis, I'm glad you're here..." << endl;
			enterPause();
			cout << "You get up and hug her, smiling ear to ear." << endl;
			enterPause();
			cout << "Clovis: I could say the same for you. You're my family, forever." << endl;
			enterPause();
			cout << "You: Always." << endl;
			enterPause();
		}
		else {
			cout << "Often finding yourself in situations you wouldn't have imagined, you think to yourself *why me?*" << endl;
			enterPause();
			cout << "Today's the day you offered to help a small group of townspeople from Mercia with transporting goods via boat to Scotland." << endl;
			enterPause();
			cout << "You wake up to the sound of birds chirping and the sun beaming through the crack in the curtains." << endl;
			enterPause();
			cout << "After taking a while to enjoy the peace, have some breakfast, and prepare for the day. You make sure to pack your weapon, a sack full of food and flasks of water, and a map." << endl;
			enterPause();
			cout << "While heading to a free horse, you notice all the people in town gathering. Today's the town festival which everyone looks forward to every year." << endl;
			enterPause();
			cout << "You: If only I had knew it was today ahead of time... Oh well." << endl;
			enterPause();
			cout << "You hop on your favorite horse in town and head to Mercia, which will take roughly two hours to get to." << endl;
			enterPause();
			cout << "Upon arrival in Mercia, you put the horse in a stable and head over to the waterfront by foot." << endl;
			enterPause();
			cout << "Townsman: Hey " << player->toString() << " over here!" << endl;
			enterPause();
			cout << "You nod your head at the man and start to jog over to the boat. The water is a deep, clear blue, washing upon the shoreline. The skies are as clear as ever. It seems this trip won't be too bad afterall." << endl;
			enterPause();
			cout << "You: Glad I made it in time to help you all!" << endl;
			enterPause();
			cout << "You grab a container of goods from shore and begin to help load the rest of the goods onto the boat. After roughly 10 minutes of loading, it seems the crew's ready to set sail." << endl;
			enterPause();
			cout << "Townsman2: Is this your first time on a boat? If so, try not to get sea sick!" << endl;
			enterPause();
			cout << "The man laughs so hard it seems his laughter has turned into a workout." << endl;
			enterPause();
			cout << "You: When I was younger I had traveled by boat but this is indeed my first time in years. Hopefully I'll hang in!" << endl;
			enterPause();
			cout << "Three men reel in the anchor and the captain takes his seat. The boat begins to slowly drift away from shore." << endl;
			enterPause();
			cout << "Townsman2: My names Finn, by the way." << endl;
			enterPause();
			cout << "You: Nice to meet you, Finn. About how long is the trip to Scotland?" << endl;
			enterPause();
			cout << "Finn: Roughly 8 hours by boat, that's if the sea cooperates. Seems to me like today's our lucky day with nature, eh? Clear skies, calm waters-" << endl;
			enterPause();
			cout << "You: Sounds good enough for me." << endl;
			enterPause();
			cout << "You both laugh and chat for a while, it seems as though the whole trip went by fast after getting to know one another but in reality, only 5 hours have passed." << endl;
			enterPause();
			cout << "You: Hey Finn, it looks like there's a storm coming ahead... The clouds have turned dark blue and the water seems to be getting rigid." << endl;
			enterPause();
			cout << "Finn: No worries, the captain has made several trips through storms tougher than you can imagine, plus this boats about the best gold can buy!" << endl;
			enterPause();
			cout << "Finn's words put your mind to ease a bit. But you can't help but think about the what-if's..." << endl;
			enterPause();
			cout << "You: Hey Finn, I think I'll take a nap through the storm, I don't want to get sea sick..." << endl;
			enterPause();
			cout << "Finn: Sounds good, there should be open bunks inside, I'll wake you up when we hit land." << endl;
			enterPause();
			cout << "You walk inside to a room with an open bunk and hop in bed, trying to calm yourself down enough to sleep. After battling your thoughts for a good 15 minutes, you finally can get some rest..." << endl;
			enterPause();
			cout << "Hours go by and Scotland is on the horizon, being 20 minutes from land." << endl;
			enterPause();
			cout << "All of the sudden, Finn rushes into your room and starts shaking you violently." << endl;
			enterPause();
			cout << "Finn: Wake up! The boat is flooding quickly and we need to get to a lifeboat before they're all gone!" << endl;
			enterPause();
			cout << "You jump out of bed frantically, grabbing your belongings and running after Finn." << endl;
			enterPause();
			cout << "Finn: It seems as though a sea monster has damaged the bottom of our ship and if we're lucky, it will continue to focus on this ship while we escape!" << endl;
			enterPause();
			cout << "You: And what if it doesn't!?" << endl;
			enterPause();
			cout << "Your heart starts racing faster than ever, is it the adrenaline? The fear of death? The fact that sea monsters exist? Or due to the possibility of no boats being left?" << endl;
			enterPause();
			cout << "Finn: Less yelling, more running!" << endl;
			enterPause();
			cout << "You and Finn quickly run through the boat, trying to get to the second floor at the back of the boat, everyone's in fight or flight mode..." << endl;
			enterPause();
			cout << "After a few minutes of running, you finally reach the lifeboats, only to realize, 5 out of the 6 are gone and people are fighting over the last one." << endl;
			enterPause();
			cout << "Finn: Hey! Let us have that boat, it's only fair! We're both warriors!" << endl;
			enterPause();
			cout << "You watch as everyone ignores Finn and begin to fight one another for the boat." << endl;
			enterPause();
			cout << "You: We might be doomed..." << endl;
			enterPause();
			cout << "You both stand back and watch people throw one another overboard in attempt to get the last boat. You both head to the upper level of the ship and sit on the deck." << endl;
			enterPause();
			cout << "Finn: This is it.. Isn't it?" << endl;
			enterPause();
			cout << "You can't bring yourself to acknowledge Finn, all you can think about is how painful drowning is..." << endl;
			enterPause();
			cout << "The boat begins to sink more and more, the water is now nearly filling up the second floor in a matter of 10 minutes." << endl;
			enterPause();
			cout << "You close your eyes and begin to reflect on the life you lived. What you could've done different and should've..." << endl;
			enterPause();
			cout << "Unknown: Hey!! Is anyone still on that boat?!?!" << endl;
			enterPause();
			cout << "You hear a mans voice call loudly from what sounds like in the sea. You get up and look over the railings..." << endl;
			enterPause();
			cout << "Unknown: Hey! Jump across to my boat! I was out fishing and seen this boat in the distance, I can bring you to land!" << endl;
			enterPause();
			cout << "You turn to Finn who's already staring into your soul, nod your head, walk backwards, and jump the railing with Finn following full speed behind you." << endl;
			enterPause();
			cout << "You both hit the deck hard, still in shock and fearful of what could've happened..." << endl;
			enterPause();
			cout << "Unknown: You two, grab whatever you need from my supplies, catch your breath, get some food, and relax. I'll get us to land in no time and ask questions later because I have never seen something like what I just witnessed in years!" << endl;
			enterPause();
			cout << "You and Finn both drag yourselves off the deck and take the mans advice. Never did you think you would escape death, nor that you would be so close to it..." << endl;
			enterPause();
		}
	}
};

// Path class 
class Path {
public:

	Player* player;
	int encounter;

	// Constructor with Player pointer
	Path(Player* p) {
	
		player = p;
	
	}

	// move method to move the player and simulate an encounter
	int move() {
		
		// Randomize encounter to be from 1 - 100
		encounter = rand() % 99 + 1;

		// If encounter is 50%
		if (encounter <= 50) {
		
			// Do nothing
			return 1;
		
		}
		// If encounter is 20% passed 50%
		else if (encounter <= 70) {
		
			// Create an encounter and call its method
			Encounter e = Encounter(player, rand() % 4);
			e.callTrail();
			return 1;
		
		}
		// If encounter is 30% passed 70%
		else {
		
			// Create a combat encounter
			combat(player);
			return 1;
		
		}
	
	}
};

#endif