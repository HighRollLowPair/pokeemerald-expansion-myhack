FarewardHouse2_MapScripts::
	.byte 0


FarewardHouse2_EventScript_Woman::
# 6 "data/maps/FarewardHouse2/scripts.pory"
	msgbox FarewardHouse2_Text_Woman, MSGBOX_NPC
	return


FarewardHouse2_EventScript_Man::
# 10 "data/maps/FarewardHouse2/scripts.pory"
	lockall
# 11 "data/maps/FarewardHouse2/scripts.pory"
	msgbox FarewardHouse2_Text_Man
# 12 "data/maps/FarewardHouse2/scripts.pory"
	releaseall
	return


FarewardHouse2_Text_Woman::
# 15 "data/maps/FarewardHouse2/scripts.pory"
	.string "I wonder if Plurona's megamart has\n"
	.string "any new clothing in stock.$"

FarewardHouse2_Text_Man::
# 20 "data/maps/FarewardHouse2/scripts.pory"
	.string "I should really visit my mom in Maslock\n"
	.string "sometime soon...$"
