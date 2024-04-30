Fareward_MapScripts::
# 2 "data/maps/Fareward/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Fareward_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/Fareward/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Fareward_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Fareward_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Fareward/scripts.pory"
	map_script_2 VAR_FAREWARD_INTRO_STATE, 5, Fareward_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

Fareward_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/Fareward/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return

Fareward_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Fareward/scripts.pory"
	map_script_2 VAR_FAREWARD_INTRO_STATE, 3, Fareward_EventScript_Damon
# 9 "data/maps/Fareward/scripts.pory"
	map_script_2 VAR_FAREWARD_INTRO_STATE, 5, Fareward_EventScript_GetStarter
	.2byte 0


Fareward_EventScript_Damon::
# 14 "data/maps/Fareward/scripts.pory"
	lockall
# 15 "data/maps/Fareward/scripts.pory"
	addobject 1
# 16 "data/maps/Fareward/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 17 "data/maps/Fareward/scripts.pory"
	applymovement 1, Fareward_Movement_Damon1
# 18 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 19 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Damon1
# 20 "data/maps/Fareward/scripts.pory"
	closemessage
# 21 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 22 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 23 "data/maps/Fareward/scripts.pory"
	applymovement 1, Fareward_Movement_Damon2
# 24 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 25 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Damon2
# 26 "data/maps/Fareward/scripts.pory"
	closemessage
# 27 "data/maps/Fareward/scripts.pory"
	applymovement 1, Fareward_Movement_Damon3
# 28 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 29 "data/maps/Fareward/scripts.pory"
	removeobject 1
# 30 "data/maps/Fareward/scripts.pory"
	savebgm MUS_DUMMY
# 31 "data/maps/Fareward/scripts.pory"
	fadedefaultbgm
# 32 "data/maps/Fareward/scripts.pory"
	delay 10
# 33 "data/maps/Fareward/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 4
# 34 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_CONVO_IN_PLAYER_HOUSE
# 35 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_MOM_AT_CUPBOARD
# 36 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_DAD_DEFAULT
# 37 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_GetStarter::
# 41 "data/maps/Fareward/scripts.pory"
	lockall
# 42 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter1
# 43 "data/maps/Fareward/scripts.pory"
	closemessage
# 44 "data/maps/Fareward/scripts.pory"
	playse SE_BIKE_HOP
# 45 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_JumpInPlace_Up
# 46 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 47 "data/maps/Fareward/scripts.pory"
	playse SE_BIKE_HOP
# 48 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_JumpInPlace_Up
# 49 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 50 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter2
# 51 "data/maps/Fareward/scripts.pory"
	closemessage
# 52 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 53 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 54 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 55 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 56 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter3
# 57 "data/maps/Fareward/scripts.pory"
	closemessage
# 58 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 59 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 60 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 61 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 62 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter4
# 63 "data/maps/Fareward/scripts.pory"
	closemessage
# 64 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter5
# 65 "data/maps/Fareward/scripts.pory"
	closemessage
# 66 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter
# 67 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 68 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter6
# 69 "data/maps/Fareward/scripts.pory"
	closemessage
# 70 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter7
# 71 "data/maps/Fareward/scripts.pory"
	releaseall
	return


# 128 "data/maps/Fareward/scripts.pory"
Fareward_Movement_Damon1:
# 129 "data/maps/Fareward/scripts.pory"
	walk_down
# 129 "data/maps/Fareward/scripts.pory"
	walk_down
# 129 "data/maps/Fareward/scripts.pory"
	walk_down
# 129 "data/maps/Fareward/scripts.pory"
	walk_down
# 129 "data/maps/Fareward/scripts.pory"
	walk_down
# 129 "data/maps/Fareward/scripts.pory"
	walk_down
# 130 "data/maps/Fareward/scripts.pory"
	delay_8
# 131 "data/maps/Fareward/scripts.pory"
	face_right
	step_end

# 134 "data/maps/Fareward/scripts.pory"
Fareward_Movement_Damon2:
# 135 "data/maps/Fareward/scripts.pory"
	walk_right
# 135 "data/maps/Fareward/scripts.pory"
	walk_right
# 135 "data/maps/Fareward/scripts.pory"
	walk_right
# 135 "data/maps/Fareward/scripts.pory"
	walk_right
	step_end

# 138 "data/maps/Fareward/scripts.pory"
Fareward_Movement_Damon3:
# 139 "data/maps/Fareward/scripts.pory"
	walk_left
# 139 "data/maps/Fareward/scripts.pory"
	walk_left
# 139 "data/maps/Fareward/scripts.pory"
	walk_left
# 139 "data/maps/Fareward/scripts.pory"
	walk_left
# 139 "data/maps/Fareward/scripts.pory"
	walk_left
# 139 "data/maps/Fareward/scripts.pory"
	walk_left
	step_end

# 142 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter:
# 143 "data/maps/Fareward/scripts.pory"
	face_right
# 144 "data/maps/Fareward/scripts.pory"
	delay_16
# 145 "data/maps/Fareward/scripts.pory"
	face_up
# 146 "data/maps/Fareward/scripts.pory"
	delay_16
# 147 "data/maps/Fareward/scripts.pory"
	face_right
# 148 "data/maps/Fareward/scripts.pory"
	delay_16
# 148 "data/maps/Fareward/scripts.pory"
	delay_16
# 149 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

Fareward_Text_Damon1::
# 74 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh, hey {PLAYER}!$"

Fareward_Text_Damon2::
# 78 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You excited to finally get your\n"
	.string "very own pokémon? I know I am!\l"
	.string "I wonder what pokémon we'll get to\l"
	.string "pick from. I hope there's a swablu!\l"
	.string "Well, let me know if you see Professor\l"
	.string "Hemlock before I do, ok? I gotta go\l"
	.string "take care of some stuff at home right\l"
	.string "now, though, so I'll see ya!$"

Fareward_Text_GetStarter1::
# 89 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Alright, you three.\n"
	.string "Are you ready to choose your first\l"
	.string "pokémon?$"

Fareward_Text_GetStarter2::
# 95 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yes, yes, yes! I'm so ready!$"

Fareward_Text_GetStarter3::
# 99 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Wow, your friend sure is pumped\n"
	.string "up for this, huh?$"

Fareward_Text_GetStarter4::
# 104 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I'm glad to see how\n"
	.string "much you're looking forward to this,\l"
	.string "Damon! However, I did promise Grisha\l"
	.string "to give {PLAYER} their own pokémon\l"
	.string "quite some time ago, so I'd like them\l"
	.string "to choose first if that's alright\l"
	.string "with the two of you.$"

Fareward_Text_GetStarter5::
# 114 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Fine with me.$"

Fareward_Text_GetStarter6::
# 118 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh! Yeah, I guess that's ok.$"

Fareward_Text_GetStarter7::
# 122 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ok then! {PLAYER},\n"
	.string "go ahead and choose one of the three\l"
	.string "pokémon from my bag.$"
