PlayerHouse1F_MapScripts::
# 2 "data/maps/PlayerHouse1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PlayerHouse1F/scripts.pory"
	map_script_2 VAR_FAREWARD_INTRO_STATE, 1, Fareward_PlayerHouse1F_EventScript_MomBeckons
# 4 "data/maps/PlayerHouse1F/scripts.pory"
	map_script_2 VAR_FAREWARD_INTRO_STATE, 4, Fareward_PlayerHouse1F_EventScript_MapleConvo
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


Fareward_PlayerHouse1F_EventScript_MapleConvo::
# 52 "data/maps/PlayerHouse1F/scripts.pory"
	lockall
# 53 "data/maps/PlayerHouse1F/scripts.pory"
	playse SE_PIN
# 54 "data/maps/PlayerHouse1F/scripts.pory"
	applymovement 5, Fareward_PlayerHouse1F_Movement_MapleConvo
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
	msgbox Fareward_PlayerHouse1F_Text_MapleConvo
# 62 "data/maps/PlayerHouse1F/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 5
# 63 "data/maps/PlayerHouse1F/scripts.pory"
	clearflag FLAG_HIDE_CHOOSE_STARTER
# 64 "data/maps/PlayerHouse1F/scripts.pory"
	clearflag FLAG_HIDE_MAPLES_BAG
# 65 "data/maps/PlayerHouse1F/scripts.pory"
	warp MAP_FAREWARD, 13, 16
# 66 "data/maps/PlayerHouse1F/scripts.pory"
	waitstate
# 67 "data/maps/PlayerHouse1F/scripts.pory"
	releaseall
	return


Fareward_PlayerHouse1F_EventScript_MomSeeNeighbors::
# 71 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_MomSeeNeighbors, MSGBOX_NPC
	return


Fareward_PlayerHouse1F_EventScript_Dad::
# 75 "data/maps/PlayerHouse1F/scripts.pory"
	compare VAR_FAREWARD_INTRO_STATE, 2
	goto_if_eq Fareward_PlayerHouse1F_EventScript_Dad_1
# 79 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_Dad2, MSGBOX_NPC
	return

Fareward_PlayerHouse1F_EventScript_Dad_1:
# 76 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_Dad1, MSGBOX_NPC
	return


Fareward_PlayerHouse1F_EventScript_Mom::
# 84 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_Mom1, MSGBOX_NPC
# 85 "data/maps/PlayerHouse1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 86 "data/maps/PlayerHouse1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 87 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox Fareward_PlayerHouse1F_Text_Mom2, MSGBOX_NPC
	return


# 183 "data/maps/PlayerHouse1F/scripts.pory"
Fareward_PlayerHouse1F_Movement_MomBeckons1:
# 184 "data/maps/PlayerHouse1F/scripts.pory"
	face_right
# 185 "data/maps/PlayerHouse1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 188 "data/maps/PlayerHouse1F/scripts.pory"
Fareward_PlayerHouse1F_Movement_MomBeckons2:
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	walk_right
# 190 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 190 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 190 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 190 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 190 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 190 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 190 "data/maps/PlayerHouse1F/scripts.pory"
	walk_up
# 191 "data/maps/PlayerHouse1F/scripts.pory"
	face_left
	step_end

# 194 "data/maps/PlayerHouse1F/scripts.pory"
Fareward_PlayerHouse1F_Movement_MapleConvo:
# 195 "data/maps/PlayerHouse1F/scripts.pory"
	face_down
# 196 "data/maps/PlayerHouse1F/scripts.pory"
	emote_exclamation_mark
	step_end

Fareward_PlayersHouse1F_Text_ParentsRoom::
# 90 "data/maps/PlayerHouse1F/scripts.pory"
	.string "The door to Mom and Dad's room.\n"
	.string "I shouldn't go in without asking.$"

Fareward_PlayerHouse1F_Text_ArtPiece::
# 95 "data/maps/PlayerHouse1F/scripts.pory"
	.string "A painting made by a famous artist\n"
	.string "from the Kalos region.\p"
	.string "I have trouble pronouncing her name.$"

Fareward_PlayerHouse1F_Text_SmallBookshelf::
# 101 "data/maps/PlayerHouse1F/scripts.pory"
	.string "The bookshelf is neat and organized,\n"
	.string "just the way Dad likes it.$"

Fareward_PlayerHouse1F_Text_Bookshelf::
# 106 "data/maps/PlayerHouse1F/scripts.pory"
	.string "There's mostly books on rare pokémon\n"
	.string "species and battle strategies,\l"
	.string "with a couple of sci-fi and\l"
	.string "romance novels mixed in.$"

Fareward_PlayerHouse1F_Text_MomBeckons1::
# 113 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mom:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}!$"

Fareward_PlayerHouse1F_Text_MomBeckons2::
# 117 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mom:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Could you come here? I've got some\n"
	.string "exciting news to share!$"

Fareward_PlayerHouse1F_Text_MomBeckons3::
# 122 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mom:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hi, sweetie. Are you feeling ready\n"
	.string "for the big day today?\p"
	.string "You must be so excited to receive\n"
	.string "your first pokémon!\p"
	.string "When I got my first partner pokémon,\n"
	.string "I was so excited I could hardly sleep\l"
	.string "the night before! Ah, that was quite\l"
	.string "some time ago now...\p"
	.string "Oh, right, the news. We have some new\n"
	.string "neighbors moving in today!\p"
	.string "They're a couple with a daughter\n"
	.string "named Haley who's about the same\l"
	.string "age as you.\p"
	.string "They're moving into the house at the\n"
	.string "east end of the street. You should\l"
	.string "stop by and say hello!$"

Fareward_PlayerHouse1F_Text_MapleConvo::
# 141 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ah, hello there {PLAYER}!\n"
	.string "It's good to see you again!\p"
	.string "I arrived just a few minutes ago.\n"
	.string "Your mother Grisha tells me that\l"
	.string "David Jarrett and his family have\l"
	.string "just begun moving in. That's great\l"
	.string "to hear; I'm looking forward to\l"
	.string "working with him.\p"
	.string "Anyway! Why don't we go see if\n"
	.string "your friends are ready to choose\l"
	.string "their first pokémon!$"

Fareward_PlayerHouse1F_Text_MomSeeNeighbors::
# 155 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mom:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Have you met the new neighbors yet?\n"
	.string "They're moving into the house at\l"
	.string "the east end of the street.$"

Fareward_PlayerHouse1F_Text_Mom1::
# 161 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mom:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hey there, sweetie. Feeling tired?\n"
	.string "How about you rest for a while.$"

Fareward_PlayerHouse1F_Text_Mom2::
# 166 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mom:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Good luck out there!$"

Fareward_PlayerHouse1F_Text_Dad1::
# 170 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Dad:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hey, kiddo! How've you and Damon\n"
	.string "been getting along?\p"
	.string "Tell his dad I'd love to go have drinks\n"
	.string "with him sometime soon, alright?$"

Fareward_PlayerHouse1F_Text_Dad2::
# 177 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Dad:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hey, kiddo! I hope you're having\n"
	.string "plenty of amazing experiences on your\l"
	.string "journey out there.$"
