HaleyHouse1F_MapScripts::
# 2 "data/maps/HaleyHouse1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HaleyHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HaleyHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/HaleyHouse1F/scripts.pory"
	map_script_2 VAR_FAREWARD_INTRO_STATE, 2, HaleyHouse1F_EventScript_MomIntroduction
	.2byte 0


HaleyHouse1F_EventScript_Cabinet::
# 8 "data/maps/HaleyHouse1F/scripts.pory"
	lockall
# 9 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_Cabinet
# 10 "data/maps/HaleyHouse1F/scripts.pory"
	releaseall
	return


HaleyHouse1F_EventScript_ParentsRoom::
# 14 "data/maps/HaleyHouse1F/scripts.pory"
	lockall
# 15 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_ParentsRoom
# 16 "data/maps/HaleyHouse1F/scripts.pory"
	releaseall
	return


HaleyHouse1F_EventScript_Clock::
# 20 "data/maps/HaleyHouse1F/scripts.pory"
	lockall
# 21 "data/maps/HaleyHouse1F/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 22 "data/maps/HaleyHouse1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/HaleyHouse1F/scripts.pory"
	special Special_ViewWallClock
# 24 "data/maps/HaleyHouse1F/scripts.pory"
	waitstate
# 25 "data/maps/HaleyHouse1F/scripts.pory"
	releaseall
	return


HaleyHouse1F_EventScript_MomIntroduction::
# 29 "data/maps/HaleyHouse1F/scripts.pory"
	lockall
# 30 "data/maps/HaleyHouse1F/scripts.pory"
	addobject 3
# 31 "data/maps/HaleyHouse1F/scripts.pory"
	playse SE_PIN
# 32 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 1, HaleyHouse1F_Movement_MomIntroduction1
# 33 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_MomIntroduction1
# 35 "data/maps/HaleyHouse1F/scripts.pory"
	closemessage
# 36 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 37 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_MomIntroduction2
# 39 "data/maps/HaleyHouse1F/scripts.pory"
	closemessage
# 40 "data/maps/HaleyHouse1F/scripts.pory"
	delay 10
# 41 "data/maps/HaleyHouse1F/scripts.pory"
	playse SE_EXIT
# 42 "data/maps/HaleyHouse1F/scripts.pory"
	delay 80
# 43 "data/maps/HaleyHouse1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 44 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 3, HaleyHouse1F_Movement_MomIntroduction2
# 45 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 47 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 0
# 48 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_MomIntroduction3
# 49 "data/maps/HaleyHouse1F/scripts.pory"
	closemessage
# 50 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 51 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 0
# 52 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 3, HaleyHouse1F_Movement_MomIntroduction3
# 53 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 0
# 54 "data/maps/HaleyHouse1F/scripts.pory"
	removeobject 3
# 55 "data/maps/HaleyHouse1F/scripts.pory"
	savebgm MUS_DUMMY
# 56 "data/maps/HaleyHouse1F/scripts.pory"
	fadedefaultbgm
# 57 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 58 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_MomIntroduction4
# 60 "data/maps/HaleyHouse1F/scripts.pory"
	closemessage
# 61 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 1, HaleyHouse1F_Movement_MomIntroduction4
# 62 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/HaleyHouse1F/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 3
# 64 "data/maps/HaleyHouse1F/scripts.pory"
	releaseall
	return


HaleyHouse1F_EventScript_Mom1::
# 68 "data/maps/HaleyHouse1F/scripts.pory"
	lockall
# 69 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_Mom1, MSGBOX_NPC
# 70 "data/maps/HaleyHouse1F/scripts.pory"
	releaseall
	return


HaleyHouse1F_EventScript_Mom2::
# 74 "data/maps/HaleyHouse1F/scripts.pory"
	lockall
# 75 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_Mom2, MSGBOX_NPC
# 76 "data/maps/HaleyHouse1F/scripts.pory"
	releaseall
	return


HaleyHouse1F_EventScript_Dad::
# 80 "data/maps/HaleyHouse1F/scripts.pory"
	lockall
# 81 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_Dad, MSGBOX_NPC
# 82 "data/maps/HaleyHouse1F/scripts.pory"
	releaseall
	return


# 165 "data/maps/HaleyHouse1F/scripts.pory"
HaleyHouse1F_Movement_MomIntroduction1:
# 166 "data/maps/HaleyHouse1F/scripts.pory"
	face_down
# 167 "data/maps/HaleyHouse1F/scripts.pory"
	emote_exclamation_mark
# 168 "data/maps/HaleyHouse1F/scripts.pory"
	delay_16
# 168 "data/maps/HaleyHouse1F/scripts.pory"
	delay_16
# 168 "data/maps/HaleyHouse1F/scripts.pory"
	delay_16
# 169 "data/maps/HaleyHouse1F/scripts.pory"
	walk_down
# 170 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 170 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 170 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 171 "data/maps/HaleyHouse1F/scripts.pory"
	face_down
	step_end

# 174 "data/maps/HaleyHouse1F/scripts.pory"
HaleyHouse1F_Movement_MomIntroduction2:
# 175 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 175 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 175 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 175 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 175 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 175 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 175 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 176 "data/maps/HaleyHouse1F/scripts.pory"
	face_down
	step_end

# 179 "data/maps/HaleyHouse1F/scripts.pory"
HaleyHouse1F_Movement_MomIntroduction3:
# 180 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 180 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 180 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 180 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 180 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 180 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 180 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
	step_end

# 183 "data/maps/HaleyHouse1F/scripts.pory"
HaleyHouse1F_Movement_MomIntroduction4:
# 184 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 184 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 184 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 185 "data/maps/HaleyHouse1F/scripts.pory"
	walk_up
# 186 "data/maps/HaleyHouse1F/scripts.pory"
	face_right
	step_end

HaleyHouse1F_Text_Cabinet::
# 85 "data/maps/HaleyHouse1F/scripts.pory"
	.string "The cabinet is filled with numerous\n"
	.string "pokémon-related academic reports, all\l"
	.string "neatly filed in alphabetical order.$"

HaleyHouse1F_Text_ParentsRoom::
# 91 "data/maps/HaleyHouse1F/scripts.pory"
	.string "I probably shouldn't go into Haley's\n"
	.string "parent's room without permission.$"

HaleyHouse1F_Text_MomIntroduction1::
# 96 "data/maps/HaleyHouse1F/scripts.pory"
	.string "You must be {PLAYER} from down the\n"
	.string "street. My name is Margot. It's lovely\l"
	.string "to meet you!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Margot:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Your mother and father came by\n"
	.string "earlier to introduce themselves.\l"
	.string "I'm sure they've already told you about\l"
	.string "our daughter Haley. She's upstairs\l"
	.string "unpacking her belongings.$"

HaleyHouse1F_Text_MomIntroduction2::
# 107 "data/maps/HaleyHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Margot:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Haley! Could you come down here\n"
	.string "and introduce yourself, please?$"

HaleyHouse1F_Text_MomIntroduction3::
# 112 "data/maps/HaleyHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You're {PLAYER}, right?\n"
	.string "Nice to meet you! Your mom said\l"
	.string "Professor Hemlock is visiting today\l"
	.string "to give you and your friend your first\l"
	.string "pokémon. We moved to the Xemek region\l"
	.string "because my dad got a job working for\l"
	.string "the professor, so I'll be getting a\l"
	.string "partner pokémon from him too.\p"
	.string "I'm not very interested in becoming\n"
	.string "a great pokémon master or anything,\l"
	.string "but at least I'll have something to\l"
	.string "keep me company in this new region.\p"
	.string "So I guess I'll see you when we get\n"
	.string "our pokémon later. For now, I'm\l"
	.string "gonna go finish unpacking my things.\l"
	.string "See you around!$"

HaleyHouse1F_Text_MomIntroduction4::
# 131 "data/maps/HaleyHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Margot:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh, how exciting it must be to\n"
	.string "receive your very own pokémon!\l"
	.string "I do hope you and Haley can become\l"
	.string "close friends over the course of your\l"
	.string "journeys. It's been wonderful to meet\l"
	.string "you, {PLAYER}. Tell your parents that\l"
	.string "we'd love to have them over for dinner\l"
	.string "sometime.$"

HaleyHouse1F_Text_Mom1::
# 142 "data/maps/HaleyHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Margot:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I know Haley doesn't seem\n"
	.string "very enthusiastic about receiving her\l"
	.string "first pokémon, but I'm sure that deep\l"
	.string "down, she's actually looking forward\l"
	.string "to it.$"

HaleyHouse1F_Text_Mom2::
# 150 "data/maps/HaleyHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Margot:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hello there, {PLAYER}! I hope\n"
	.string "you and Haley are getting along well.$"

HaleyHouse1F_Text_Dad::
# 155 "data/maps/HaleyHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}David:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's good to meet you, {PLAYER}.\n"
	.string "My name is David. As you heard from my\l"
	.string "daughter, we've moved to Xemek for my\l"
	.string "new job working as a research assistant\l"
	.string "for Professor Hemlock. I look forward\l"
	.string "to seeing the progress you and Haley\l"
	.string "make on your pokémon journeys.$"
