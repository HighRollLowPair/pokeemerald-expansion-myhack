Fareward_MapScripts::
# 2 "data/maps/Fareward/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Fareward_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 10 "data/maps/Fareward/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Fareward_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Fareward_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Fareward/scripts.pory"
	map_script_2 VAR_FAREWARD_INTRO_STATE, 3, Fareward_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
# 6 "data/maps/Fareward/scripts.pory"
	map_script_2 VAR_FAREWARD_INTRO_STATE, 5, Fareward_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1
	.2byte 0

Fareward_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

Fareward_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1:
# 7 "data/maps/Fareward/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return

Fareward_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/Fareward/scripts.pory"
	map_script_2 VAR_FAREWARD_INTRO_STATE, 3, Fareward_EventScript_Damon
# 12 "data/maps/Fareward/scripts.pory"
	map_script_2 VAR_FAREWARD_INTRO_STATE, 5, Fareward_EventScript_GetStarter
	.2byte 0


Fareward_EventScript_Damon::
# 17 "data/maps/Fareward/scripts.pory"
	lockall
# 18 "data/maps/Fareward/scripts.pory"
	addobject 1
# 19 "data/maps/Fareward/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 20 "data/maps/Fareward/scripts.pory"
	applymovement 1, Fareward_Movement_Damon1
# 21 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 22 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Damon1
# 23 "data/maps/Fareward/scripts.pory"
	closemessage
# 24 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 25 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 26 "data/maps/Fareward/scripts.pory"
	applymovement 1, Fareward_Movement_Damon2
# 27 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 28 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Damon2
# 29 "data/maps/Fareward/scripts.pory"
	closemessage
# 30 "data/maps/Fareward/scripts.pory"
	applymovement 1, Fareward_Movement_Damon3
# 31 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 32 "data/maps/Fareward/scripts.pory"
	removeobject 1
# 33 "data/maps/Fareward/scripts.pory"
	savebgm MUS_DUMMY
# 34 "data/maps/Fareward/scripts.pory"
	fadedefaultbgm
# 35 "data/maps/Fareward/scripts.pory"
	delay 10
# 36 "data/maps/Fareward/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 4
# 37 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_CONVO_IN_PLAYER_HOUSE
# 38 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_MOM_AT_CUPBOARD
# 39 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_DAD_DEFAULT
# 40 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 41 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_GetStarter::
# 45 "data/maps/Fareward/scripts.pory"
	lockall
# 46 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter1
# 47 "data/maps/Fareward/scripts.pory"
	closemessage
# 48 "data/maps/Fareward/scripts.pory"
	playse SE_BIKE_HOP
# 49 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_JumpInPlace_Up
# 50 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 51 "data/maps/Fareward/scripts.pory"
	playse SE_BIKE_HOP
# 52 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_JumpInPlace_Up
# 53 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 54 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter2
# 55 "data/maps/Fareward/scripts.pory"
	closemessage
# 56 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 57 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 58 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 59 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 60 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter3
# 61 "data/maps/Fareward/scripts.pory"
	closemessage
# 62 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 63 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 64 "data/maps/Fareward/scripts.pory"
	delay 4
# 65 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 66 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 67 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter4
# 68 "data/maps/Fareward/scripts.pory"
	closemessage
# 69 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter1
# 70 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 71 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter5
# 72 "data/maps/Fareward/scripts.pory"
	closemessage
# 73 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter2
# 74 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 75 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 76 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 77 "data/maps/Fareward/scripts.pory"
	delay 4
# 78 "data/maps/Fareward/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/Fareward/scripts.pory"
	special ChooseStarter
# 80 "data/maps/Fareward/scripts.pory"
	waitstate
# 81 "data/maps/Fareward/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 82 "data/maps/Fareward/scripts.pory"
	message Fareward_Text_GetStarter6
# 83 "data/maps/Fareward/scripts.pory"
	waitmessage
# 84 "data/maps/Fareward/scripts.pory"
	playfanfare MUS_EVOLVED
# 85 "data/maps/Fareward/scripts.pory"
	waitfanfare
# 86 "data/maps/Fareward/scripts.pory"
	msgbox gText_GiveNicknameToMon, MSGBOX_YESNO
# 87 "data/maps/Fareward/scripts.pory"
	call_if_eq VAR_RESULT, YES, Fareward_EventScript_NicknameStarter
# 88 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 89 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 90 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter7
# 91 "data/maps/Fareward/scripts.pory"
	closemessage
# 92 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter3
# 93 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter4
# 94 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter5
# 95 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 96 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 97 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 98 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 99 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 100 "data/maps/Fareward/scripts.pory"
	delay 16
# 101 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter6
# 102 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 103 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter8
# 104 "data/maps/Fareward/scripts.pory"
	closemessage
# 105 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 106 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 107 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter9
# 108 "data/maps/Fareward/scripts.pory"
	closemessage
# 109 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter7
# 110 "data/maps/Fareward/scripts.pory"
	delay 8
# 111 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter8
# 112 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 113 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 114 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 115 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 116 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter10
# 117 "data/maps/Fareward/scripts.pory"
	closemessage
# 118 "data/maps/Fareward/scripts.pory"
	playse SE_PIN
# 119 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 120 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 121 "data/maps/Fareward/scripts.pory"
	delay 48
# 122 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter11
# 123 "data/maps/Fareward/scripts.pory"
	closemessage
# 124 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 125 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 126 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter12
# 127 "data/maps/Fareward/scripts.pory"
	closemessage
# 128 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter9
# 129 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter4
# 130 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter10
# 131 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter2
# 132 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 133 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 134 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 135 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 136 "data/maps/Fareward/scripts.pory"
	fadescreen FADE_TO_BLACK
# 137 "data/maps/Fareward/scripts.pory"
	special ChooseStarter
# 138 "data/maps/Fareward/scripts.pory"
	waitstate
# 139 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter13
# 140 "data/maps/Fareward/scripts.pory"
	closemessage
# 141 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 142 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 143 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter14
# 144 "data/maps/Fareward/scripts.pory"
	closemessage
# 145 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 146 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 147 "data/maps/Fareward/scripts.pory"
	delay 4
# 148 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter11
# 149 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 150 "data/maps/Fareward/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_SECOND_STARTER_MON
# 151 "data/maps/Fareward/scripts.pory"
	message Fareward_Text_GetStarter6
# 152 "data/maps/Fareward/scripts.pory"
	waitmessage
# 153 "data/maps/Fareward/scripts.pory"
	playfanfare MUS_EVOLVED
# 154 "data/maps/Fareward/scripts.pory"
	waitfanfare
# 155 "data/maps/Fareward/scripts.pory"
	msgbox gText_GiveNicknameToMon, MSGBOX_YESNO
# 156 "data/maps/Fareward/scripts.pory"
	call_if_eq VAR_RESULT, YES, Fareward_EventScript_NicknameSecondStarter
# 157 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter15
# 158 "data/maps/Fareward/scripts.pory"
	closemessage
# 159 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter12
# 160 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 161 "data/maps/Fareward/scripts.pory"
	removeobject 3
# 162 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter13
# 163 "data/maps/Fareward/scripts.pory"
	delay 2
# 164 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter13
# 165 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 166 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 167 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter16
# 168 "data/maps/Fareward/scripts.pory"
	closemessage
# 169 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 170 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 171 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 172 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 173 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter17
# 174 "data/maps/Fareward/scripts.pory"
	closemessage
# 175 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 176 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 177 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter18
# 178 "data/maps/Fareward/scripts.pory"
	closemessage
# 179 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 180 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 181 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 182 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 183 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 184 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 185 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter19
# 186 "data/maps/Fareward/scripts.pory"
	closemessage
# 187 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter16
# 188 "data/maps/Fareward/scripts.pory"
	delay 4
# 189 "data/maps/Fareward/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 190 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter14
# 191 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter15
# 192 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 193 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 194 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 195 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter20
# 196 "data/maps/Fareward/scripts.pory"
	closemessage
# 197 "data/maps/Fareward/scripts.pory"
	setflag FLAG_DONT_GAIN_EXP
# 198 "data/maps/Fareward/scripts.pory"
	call Fareward_EventScript_DamonBattle
# 200 "data/maps/Fareward/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 201 "data/maps/Fareward/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 6
# 202 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_NicknameStarter::
# 207 "data/maps/Fareward/scripts.pory"
	setvar VAR_0x8004, 0
# 208 "data/maps/Fareward/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


Fareward_EventScript_NicknameSecondStarter::
# 213 "data/maps/Fareward/scripts.pory"
	setvar VAR_0x8004, 1
# 214 "data/maps/Fareward/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


# 357 "data/maps/Fareward/scripts.pory"
Fareward_Movement_Damon1:
# 358 "data/maps/Fareward/scripts.pory"
	walk_down
# 358 "data/maps/Fareward/scripts.pory"
	walk_down
# 358 "data/maps/Fareward/scripts.pory"
	walk_down
# 358 "data/maps/Fareward/scripts.pory"
	walk_down
# 358 "data/maps/Fareward/scripts.pory"
	walk_down
# 358 "data/maps/Fareward/scripts.pory"
	walk_down
# 359 "data/maps/Fareward/scripts.pory"
	delay_8
# 360 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_right
	step_end

# 363 "data/maps/Fareward/scripts.pory"
Fareward_Movement_Damon2:
# 364 "data/maps/Fareward/scripts.pory"
	walk_right
# 364 "data/maps/Fareward/scripts.pory"
	walk_right
# 364 "data/maps/Fareward/scripts.pory"
	walk_right
# 364 "data/maps/Fareward/scripts.pory"
	walk_right
	step_end

# 367 "data/maps/Fareward/scripts.pory"
Fareward_Movement_Damon3:
# 368 "data/maps/Fareward/scripts.pory"
	walk_left
# 368 "data/maps/Fareward/scripts.pory"
	walk_left
# 368 "data/maps/Fareward/scripts.pory"
	walk_left
# 368 "data/maps/Fareward/scripts.pory"
	walk_left
# 368 "data/maps/Fareward/scripts.pory"
	walk_left
# 368 "data/maps/Fareward/scripts.pory"
	walk_left
	step_end

# 371 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter1:
# 372 "data/maps/Fareward/scripts.pory"
	face_right
# 373 "data/maps/Fareward/scripts.pory"
	delay_16
# 374 "data/maps/Fareward/scripts.pory"
	face_up
# 375 "data/maps/Fareward/scripts.pory"
	delay_16
# 376 "data/maps/Fareward/scripts.pory"
	face_right
# 377 "data/maps/Fareward/scripts.pory"
	delay_16
# 377 "data/maps/Fareward/scripts.pory"
	delay_16
# 378 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 381 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter2:
# 382 "data/maps/Fareward/scripts.pory"
	walk_up
# 382 "data/maps/Fareward/scripts.pory"
	walk_up
	step_end

# 385 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter3:
# 386 "data/maps/Fareward/scripts.pory"
	walk_down
# 386 "data/maps/Fareward/scripts.pory"
	walk_down
# 387 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 390 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter4:
# 391 "data/maps/Fareward/scripts.pory"
	walk_up
# 391 "data/maps/Fareward/scripts.pory"
	walk_up
# 391 "data/maps/Fareward/scripts.pory"
	walk_up
# 392 "data/maps/Fareward/scripts.pory"
	face_right
	step_end

# 395 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter5:
# 396 "data/maps/Fareward/scripts.pory"
	walk_up
# 396 "data/maps/Fareward/scripts.pory"
	walk_up
# 397 "data/maps/Fareward/scripts.pory"
	walk_left
# 398 "data/maps/Fareward/scripts.pory"
	face_up
	step_end

# 401 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter6:
# 402 "data/maps/Fareward/scripts.pory"
	walk_in_place_right
# 402 "data/maps/Fareward/scripts.pory"
	walk_in_place_right
	step_end

# 405 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter7:
# 406 "data/maps/Fareward/scripts.pory"
	walk_down
# 406 "data/maps/Fareward/scripts.pory"
	walk_down
# 406 "data/maps/Fareward/scripts.pory"
	walk_down
# 407 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 410 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter8:
# 411 "data/maps/Fareward/scripts.pory"
	walk_right
# 412 "data/maps/Fareward/scripts.pory"
	walk_down
# 412 "data/maps/Fareward/scripts.pory"
	walk_down
# 413 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 416 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter9:
# 417 "data/maps/Fareward/scripts.pory"
	walk_up
# 418 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_down
	step_end

# 421 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter10:
# 422 "data/maps/Fareward/scripts.pory"
	walk_up
# 422 "data/maps/Fareward/scripts.pory"
	walk_up
# 422 "data/maps/Fareward/scripts.pory"
	walk_up
# 423 "data/maps/Fareward/scripts.pory"
	face_left
	step_end

# 426 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter11:
# 427 "data/maps/Fareward/scripts.pory"
	walk_in_place_up
# 427 "data/maps/Fareward/scripts.pory"
	walk_in_place_up
	step_end

# 430 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter12:
# 431 "data/maps/Fareward/scripts.pory"
	walk_left
# 432 "data/maps/Fareward/scripts.pory"
	face_down
# 433 "data/maps/Fareward/scripts.pory"
	delay_4
# 434 "data/maps/Fareward/scripts.pory"
	walk_in_place_down
	step_end

# 437 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter13:
# 438 "data/maps/Fareward/scripts.pory"
	walk_down
# 439 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 442 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter14:
# 443 "data/maps/Fareward/scripts.pory"
	walk_left
# 444 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_right
	step_end

# 447 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter15:
# 448 "data/maps/Fareward/scripts.pory"
	walk_right
# 448 "data/maps/Fareward/scripts.pory"
	walk_right
# 449 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_left
	step_end

# 452 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter16:
# 453 "data/maps/Fareward/scripts.pory"
	walk_up
# 453 "data/maps/Fareward/scripts.pory"
	walk_up
# 454 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_down
	step_end

Fareward_Text_Damon1::
# 218 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh, hey {PLAYER}!$"

Fareward_Text_Damon2::
# 222 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You excited to finally get your\n"
	.string "very own pokémon? I know I am!\l"
	.string "I wonder what pokémon we'll get to\l"
	.string "pick from. I hope there's a swablu!\l"
	.string "Well, let me know if you see Professor\l"
	.string "Hemlock before I do, ok? I gotta go\l"
	.string "take care of some stuff at home right\l"
	.string "now, though, so I'll see ya!$"

Fareward_Text_GetStarter1::
# 233 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Alright, you three. Are\n"
	.string "you ready to choose your first\l"
	.string "pokémon?$"

Fareward_Text_GetStarter2::
# 239 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yes, yes, yes! I'm so ready!$"

Fareward_Text_GetStarter3::
# 243 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Wow, your friend sure is pumped\n"
	.string "up for this, huh?$"

Fareward_Text_GetStarter4::
# 248 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I'm glad to see how much\n"
	.string "you're looking forward to this, Damon!\l"
	.string "However, I did promise Grisha to give\l"
	.string "{PLAYER} their own pokémon quite some\l"
	.string "time ago, so I'd like them to choose\l"
	.string "first if that's alright with the two\l"
	.string "of you.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Fine with me.$"

Fareward_Text_GetStarter5::
# 259 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh! Yeah, I guess that's ok.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ok then! {PLAYER}, go\n"
	.string "ahead and choose one of the three\l"
	.string "pokémon from the large pouch of my bag.$"

Fareward_Text_GetStarter6::
# 266 "data/maps/Fareward/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"

Fareward_Text_GetStarter7::
# 270 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Excellent choice! Now,\n"
	.string "Damon and Haley, you two can choose\l"
	.string "from the remaining two pokémon.$"

Fareward_Text_GetStarter8::
# 276 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oooh, I'll take this one! ...Oh!\n"
	.string "Sorry, I'm getting ahead of myself.\l"
	.string "Is that alright with you, Haley?$"

Fareward_Text_GetStarter9::
# 282 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Sure, that's fine! I like the\n"
	.string "other one, anyway. Nice to meet you,\l"
	.string "by the way.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh, uh, yeah! Nice to meet you too!$"

Fareward_Text_GetStarter10::
# 289 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Wonderful! Now then, it's\n"
	.string "time to choose your second partners!$"

Fareward_Text_GetStarter11::
# 294 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Huh? We each get to choose two\n"
	.string "pokémon?\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Indeed, Haley! In the\n"
	.string "Xemek region, using two pokémon at the\l"
	.string "same time is the most common form of\l"
	.string "pokémon battle. It was popularized\l"
	.string "some time ago by a group of famous\l"
	.string "Champion-ranked trainers.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I see. Well, I didn't expect to\n"
	.string "be receiving two pokémon today, but who\l"
	.string "would refuse an opportunity like that?\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Well then, why don't you\n"
	.string "all come and choose another pokémon\l"
	.string "from this second pouch?$"

Fareward_Text_GetStarter12::
# 311 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Don't mind if I do!$"

Fareward_Text_GetStarter13::
# 315 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You want that one, {PLAYER}? Then\n"
	.string "I'll take this one, ok?$"

Fareward_Text_GetStarter14::
# 320 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Works for me!$"

Fareward_Text_GetStarter15::
# 324 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Now then...$"

Fareward_Text_GetStarter16::
# 328 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I'm looking forward to\n"
	.string "seeing how you three develop as\l"
	.string "trainers. I hope to see you form strong\l"
	.string "bonds with your pokémon. You can learn\l"
	.string "just as much from them as they can\l"
	.string "learn from you.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Well said, Professor!$"

Fareward_Text_GetStarter17::
# 338 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hey, {PLAYER}! We've wanted to\n"
	.string "face each in a pokémon battle since we\l"
	.string "were young, so let's do it now! Come on!$"

Fareward_Text_GetStarter18::
# 344 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Geez, right off the bat, huh?$"

Fareward_Text_GetStarter19::
# 348 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I think that's a great\n"
	.string "idea! Have at it, you two.$"

Fareward_Text_GetStarter20::
# 353 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ok, let's do this!$"
