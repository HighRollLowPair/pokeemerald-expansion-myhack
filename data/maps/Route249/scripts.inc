Route249_MapScripts::
	.byte 0


Route249_EventScript_Boy::
# 6 "data/maps/Route249/scripts.pory"
	msgbox Route249_Text_Boy, MSGBOX_NPC
	return


Route249_EventScript_Girl::
# 10 "data/maps/Route249/scripts.pory"
	msgbox Route249_Text_Girl, MSGBOX_NPC
	return


Route249_EventScript_Azurill::
# 14 "data/maps/Route249/scripts.pory"
	lock
# 15 "data/maps/Route249/scripts.pory"
	faceplayer
# 16 "data/maps/Route249/scripts.pory"
	waitse
# 17 "data/maps/Route249/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 18 "data/maps/Route249/scripts.pory"
	msgbox Route249_Text_Azurill
# 19 "data/maps/Route249/scripts.pory"
	waitmoncry
# 20 "data/maps/Route249/scripts.pory"
	release
	return


Route249_EventScript_Dylan::
# 24 "data/maps/Route249/scripts.pory"
	trainerbattle_double TRAINER_DYLAN_1, Route249_Text_DylanIntro, Route249_Text_DylanDefeated, gText_NotEnoughMons
# 25 "data/maps/Route249/scripts.pory"
	msgbox Route249_Text_DylanPostBattle
# 26 "data/maps/Route249/scripts.pory"
	releaseall
	return


Route249_EventScript_Abigail::
# 30 "data/maps/Route249/scripts.pory"
	trainerbattle_double TRAINER_ABIGAIL_1, Route249_Text_AbigailIntro, Route249_Text_AbigailDefeated, gText_NotEnoughMons
# 31 "data/maps/Route249/scripts.pory"
	msgbox Route249_Text_AbigailPostBattle
# 32 "data/maps/Route249/scripts.pory"
	releaseall
	return


Route249_EventScript_Sign1::
# 36 "data/maps/Route249/scripts.pory"
	msgbox Route249_Text_Sign1, MSGBOX_SIGN
	return


Route249_EventScript_Sign2::
# 40 "data/maps/Route249/scripts.pory"
	msgbox Route249_Text_Sign2, MSGBOX_SIGN
	return


Route249_Text_Boy::
# 43 "data/maps/Route249/scripts.pory"
	.string "Grassy routes like 249 may appear\n"
	.string "calm and serene, but be careful of\l"
	.string "the wild pokémon hiding in the grass!$"

Route249_Text_Girl::
# 49 "data/maps/Route249/scripts.pory"
	.string "I love taking my pokémon out to play\n"
	.string "around here. There's so much open space!$"

Route249_Text_Azurill::
# 54 "data/maps/Route249/scripts.pory"
	.string "Azurill: Pop peep!$"

Route249_Text_DylanIntro::
# 58 "data/maps/Route249/scripts.pory"
	.string "Are you a new pokémon trainer? Me too!\n"
	.string "Let's see who's better!$"

Route249_Text_DylanDefeated::
# 63 "data/maps/Route249/scripts.pory"
	.string "Dang, I guess I need to do\n"
	.string "some more training.$"

Route249_Text_DylanPostBattle::
# 68 "data/maps/Route249/scripts.pory"
	.string "Looks like you're the better trainer...\p"
	.string "For now, that is!$"

Route249_Text_AbigailIntro::
# 73 "data/maps/Route249/scripts.pory"
	.string "Headed to Remus?\n"
	.string "Let's have a battle first!$"

Route249_Text_AbigailDefeated::
# 78 "data/maps/Route249/scripts.pory"
	.string "Wow, your pokémon are strong!$"

Route249_Text_AbigailPostBattle::
# 82 "data/maps/Route249/scripts.pory"
	.string "Let's battle again sometime, alright?$"

Route249_Text_Sign1::
# 86 "data/maps/Route249/scripts.pory"
	.string "Route 249\n"
	.string "{UP_ARROW} Fareward$"

Route249_Text_Sign2::
# 91 "data/maps/Route249/scripts.pory"
	.string "Route 249\n"
	.string "{DOWN_ARROW} Remus$"
