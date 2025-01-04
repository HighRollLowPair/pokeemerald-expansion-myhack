RemusPokemonCenter_MapScripts::
	.byte 0


RemusPokemonCenter_EventScript_Clerk::
# 6 "data/maps/RemusPokemonCenter/scripts.pory"
	lock
# 7 "data/maps/RemusPokemonCenter/scripts.pory"
	faceplayer
# 8 "data/maps/RemusPokemonCenter/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/RemusPokemonCenter/scripts.pory"
	waitmessage
# 10 "data/maps/RemusPokemonCenter/scripts.pory"
	pokemart Remus_Mart_Pokemart
# 11 "data/maps/RemusPokemonCenter/scripts.pory"
	message gText_PleaseComeAgain
# 12 "data/maps/RemusPokemonCenter/scripts.pory"
	waitmessage
# 13 "data/maps/RemusPokemonCenter/scripts.pory"
	waitbuttonpress
# 14 "data/maps/RemusPokemonCenter/scripts.pory"
	closemessage
# 15 "data/maps/RemusPokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 16 "data/maps/RemusPokemonCenter/scripts.pory"
	waitmovement 0
# 17 "data/maps/RemusPokemonCenter/scripts.pory"
	release
	return


	.align 2
# 20 "data/maps/RemusPokemonCenter/scripts.pory"
Remus_Mart_Pokemart:
# 21 "data/maps/RemusPokemonCenter/scripts.pory"
	.2byte ITEM_POKE_BALL
# 22 "data/maps/RemusPokemonCenter/scripts.pory"
	.2byte ITEM_POTION
	.2byte ITEM_NONE
