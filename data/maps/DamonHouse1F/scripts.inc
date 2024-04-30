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


DamonHouse1F_EventScript_Basement::
# 12 "data/maps/DamonHouse1F/scripts.pory"
	lockall
# 13 "data/maps/DamonHouse1F/scripts.pory"
	msgbox DamonHouse1F_Text_Basement
# 14 "data/maps/DamonHouse1F/scripts.pory"
	closemessage
# 15 "data/maps/DamonHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DamonHouse1F_Movement_Basement
# 16 "data/maps/DamonHouse1F/scripts.pory"
	waitmovement 0
# 17 "data/maps/DamonHouse1F/scripts.pory"
	releaseall
	return


DamonHouse1F_EventScript_SistersRoom::
# 21 "data/maps/DamonHouse1F/scripts.pory"
	lockall
# 22 "data/maps/DamonHouse1F/scripts.pory"
	msgbox DamonHouse1F_Text_SistersRoom
# 23 "data/maps/DamonHouse1F/scripts.pory"
	releaseall
	return


DamonHouse1F_EventScript_ParentsRoom::
# 27 "data/maps/DamonHouse1F/scripts.pory"
	lockall
# 28 "data/maps/DamonHouse1F/scripts.pory"
	msgbox DamonHouse1F_Text_ParentsRoom
# 29 "data/maps/DamonHouse1F/scripts.pory"
	releaseall
	return


# 51 "data/maps/DamonHouse1F/scripts.pory"
DamonHouse1F_Movement_Basement:
# 52 "data/maps/DamonHouse1F/scripts.pory"
	walk_down
	step_end

DamonHouse1F_Text_Painting::
# 32 "data/maps/DamonHouse1F/scripts.pory"
	.string "What a beautiful landscape painting!$"

DamonHouse1F_Text_Basement::
# 36 "data/maps/DamonHouse1F/scripts.pory"
	.string "I shouldn't go into the basement without\n"
	.string "Damon's parent's permission.$"

DamonHouse1F_Text_SistersRoom::
# 41 "data/maps/DamonHouse1F/scripts.pory"
	.string "Keesha's room. I shouldn't go in without\n"
	.string "asking first.$"

DamonHouse1F_Text_ParentsRoom::
# 46 "data/maps/DamonHouse1F/scripts.pory"
	.string "Damon's parent's room. I should ask\n"
	.string "permission before going in.$"
