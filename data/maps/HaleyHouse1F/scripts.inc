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
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 46 "data/maps/HaleyHouse1F/scripts.pory"
	delay 80
# 47 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 48 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 3
# 49 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 50 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 51 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 0
# 52 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_MomIntroduction3
# 53 "data/maps/HaleyHouse1F/scripts.pory"
	closemessage
# 54 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 55 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 56 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 1
# 57 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 58 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 3, HaleyHouse1F_Movement_MomIntroduction3
# 59 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/HaleyHouse1F/scripts.pory"
	removeobject 3
# 61 "data/maps/HaleyHouse1F/scripts.pory"
	savebgm MUS_DUMMY
# 62 "data/maps/HaleyHouse1F/scripts.pory"
	fadedefaultbgm
# 63 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 64 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 65 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 1
# 66 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 67 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_MomIntroduction4
# 68 "data/maps/HaleyHouse1F/scripts.pory"
	closemessage
# 69 "data/maps/HaleyHouse1F/scripts.pory"
	applymovement 1, HaleyHouse1F_Movement_MomIntroduction4
# 70 "data/maps/HaleyHouse1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/HaleyHouse1F/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 3
# 72 "data/maps/HaleyHouse1F/scripts.pory"
	releaseall
	return


HaleyHouse1F_EventScript_Mom1::
# 76 "data/maps/HaleyHouse1F/scripts.pory"
	lockall
# 77 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_Mom1, MSGBOX_NPC
# 78 "data/maps/HaleyHouse1F/scripts.pory"
	releaseall
	return


HaleyHouse1F_EventScript_Mom2::
# 82 "data/maps/HaleyHouse1F/scripts.pory"
	lockall
# 83 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_Mom2, MSGBOX_NPC
# 84 "data/maps/HaleyHouse1F/scripts.pory"
	releaseall
	return


HaleyHouse1F_EventScript_Dad::
# 88 "data/maps/HaleyHouse1F/scripts.pory"
	lockall
# 89 "data/maps/HaleyHouse1F/scripts.pory"
	msgbox HaleyHouse1F_Text_Dad, MSGBOX_NPC
# 90 "data/maps/HaleyHouse1F/scripts.pory"
	releaseall
	return


# 181 "data/maps/HaleyHouse1F/scripts.pory"
HaleyHouse1F_Movement_MomIntroduction1:
# 182 "data/maps/HaleyHouse1F/scripts.pory"
	face_down
# 183 "data/maps/HaleyHouse1F/scripts.pory"
	emote_exclamation_mark
# 184 "data/maps/HaleyHouse1F/scripts.pory"
	delay_16
# 184 "data/maps/HaleyHouse1F/scripts.pory"
	delay_16
# 184 "data/maps/HaleyHouse1F/scripts.pory"
	delay_16
# 185 "data/maps/HaleyHouse1F/scripts.pory"
	walk_down
# 186 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 186 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 186 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 187 "data/maps/HaleyHouse1F/scripts.pory"
	face_down
	step_end

# 190 "data/maps/HaleyHouse1F/scripts.pory"
HaleyHouse1F_Movement_MomIntroduction2:
# 191 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 191 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 191 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 191 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 191 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 191 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 191 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 192 "data/maps/HaleyHouse1F/scripts.pory"
	face_down
	step_end

# 195 "data/maps/HaleyHouse1F/scripts.pory"
HaleyHouse1F_Movement_MomIntroduction3:
# 196 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 196 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 196 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 196 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 196 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 196 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
# 196 "data/maps/HaleyHouse1F/scripts.pory"
	walk_left
	step_end

# 199 "data/maps/HaleyHouse1F/scripts.pory"
HaleyHouse1F_Movement_MomIntroduction4:
# 200 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 200 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 200 "data/maps/HaleyHouse1F/scripts.pory"
	walk_right
# 201 "data/maps/HaleyHouse1F/scripts.pory"
	walk_up
# 202 "data/maps/HaleyHouse1F/scripts.pory"
	face_right
	step_end

HaleyHouse1F_Text_Cabinet::
# 93 "data/maps/HaleyHouse1F/scripts.pory"
	.string "The cabinet is filled with numerous\n"
	.string "pokémon-related academic reports,\l"
	.string "all neatly filed in alphabetical order.$"

HaleyHouse1F_Text_ParentsRoom::
# 99 "data/maps/HaleyHouse1F/scripts.pory"
	.string "I probably shouldn't go into\n"
	.string "Haley's parent's room without permission.$"

HaleyHouse1F_Text_MomIntroduction1::
# 104 "data/maps/HaleyHouse1F/scripts.pory"
	.string "You must be {PLAYER} from down the street.\n"
	.string "My name is Margot. It's lovely\l"
	.string "to meet you!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Margot:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Your mother and father came by\n"
	.string "earlier to introduce themselves.\p"
	.string "I'm sure they've already told you about\n"
	.string "our daughter Haley.\l"
	.string "She's upstairs unpacking her belongings.$"

HaleyHouse1F_Text_MomIntroduction2::
# 115 "data/maps/HaleyHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Margot:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Haley! Could you come down here\n"
	.string "and introduce yourself, please?$"

HaleyHouse1F_Text_MomIntroduction3::
# 120 "data/maps/HaleyHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You're {PLAYER}, right?\n"
	.string "Nice to meet you!\p"
	.string "Your mom said Professor Maple is visiting\n"
	.string "today to give you and your friend\l"
	.string "your first pokémon.\p"
	.string "We moved to the Xemek region\n"
	.string "because my dad got a job working for\l"
	.string "the professor, so I'll be getting a\l"
	.string "partner pokémon from her too.\p"
	.string "I'm not very interested in becoming\n"
	.string "a great pokémon master or anything,\l"
	.string "but at least I'll have something to\l"
	.string "keep me company in this new region.\p"
	.string "So I guess I'll see you when we get\n"
	.string "our pokémon later. For now, I'm gonna\l"
	.string "go finish unpacking my things.\p"
	.string "See you around!$"

HaleyHouse1F_Text_MomIntroduction4::
# 140 "data/maps/HaleyHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Margot:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh, how exciting it must be to\n"
	.string "receive your very own pokémon!\p"
	.string "I do hope you and Haley can become\n"
	.string "close friends over the course of\l"
	.string "your journeys.\p"
	.string "It's been wonderful to meet you, {PLAYER}.\n"
	.string "Tell your parents that we'd love to\l"
	.string "have them over for dinner sometime.$"

HaleyHouse1F_Text_Mom1::
# 151 "data/maps/HaleyHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Margot:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I know Haley doesn't seem very\n"
	.string "enthusiastic about receiving\l"
	.string "her first pokémon, but I'm sure that\l"
	.string "deep down, she's actually\l"
	.string "looking forward to it.$"

HaleyHouse1F_Text_Mom2::
# 159 "data/maps/HaleyHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Margot:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hello there, {PLAYER}!\n"
	.string "I hope you and Haley are\l"
	.string "getting along well.\p"
	.string "Where's David? He's at Professor\n"
	.string "Maple's lab in Grandelia.\p"
	.string "I'm sure he's doing lots of\n"
	.string "great work there!$"

HaleyHouse1F_Text_Dad::
# 169 "data/maps/HaleyHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}David:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's good to meet you, {PLAYER}.\n"
	.string "My name is David.\p"
	.string "As you heard from my daughter,\n"
	.string "we've moved to Xemek for my new job\l"
	.string "working as a research assistant\l"
	.string "for Professor Maple.\p"
	.string "I look forward to seeing the progress\n"
	.string "you and Haley make on your\l"
	.string "pokémon journeys.$"
