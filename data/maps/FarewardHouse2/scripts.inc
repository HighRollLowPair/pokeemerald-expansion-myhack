FarewardHouse2_MapScripts::
	.byte 0


FarewardHouse2_EventScript_Woman::
# 6 "data/maps/FarewardHouse2/scripts.pory"
	lockall
# 7 "data/maps/FarewardHouse2/scripts.pory"
	msgbox FarewardHouse2_Text_Woman, MSGBOX_NPC
# 8 "data/maps/FarewardHouse2/scripts.pory"
	releaseall
	return


FarewardHouse2_EventScript_Man::
# 12 "data/maps/FarewardHouse2/scripts.pory"
	lockall
# 13 "data/maps/FarewardHouse2/scripts.pory"
	msgbox FarewardHouse2_Text_Man
# 14 "data/maps/FarewardHouse2/scripts.pory"
	releaseall
	return


FarewardHouse2_Text_Woman::
# 17 "data/maps/FarewardHouse2/scripts.pory"
	.string "I wonder if Plurona's megamart has\n"
	.string "any new clothing in stock.$"

FarewardHouse2_Text_Man::
# 22 "data/maps/FarewardHouse2/scripts.pory"
	.string "I should really visit my mom in Maslock\n"
	.string "sometime soon...$"
