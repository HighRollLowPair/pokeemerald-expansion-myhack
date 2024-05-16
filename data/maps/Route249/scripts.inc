Route249_MapScripts::
	.byte 0


Route249_EventScript_Dylan::
# 6 "data/maps/Route249/scripts.pory"
	trainerbattle_double TRAINER_DYLAN_1, Route249_Text_DylanIntro, Route249_Text_DylanDefeated, gText_NotEnoughMons
# 7 "data/maps/Route249/scripts.pory"
	msgbox Route249_Text_DylanPostBattle
# 8 "data/maps/Route249/scripts.pory"
	releaseall
	return


Route249_Text_DylanIntro::
# 11 "data/maps/Route249/scripts.pory"
	.string "Are you a new pokémon trainer? Me too!\n"
	.string "Let's see who's better!$"

Route249_Text_DylanDefeated::
# 16 "data/maps/Route249/scripts.pory"
	.string "Dang, I guess I need to do\n"
	.string "some more training.$"

Route249_Text_DylanPostBattle::
# 21 "data/maps/Route249/scripts.pory"
	.string "Looks like you're the better trainer\n"
	.string "...for now, that is!$"
