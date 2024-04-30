PlayerHouse2F_MapScripts::
	.byte 0


PlayerHouse2F_EventScript_Dresser::
# 6 "data/maps/PlayerHouse2F/scripts.pory"
	lockall
# 7 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Text_Dresser
# 8 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return


PlayerHouse2F_EventScript_AsterSignature::
# 12 "data/maps/PlayerHouse2F/scripts.pory"
	lockall
# 13 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Text_AsterSignature
# 14 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return


PlayerHouse2F_EventScript_Box1::
# 18 "data/maps/PlayerHouse2F/scripts.pory"
	lockall
# 19 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Text_Box1
# 20 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return


PlayerHouse2F_EventScript_Box2::
# 24 "data/maps/PlayerHouse2F/scripts.pory"
	lockall
# 25 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Text_Box2
# 26 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return


PlayerHouse2F_EventScript_GameCube::
# 30 "data/maps/PlayerHouse2F/scripts.pory"
	lockall
# 31 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Text_GameCube
# 32 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return


PlayerHouse2F_EventScript_Notebook::
# 36 "data/maps/PlayerHouse2F/scripts.pory"
	lockall
# 37 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Text_Notebook
# 38 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return


PlayerHouse2F_EventScript_PCOn::
# 42 "data/maps/PlayerHouse2F/scripts.pory"
	lockall
# 43 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_RIGHT
# 44 "data/maps/PlayerHouse2F/scripts.pory"
	special DoPCTurnOnEffect
# 45 "data/maps/PlayerHouse2F/scripts.pory"
	playse SE_PC_ON
# 46 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC
# 47 "data/maps/PlayerHouse2F/scripts.pory"
	special BedroomPC
# 48 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
# 49 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return


PlayerHouse2F_EventScript_PCOff::
# 53 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_RIGHT
# 54 "data/maps/PlayerHouse2F/scripts.pory"
	playse SE_PC_OFF
# 55 "data/maps/PlayerHouse2F/scripts.pory"
	special DoPCTurnOffEffect
# 56 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return


PlayerHouse2F_EventScript_CyndaquilDoll::
# 60 "data/maps/PlayerHouse2F/scripts.pory"
	lockall
# 61 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Text_CyndaquilDoll
# 62 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return


PlayerHouse2F_EventScript_MarillDoll::
# 66 "data/maps/PlayerHouse2F/scripts.pory"
	lockall
# 67 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Text_MarillDoll
# 68 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return


PlayerHouse2F_EventScript_CheckClock1::
# 72 "data/maps/PlayerHouse2F/scripts.pory"
	lockall
# 73 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, PlayerHouse2F_EventScript_CheckClock1_1
# 81 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Text_ClockIsStopped1
# 82 "data/maps/PlayerHouse2F/scripts.pory"
	goto PlayerHouse2F_EventScript_StartClock
# 83 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return

PlayerHouse2F_EventScript_CheckClock1_1:
# 74 "data/maps/PlayerHouse2F/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 75 "data/maps/PlayerHouse2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/PlayerHouse2F/scripts.pory"
	special Special_ViewWallClock
# 77 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
# 78 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return


PlayerHouse2F_EventScript_CheckClock2::
# 88 "data/maps/PlayerHouse2F/scripts.pory"
	lockall
# 89 "data/maps/PlayerHouse2F/scripts.pory"
	delay 10
# 90 "data/maps/PlayerHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHouse2F_Movement_LookAtClock
# 91 "data/maps/PlayerHouse2F/scripts.pory"
	waitmovement 0
# 92 "data/maps/PlayerHouse2F/scripts.pory"
	delay 48
# 93 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Text_ClockIsStopped2
# 94 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 95 "data/maps/PlayerHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHouse2F_Movement_MoveToClock
# 96 "data/maps/PlayerHouse2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/PlayerHouse2F/scripts.pory"
	goto PlayerHouse2F_EventScript_StartClock
# 98 "data/maps/PlayerHouse2F/scripts.pory"
	releaseall
	return


PlayerHouse2F_EventScript_StartClock::
# 102 "data/maps/PlayerHouse2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 103 "data/maps/PlayerHouse2F/scripts.pory"
	special StartWallClock
# 104 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
# 105 "data/maps/PlayerHouse2F/scripts.pory"
	delay 10
# 106 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 1
# 107 "data/maps/PlayerHouse2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
	return


# 160 "data/maps/PlayerHouse2F/scripts.pory"
PlayerHouse2F_Movement_LookAtClock:
# 161 "data/maps/PlayerHouse2F/scripts.pory"
	walk_down
# 162 "data/maps/PlayerHouse2F/scripts.pory"
	face_right
# 163 "data/maps/PlayerHouse2F/scripts.pory"
	emote_question_mark
	step_end

# 166 "data/maps/PlayerHouse2F/scripts.pory"
PlayerHouse2F_Movement_MoveToClock:
# 167 "data/maps/PlayerHouse2F/scripts.pory"
	walk_right
# 167 "data/maps/PlayerHouse2F/scripts.pory"
	walk_right
# 168 "data/maps/PlayerHouse2F/scripts.pory"
	face_up
	step_end

PlayerHouse2F_Text_Dresser::
# 111 "data/maps/PlayerHouse2F/scripts.pory"
	.string "No need to change clothes right now.$"

PlayerHouse2F_Text_AsterSignature::
# 115 "data/maps/PlayerHouse2F/scripts.pory"
	.string "A poster with the signature of a\n"
	.string "Champion-ranked trainer, Aster.\l"
	.string "Mom got him to sign it for me when\l"
	.string "I was younger.$"

PlayerHouse2F_Text_Box1::
# 122 "data/maps/PlayerHouse2F/scripts.pory"
	.string "The box contains various toys, video\n"
	.string "games, and other fond memories.$"

PlayerHouse2F_Text_Box2::
# 127 "data/maps/PlayerHouse2F/scripts.pory"
	.string "I should probably organize all the stuff\n"
	.string "in these boxes at some point.$"

PlayerHouse2F_Text_GameCube::
# 132 "data/maps/PlayerHouse2F/scripts.pory"
	.string "A Nintendo GameCube. There's a copy of\n"
	.string "Pokémon XD: Gale of Darkness inside.$"

PlayerHouse2F_Text_Notebook::
# 137 "data/maps/PlayerHouse2F/scripts.pory"
	.string "It's filled with notes from my classes at\n"
	.string "Grandelia Trainers' School.$"

PlayerHouse2F_Text_CyndaquilDoll::
# 142 "data/maps/PlayerHouse2F/scripts.pory"
	.string "A cyndaquil doll. How cute!$"

PlayerHouse2F_Text_MarillDoll::
# 146 "data/maps/PlayerHouse2F/scripts.pory"
	.string "A marill doll. So round!$"

PlayerHouse2F_Text_ClockIsStopped1::
# 150 "data/maps/PlayerHouse2F/scripts.pory"
	.string "That's odd. The clock is stopped?\n"
	.string "I'd better reset it!$"

PlayerHouse2F_Text_ClockIsStopped2::
# 155 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Hold on. The clock is stopped...?\n"
	.string "Well, I'd better go reset it!$"
