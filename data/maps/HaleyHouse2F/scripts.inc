HaleyHouse2F_MapScripts::
	.byte 0


HaleyHouse2F_EventScript_Clock::
# 6 "data/maps/HaleyHouse2F/scripts.pory"
	lockall
# 7 "data/maps/HaleyHouse2F/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 8 "data/maps/HaleyHouse2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 9 "data/maps/HaleyHouse2F/scripts.pory"
	special Special_ViewWallClock
# 10 "data/maps/HaleyHouse2F/scripts.pory"
	waitstate
# 11 "data/maps/HaleyHouse2F/scripts.pory"
	releaseall
	return


HaleyHouse2F_EventScript_GameCube::
# 15 "data/maps/HaleyHouse2F/scripts.pory"
	lockall
# 16 "data/maps/HaleyHouse2F/scripts.pory"
	msgbox HaleyHouse2F_Text_GameCube
# 17 "data/maps/HaleyHouse2F/scripts.pory"
	releaseall
	return


HaleyHouse2F_EventScript_Box::
# 21 "data/maps/HaleyHouse2F/scripts.pory"
	lockall
# 22 "data/maps/HaleyHouse2F/scripts.pory"
	msgbox HaleyHouse2F_Text_Box
# 23 "data/maps/HaleyHouse2F/scripts.pory"
	releaseall
	return


HaleyHouse2F_EventScript_Notebook::
# 27 "data/maps/HaleyHouse2F/scripts.pory"
	lockall
# 28 "data/maps/HaleyHouse2F/scripts.pory"
	msgbox HaleyHouse2F_Text_Notebook
# 29 "data/maps/HaleyHouse2F/scripts.pory"
	releaseall
	return


HaleyHouse2F_EventScript_PC::
# 33 "data/maps/HaleyHouse2F/scripts.pory"
	lockall
# 34 "data/maps/HaleyHouse2F/scripts.pory"
	msgbox HaleyHouse2F_Text_PC
# 35 "data/maps/HaleyHouse2F/scripts.pory"
	releaseall
	return


HaleyHouse2F_EventScript_Haley::
# 39 "data/maps/HaleyHouse2F/scripts.pory"
	lockall
# 40 "data/maps/HaleyHouse2F/scripts.pory"
	msgbox HaleyHouse2F_Text_Haley
# 41 "data/maps/HaleyHouse2F/scripts.pory"
	releaseall
	return


HaleyHouse2F_Text_GameCube::
# 44 "data/maps/HaleyHouse2F/scripts.pory"
	.string "A Nintendo GameCube. This one is orange!$"

HaleyHouse2F_Text_Box::
# 48 "data/maps/HaleyHouse2F/scripts.pory"
	.string "Various books and magazines can be\n"
	.string "seen through the open top.$"

HaleyHouse2F_Text_Notebook::
# 53 "data/maps/HaleyHouse2F/scripts.pory"
	.string "The cover says 'My Diary.' I probably\n"
	.string "shouldn't look through it.$"

HaleyHouse2F_Text_PC::
# 58 "data/maps/HaleyHouse2F/scripts.pory"
	.string "I shouldn't use Haley's computer\n"
	.string "without her permission.$"

HaleyHouse2F_Text_Haley::
# 63 "data/maps/HaleyHouse2F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Now where did I put\n"
	.string "those repels...?$"
