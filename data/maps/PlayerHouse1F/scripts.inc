PlayerHouse1F_MapScripts::
# 2 "data/maps/PlayerHouse1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PlayerHouse1F/scripts.pory"
	map_script_2 VAR_FAREWARD_INTRO_STATE, 1, Fareward_PlayerHouse1F_EventScript_MomBeckons
# 4 "data/maps/PlayerHouse1F/scripts.pory"
	map_script_2 VAR_FAREWARD_INTRO_STATE, 4, Fareward_PlayerHouse1F_EventScript_HemlockConvo
	.2byte 0


Fareward_PlayerHouse1F_EventScript_ParentsRoom::
# 9 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 10 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayersHouse1F_Text_ParentsRoom
# 11 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return


Fareward_PlayerHouse1F_EventScript_ArtPiece::
# 15 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 16 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_ArtPiece
# 17 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return


Fareward_PlayerHouse1F_EventScript_SmallBookshelf::
# 21 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 22 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_SmallBookshelf
# 23 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return


Fareward_PlayerHouse1F_EventScript_Bookshelf::
# 27 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 28 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_Bookshelf
# 29 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return


Fareward_PlayerHouse1F_EventScript_MomBeckons::
# 33 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 34 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_MomBeckons1
# 35 "data/maps/PlayerHouse1F/scripts.pory"
	closemessage
# 36 "data/maps/PlayerHouse1F/scripts.pory"
	playse SE_PIN
# 37 "data/maps/PlayerHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_PlayerHouse1F_Movement_MomBeckons1
# 38 "data/maps/PlayerHouse1F/scripts.pory"
	waitmovement 0
# 39 "data/maps/PlayerHouse1F/scripts.pory"
	delay 48
# 40 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_MomBeckons2
# 41 "data/maps/PlayerHouse1F/scripts.pory"
	closemessage
# 42 "data/maps/PlayerHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_PlayerHouse1F_Movement_MomBeckons2
# 43 "data/maps/PlayerHouse1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/PlayerHouse1F/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 45 "data/maps/PlayerHouse1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_MomBeckons3
# 47 "data/maps/PlayerHouse1F/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 2
# 48 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return


Fareward_PlayerHouse1F_EventScript_HemlockConvo::
# 52 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 53 "data/maps/PlayerHouse1F/scripts.pory"
	playse SE_PIN
# 54 "data/maps/PlayerHouse1F/scripts.pory"
	applymovement 5, Fareward_PlayerHouse1F_Movement_HemlockConvo
# 55 "data/maps/PlayerHouse1F/scripts.pory"
	waitmovement 0
# 56 "data/maps/PlayerHouse1F/scripts.pory"
	delay 4
# 57 "data/maps/PlayerHouse1F/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 58 "data/maps/PlayerHouse1F/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 59 "data/maps/PlayerHouse1F/scripts.pory"
	waitmovement 4
# 60 "data/maps/PlayerHouse1F/scripts.pory"
	waitmovement 3
# 61 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_HemlockConvo
# 62 "data/maps/PlayerHouse1F/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 5
# 63 "data/maps/PlayerHouse1F/scripts.pory"
	clearflag FLAG_HIDE_CHOOSE_STARTER
# 64 "data/maps/PlayerHouse1F/scripts.pory"
	clearflag FLAG_HIDE_HEMLOCKS_BAG
# 65 "data/maps/PlayerHouse1F/scripts.pory"
	warp MAP_FAREWARD, 13, 16
# 66 "data/maps/PlayerHouse1F/scripts.pory"
	waitstate
# 67 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return


Fareward_PlayerHouse1F_EventScript_MomSeeNeighbors::
# 71 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 72 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_MomSeeNeighbors, MSGBOX_NPC
# 73 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return


Fareward_PlayerHouse1F_EventScript_Dad::
# 77 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 78 "data/maps/PlayerHouse1F/scripts.pory"
	compare VAR_FAREWARD_INTRO_STATE, 2
	goto_if_eq Fareward_PlayerHouse1F_EventScript_Dad_2
# 82 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_Dad2, MSGBOX_NPC
Fareward_PlayerHouse1F_EventScript_Dad_1:
# 84 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return

Fareward_PlayerHouse1F_EventScript_Dad_2:
# 79 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_Dad1, MSGBOX_NPC
	goto Fareward_PlayerHouse1F_EventScript_Dad_1


# 168 "data/maps/PlayerHouse1F/scripts.pory"
Fareward_PlayerHouse1F_Movement_MomBeckons1:
# 169 "data/maps/PlayerHouse1F/scripts.pory"
	face_right
# 170 "data/maps/PlayerHouse1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 173 "data/maps/PlayerHouse1F/scripts.pory"
Fareward_PlayerHouse1F_Movement_MomBeckons2:
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 174 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 175 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 175 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 175 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 175 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 175 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 175 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 175 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 176 "data/maps/PlayerHouse1F/scripts.pory"
	face_left
	step_end

# 179 "data/maps/PlayerHouse1F/scripts.pory"
Fareward_PlayerHouse1F_Movement_HemlockConvo:
# 180 "data/maps/PlayerHouse1F/scripts.pory"
	face_down
# 181 "data/maps/PlayerHouse1F/scripts.pory"
	emote_exclamation_mark
	step_end

Fareward_PlayersHouse1F_Text_ParentsRoom::
# 87 "data/maps/PlayerHouse1F/scripts.pory"
	.string "The door to Mom and Dad's room.\n"
	.string "I shouldn't go in without asking.$"

Fareward_PlayerHouse1F_Text_ArtPiece::
# 92 "data/maps/PlayerHouse1F/scripts.pory"
	.string "A painting made by a famous artist from\n"
	.string "the Kalos region.\p"
	.string "I have trouble pronouncing her name.$"

Fareward_PlayerHouse1F_Text_SmallBookshelf::
# 98 "data/maps/PlayerHouse1F/scripts.pory"
	.string "The bookshelf is neat and organized,\n"
	.string "just the way Dad likes it.$"

Fareward_PlayerHouse1F_Text_Bookshelf::
# 103 "data/maps/PlayerHouse1F/scripts.pory"
	.string "There's mostly books on rare pokémon\n"
	.string "species and battle strategies, with a\l"
	.string "few sci-fi and romance novels mixed in.$"

Fareward_PlayerHouse1F_Text_MomBeckons1::
# 109 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mom:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}!$"

Fareward_PlayerHouse1F_Text_MomBeckons2::
# 113 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mom:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Could you come here? I've got some\n"
	.string "exciting news to share!$"

Fareward_PlayerHouse1F_Text_MomBeckons3::
# 118 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mom:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hi, sweetie. Are you feeling ready\n"
	.string "for the big day today? You must be\l"
	.string "so excited to receive your first\l"
	.string "pokémon!\p"
	.string "When I got my first partner pokémon,\n"
	.string "I was so excited I could hardly\l"
	.string "sleep the night before! Ah, that was\l"
	.string "quite some time ago now...\p"
	.string "Oh, right, the news. We have some new\n"
	.string "neighbors moving in today! They're a\l"
	.string "couple with a daughter named Haley\l"
	.string "who's about the same age as you.\p"
	.string "They're moving into the house at\n"
	.string "the east end of the street.\l"
	.string "You should stop by and say hello!$"

Fareward_PlayerHouse1F_Text_HemlockConvo::
# 136 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Hemlock:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ah, hello there {PLAYER}!\n"
	.string "It's good to see you again! I arrived\l"
	.string "just a few minutes ago. Your mother\l"
	.string "Grisha tells me that David Jarrett and\l"
	.string "his family have just begun moving in.\l"
	.string "That's great to hear; I'm looking\l"
	.string "forward to working with him.\p"
	.string "Anyway! Why don't we go see if your\n"
	.string "friends are ready to choose their\l"
	.string "first pokémon!$"

Fareward_PlayerHouse1F_Text_MomSeeNeighbors::
# 149 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mom:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Have you met the new neighbors\n"
	.string "yet? They're moving into the house at\l"
	.string "the east end of the street.$"

Fareward_PlayerHouse1F_Text_Dad1::
# 155 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Dad:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hey, kiddo! How've you and Damon\n"
	.string "been getting along? Tell his dad I'd\l"
	.string "love to go have drinks with him\l"
	.string "sometime soon, alright?$"

Fareward_PlayerHouse1F_Text_Dad2::
# 162 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Dad:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hey, kiddo! I hope you're having\n"
	.string "plenty of amazing experiences on your\l"
	.string "journey out there.$"
