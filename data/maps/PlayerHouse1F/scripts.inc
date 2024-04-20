PlayerHouse1F_MapScripts::
	.byte 0


Fareward_PlayerHouse1F_EventScript_ParentsRoom::
# 6 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 7 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayersHouse1F_Text_ParentsRoom
# 8 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return


Fareward_PlayerHouse1F_EventScript_ArtPiece::
# 12 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 13 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_ArtPiece
# 14 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return


Fareward_PlayerHouse1F_EventScript_SmallBookshelf::
# 18 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 19 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_SmallBookshelf
# 20 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return


Fareward_PlayerHouse1F_EventScript_Bookshelf::
# 24 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 25 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_Bookshelf
# 26 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return


Fareward_PlayersHouse1F_Text_ParentsRoom::
# 29 "data/maps/PlayerHouse1F/scripts.pory"
	.string "The door to Mom and Dad's room.\n"
	.string "I shouldn't go in without asking.$"

Fareward_PlayerHouse1F_Text_ArtPiece::
# 34 "data/maps/PlayerHouse1F/scripts.pory"
	.string "A painting made by a famous artist from\n"
	.string "the Kalos region.\p"
	.string "I have trouble pronouncing her name.$"

Fareward_PlayerHouse1F_Text_SmallBookshelf::
# 40 "data/maps/PlayerHouse1F/scripts.pory"
	.string "The bookshelf is neat and organized,\n"
	.string "just the way Dad likes it.$"

Fareward_PlayerHouse1F_Text_Bookshelf::
# 45 "data/maps/PlayerHouse1F/scripts.pory"
	.string "There's mostly books on rare pokémon\n"
	.string "species and battle strategies, with a\l"
	.string "few sci-fi and romance novels mixed in.$"
