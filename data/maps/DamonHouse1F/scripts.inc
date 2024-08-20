DamonHouse1F_MapScripts::
	.byte 0


DamonHouse1F_EventScript_Painting::
# 6 "data/maps/DamonHouse1F/scripts.pory"
	lockall
# 7 "data/maps/DamonHouse1F/scripts.pory"
	msgbox DamonHouse1F_Text_Painting
# 8 "data/maps/DamonHouse1F/scripts.pory"
	releaseall
	return


DamonHouse1F_EventScript_ClefairyDoll::
# 12 "data/maps/DamonHouse1F/scripts.pory"
	lockall
# 13 "data/maps/DamonHouse1F/scripts.pory"
	msgbox DamonHouse1F_Text_ClefairyDoll
# 14 "data/maps/DamonHouse1F/scripts.pory"
	releaseall
	return


DamonHouse1F_EventScript_Basement::
# 18 "data/maps/DamonHouse1F/scripts.pory"
	lockall
# 19 "data/maps/DamonHouse1F/scripts.pory"
	msgbox DamonHouse1F_Text_Basement
# 20 "data/maps/DamonHouse1F/scripts.pory"
	closemessage
# 21 "data/maps/DamonHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DamonHouse1F_Movement_Basement
# 22 "data/maps/DamonHouse1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/DamonHouse1F/scripts.pory"
	releaseall
	return


DamonHouse1F_EventScript_SistersRoom::
# 27 "data/maps/DamonHouse1F/scripts.pory"
	lockall
# 28 "data/maps/DamonHouse1F/scripts.pory"
	msgbox DamonHouse1F_Text_SistersRoom
# 29 "data/maps/DamonHouse1F/scripts.pory"
	releaseall
	return


DamonHouse1F_EventScript_ParentsRoom::
# 33 "data/maps/DamonHouse1F/scripts.pory"
	lockall
# 34 "data/maps/DamonHouse1F/scripts.pory"
	msgbox DamonHouse1F_Text_ParentsRoom
# 35 "data/maps/DamonHouse1F/scripts.pory"
	releaseall
	return


DamonHouse1F_EventScript_Dad::
# 39 "data/maps/DamonHouse1F/scripts.pory"
	msgbox DamonHouse1F_Text_Dad, MSGBOX_NPC
	return


DamonHouse1F_EventScript_Sister::
# 43 "data/maps/DamonHouse1F/scripts.pory"
	msgbox DamonHouse1F_Text_Sister, MSGBOX_NPC
	return


# 81 "data/maps/DamonHouse1F/scripts.pory"
DamonHouse1F_Movement_Basement:
# 82 "data/maps/DamonHouse1F/scripts.pory"
	walk_down
	step_end

DamonHouse1F_Text_Painting::
# 46 "data/maps/DamonHouse1F/scripts.pory"
	.string "What a beautiful landscape painting!$"

DamonHouse1F_Text_ClefairyDoll::
# 50 "data/maps/DamonHouse1F/scripts.pory"
	.string "A clefairy doll. Keesha's favorite!$"

DamonHouse1F_Text_Basement::
# 54 "data/maps/DamonHouse1F/scripts.pory"
	.string "I shouldn't go into the basement without\n"
	.string "Damon's dad's permission.$"

DamonHouse1F_Text_SistersRoom::
# 59 "data/maps/DamonHouse1F/scripts.pory"
	.string "Keesha's room. I shouldn't go in without\n"
	.string "asking first.$"

DamonHouse1F_Text_ParentsRoom::
# 64 "data/maps/DamonHouse1F/scripts.pory"
	.string "Damon's dad's room. I should ask\n"
	.string "permission before going in.$"

DamonHouse1F_Text_Dad::
# 69 "data/maps/DamonHouse1F/scripts.pory"
	.string "Hey there, {PLAYER}! It's good to see you\n"
	.string "again. I trust you and Damon are still\l"
	.string "getting along well?$"

DamonHouse1F_Text_Sister::
# 75 "data/maps/DamonHouse1F/scripts.pory"
	.string "Hi, {PLAYER}! Have you seen my brother?\n"
	.string "Tell him I wanna play pokémon trainers\l"
	.string "with him, ok?$"
