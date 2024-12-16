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


Fareward_EventScript_ShouldMeetNeighbors1::
# 17 "data/maps/Fareward/scripts.pory"
	lockall
# 18 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_ShouldMeetNeighbors
# 19 "data/maps/Fareward/scripts.pory"
	closemessage
# 20 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 21 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 22 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_ShouldMeetNeighbors2::
# 26 "data/maps/Fareward/scripts.pory"
	lockall
# 27 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_ShouldMeetNeighbors
# 28 "data/maps/Fareward/scripts.pory"
	closemessage
# 29 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 30 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 31 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_ShouldMeetNeighbors3::
# 35 "data/maps/Fareward/scripts.pory"
	lockall
# 36 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_ShouldMeetNeighbors
# 37 "data/maps/Fareward/scripts.pory"
	closemessage
# 38 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 39 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 40 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_ShouldGetStarter1::
# 44 "data/maps/Fareward/scripts.pory"
	lockall
# 45 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_ShouldGetStarter
# 46 "data/maps/Fareward/scripts.pory"
	closemessage
# 47 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 48 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 49 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_ShouldGetStarter2::
# 53 "data/maps/Fareward/scripts.pory"
	lockall
# 54 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_ShouldGetStarter
# 55 "data/maps/Fareward/scripts.pory"
	closemessage
# 56 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 57 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 58 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_ShouldGetStarter3::
# 62 "data/maps/Fareward/scripts.pory"
	lockall
# 63 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_ShouldGetStarter
# 64 "data/maps/Fareward/scripts.pory"
	closemessage
# 65 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 66 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 67 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_BoyAndGirl::
# 71 "data/maps/Fareward/scripts.pory"
	lockall
# 72 "data/maps/Fareward/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceRight
# 73 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 74 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_BoyAndGirl1
# 75 "data/maps/Fareward/scripts.pory"
	closemessage
# 76 "data/maps/Fareward/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceLeft
# 77 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 78 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_BoyAndGirl2
# 79 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_Man::
# 83 "data/maps/Fareward/scripts.pory"
	lockall
# 84 "data/maps/Fareward/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceDown
# 85 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 86 "data/maps/Fareward/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceDown
# 87 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 88 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Man
# 89 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_Lass::
# 93 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Lass, MSGBOX_NPC
	return


Fareward_EventScript_Hiker::
# 97 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Hiker, MSGBOX_NPC
	return


Fareward_EventScript_Sign1::
# 101 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Sign1, MSGBOX_SIGN
	return


Fareward_EventScript_Damon::
# 105 "data/maps/Fareward/scripts.pory"
	lockall
# 106 "data/maps/Fareward/scripts.pory"
	addobject 1
# 107 "data/maps/Fareward/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 108 "data/maps/Fareward/scripts.pory"
	applymovement 1, Fareward_Movement_Damon1
# 109 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 110 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Damon1
# 111 "data/maps/Fareward/scripts.pory"
	closemessage
# 112 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 113 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 114 "data/maps/Fareward/scripts.pory"
	applymovement 1, Fareward_Movement_Damon2
# 115 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 116 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Damon2
# 117 "data/maps/Fareward/scripts.pory"
	closemessage
# 118 "data/maps/Fareward/scripts.pory"
	applymovement 1, Fareward_Movement_Damon3
# 119 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 120 "data/maps/Fareward/scripts.pory"
	removeobject 1
# 121 "data/maps/Fareward/scripts.pory"
	savebgm MUS_DUMMY
# 122 "data/maps/Fareward/scripts.pory"
	fadedefaultbgm
# 123 "data/maps/Fareward/scripts.pory"
	delay 10
# 124 "data/maps/Fareward/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 4
# 125 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_CONVO_IN_PLAYER_HOUSE
# 126 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_MOM_AT_CUPBOARD
# 127 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_DAD_DEFAULT
# 128 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 129 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_GetStarter::
# 133 "data/maps/Fareward/scripts.pory"
	lockall
# 134 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter1
# 135 "data/maps/Fareward/scripts.pory"
	closemessage
# 136 "data/maps/Fareward/scripts.pory"
	playse SE_BIKE_HOP
# 137 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_JumpInPlace_Up
# 138 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 139 "data/maps/Fareward/scripts.pory"
	playse SE_BIKE_HOP
# 140 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_JumpInPlace_Up
# 141 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 142 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter2
# 143 "data/maps/Fareward/scripts.pory"
	closemessage
# 144 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 145 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 146 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 147 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 148 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter3
# 149 "data/maps/Fareward/scripts.pory"
	closemessage
# 150 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 151 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 152 "data/maps/Fareward/scripts.pory"
	delay 4
# 153 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 154 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 155 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter4
# 156 "data/maps/Fareward/scripts.pory"
	closemessage
# 157 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter1
# 158 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 159 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter5
# 160 "data/maps/Fareward/scripts.pory"
	closemessage
# 161 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter2
# 162 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 163 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 164 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 165 "data/maps/Fareward/scripts.pory"
	delay 4
# 166 "data/maps/Fareward/scripts.pory"
	fadescreen FADE_TO_BLACK
# 167 "data/maps/Fareward/scripts.pory"
	special ChooseStarter
# 168 "data/maps/Fareward/scripts.pory"
	waitstate
# 169 "data/maps/Fareward/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 170 "data/maps/Fareward/scripts.pory"
	playfanfare MUS_EVOLVED
# 171 "data/maps/Fareward/scripts.pory"
	message Fareward_Text_GetStarter6
# 172 "data/maps/Fareward/scripts.pory"
	waitfanfare
# 173 "data/maps/Fareward/scripts.pory"
	msgbox gText_GiveNicknameToMon, MSGBOX_YESNO
# 174 "data/maps/Fareward/scripts.pory"
	call_if_eq VAR_RESULT, YES, Fareward_EventScript_NicknameStarter
# 175 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 176 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 177 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter7
# 178 "data/maps/Fareward/scripts.pory"
	closemessage
# 179 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter3
# 180 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter4
# 181 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter5
# 182 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 183 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 184 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 185 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 186 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 187 "data/maps/Fareward/scripts.pory"
	delay 16
# 188 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter6
# 189 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 190 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter8
# 191 "data/maps/Fareward/scripts.pory"
	closemessage
# 192 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 193 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 194 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter9
# 195 "data/maps/Fareward/scripts.pory"
	closemessage
# 196 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter7
# 197 "data/maps/Fareward/scripts.pory"
	delay 8
# 198 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter8
# 199 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 200 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 201 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 202 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 203 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter10
# 204 "data/maps/Fareward/scripts.pory"
	closemessage
# 205 "data/maps/Fareward/scripts.pory"
	playse SE_PIN
# 206 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 207 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 208 "data/maps/Fareward/scripts.pory"
	delay 48
# 209 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter11
# 210 "data/maps/Fareward/scripts.pory"
	closemessage
# 211 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 212 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 213 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter12
# 214 "data/maps/Fareward/scripts.pory"
	closemessage
# 215 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter9
# 216 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter4
# 217 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter10
# 218 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter2
# 219 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 220 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 221 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 222 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 223 "data/maps/Fareward/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/Fareward/scripts.pory"
	special ChooseStarter
# 225 "data/maps/Fareward/scripts.pory"
	waitstate
# 226 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter13
# 227 "data/maps/Fareward/scripts.pory"
	closemessage
# 228 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 229 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 230 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter14
# 231 "data/maps/Fareward/scripts.pory"
	closemessage
# 232 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 233 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 234 "data/maps/Fareward/scripts.pory"
	delay 4
# 235 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter11
# 236 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 237 "data/maps/Fareward/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_SECOND_STARTER_MON
# 238 "data/maps/Fareward/scripts.pory"
	playfanfare MUS_EVOLVED
# 239 "data/maps/Fareward/scripts.pory"
	message Fareward_Text_GetStarter6
# 240 "data/maps/Fareward/scripts.pory"
	waitfanfare
# 241 "data/maps/Fareward/scripts.pory"
	msgbox gText_GiveNicknameToMon, MSGBOX_YESNO
# 242 "data/maps/Fareward/scripts.pory"
	call_if_eq VAR_RESULT, YES, Fareward_EventScript_NicknameSecondStarter
# 243 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter15
# 244 "data/maps/Fareward/scripts.pory"
	closemessage
# 245 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter12
# 246 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 247 "data/maps/Fareward/scripts.pory"
	removeobject 3
# 248 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter13
# 249 "data/maps/Fareward/scripts.pory"
	delay 2
# 250 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter13
# 251 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 252 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 253 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter16
# 254 "data/maps/Fareward/scripts.pory"
	closemessage
# 255 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 256 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 257 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 258 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 259 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter17
# 260 "data/maps/Fareward/scripts.pory"
	closemessage
# 261 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 262 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 263 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter18
# 264 "data/maps/Fareward/scripts.pory"
	closemessage
# 265 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 266 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 267 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 268 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 269 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 270 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 271 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter19
# 272 "data/maps/Fareward/scripts.pory"
	closemessage
# 273 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter16
# 274 "data/maps/Fareward/scripts.pory"
	delay 4
# 275 "data/maps/Fareward/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 276 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter14
# 277 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter15
# 278 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 279 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 280 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 281 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter20
# 282 "data/maps/Fareward/scripts.pory"
	closemessage
# 283 "data/maps/Fareward/scripts.pory"
	call Fareward_EventScript_DamonBattle
# 284 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter17
# 285 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 286 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter21
# 287 "data/maps/Fareward/scripts.pory"
	closemessage
# 288 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter18
# 289 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 290 "data/maps/Fareward/scripts.pory"
	playse SE_USE_ITEM
# 291 "data/maps/Fareward/scripts.pory"
	delay 24
# 292 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter19
# 293 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 294 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter22
# 295 "data/maps/Fareward/scripts.pory"
	closemessage
# 296 "data/maps/Fareward/scripts.pory"
	playse SE_USE_ITEM
# 297 "data/maps/Fareward/scripts.pory"
	delay 24
# 298 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastUp
# 299 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFastUp
# 300 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 301 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 302 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter23
# 303 "data/maps/Fareward/scripts.pory"
	closemessage
# 304 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter20
# 305 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 306 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter24
# 307 "data/maps/Fareward/scripts.pory"
	closemessage
# 308 "data/maps/Fareward/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 309 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter21
# 310 "data/maps/Fareward/scripts.pory"
	delay 16
# 311 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter16
# 312 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter16
# 313 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 314 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 315 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 316 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 317 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 318 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter25
# 319 "data/maps/Fareward/scripts.pory"
	closemessage
# 320 "data/maps/Fareward/scripts.pory"
	call Fareward_EventScript_HaleyBattle
# 321 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter26
# 322 "data/maps/Fareward/scripts.pory"
	closemessage
# 323 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter22
# 324 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 325 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter27
# 326 "data/maps/Fareward/scripts.pory"
	closemessage
# 327 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 328 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 329 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 330 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 331 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 332 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 333 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter28
# 334 "data/maps/Fareward/scripts.pory"
	closemessage
# 335 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter23
# 336 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter24
# 337 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 338 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 339 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter29
# 340 "data/maps/Fareward/scripts.pory"
	closemessage
# 341 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter25
# 342 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 343 "data/maps/Fareward/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 344 "data/maps/Fareward/scripts.pory"
	closemessage
# 345 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter26
# 346 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 347 "data/maps/Fareward/scripts.pory"
	delay 8
# 348 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter26
# 349 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 350 "data/maps/Fareward/scripts.pory"
	delay 8
# 351 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter27
# 352 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 353 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter30
# 354 "data/maps/Fareward/scripts.pory"
	closemessage
# 355 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter25
# 356 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 357 "data/maps/Fareward/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 358 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter31
# 359 "data/maps/Fareward/scripts.pory"
	waitfanfare
# 360 "data/maps/Fareward/scripts.pory"
	closemessage
# 361 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter26
# 362 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 363 "data/maps/Fareward/scripts.pory"
	delay 8
# 364 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter26
# 365 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 366 "data/maps/Fareward/scripts.pory"
	delay 8
# 367 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter27
# 368 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter32
# 369 "data/maps/Fareward/scripts.pory"
	closemessage
# 370 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter3
# 371 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 372 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 373 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 374 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 375 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 376 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter33
# 377 "data/maps/Fareward/scripts.pory"
	closemessage
# 378 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter28
# 379 "data/maps/Fareward/scripts.pory"
	delay 60
# 380 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 381 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 382 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 383 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 384 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 385 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 386 "data/maps/Fareward/scripts.pory"
	delay 88
# 387 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 388 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 389 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 390 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 391 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 392 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 393 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 394 "data/maps/Fareward/scripts.pory"
	delay 40
# 395 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 396 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 397 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 398 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 399 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 400 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 401 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter34
# 402 "data/maps/Fareward/scripts.pory"
	closemessage
# 403 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 404 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 405 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 406 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 407 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter35
# 408 "data/maps/Fareward/scripts.pory"
	closemessage
# 409 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter29
# 410 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 411 "data/maps/Fareward/scripts.pory"
	playse SE_USE_ITEM
# 412 "data/maps/Fareward/scripts.pory"
	delay 24
# 413 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter30
# 414 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 415 "data/maps/Fareward/scripts.pory"
	playse SE_USE_ITEM
# 416 "data/maps/Fareward/scripts.pory"
	delay 24
# 417 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter31
# 418 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 419 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter36
# 420 "data/maps/Fareward/scripts.pory"
	closemessage
# 421 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter32
# 422 "data/maps/Fareward/scripts.pory"
	delay 48
# 423 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 424 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 425 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 426 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 427 "data/maps/Fareward/scripts.pory"
	delay 64
# 428 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 429 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 430 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 431 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 432 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 433 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 434 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 435 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 436 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 437 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter37
# 438 "data/maps/Fareward/scripts.pory"
	closemessage
# 439 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter33
# 440 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 441 "data/maps/Fareward/scripts.pory"
	delay 200
# 442 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 443 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 444 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 445 "data/maps/Fareward/scripts.pory"
	removeobject 2
# 446 "data/maps/Fareward/scripts.pory"
	removeobject 4
# 447 "data/maps/Fareward/scripts.pory"
	removeobject 5
# 448 "data/maps/Fareward/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 449 "data/maps/Fareward/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 450 "data/maps/Fareward/scripts.pory"
	special SetUnlockedPokedexFlags
# 451 "data/maps/Fareward/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_MAPLE
# 452 "data/maps/Fareward/scripts.pory"
	setflag FLAG_ADDED_CONDITION_TO_POKENAV
# 453 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_CONVO_IN_PLAYER_HOUSE
# 454 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_MOM_DEFAULT
# 455 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_DAD_DEFAULT
# 456 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_HALEYS_DAD_DEFAULT
# 457 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_HALEYS_MOM_DEFAULT
# 458 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_HALEYS_MOM_AT_BOXES
# 459 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_HALEY_HALEYHOUSE2F
# 460 "data/maps/Fareward/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 6
# 461 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_NicknameStarter::
# 465 "data/maps/Fareward/scripts.pory"
	setvar VAR_0x8004, 0
# 466 "data/maps/Fareward/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


Fareward_EventScript_NicknameSecondStarter::
# 471 "data/maps/Fareward/scripts.pory"
	setvar VAR_0x8004, 1
# 472 "data/maps/Fareward/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


# 779 "data/maps/Fareward/scripts.pory"
Fareward_Movement_Damon1:
# 780 "data/maps/Fareward/scripts.pory"
	walk_down
# 780 "data/maps/Fareward/scripts.pory"
	walk_down
# 780 "data/maps/Fareward/scripts.pory"
	walk_down
# 780 "data/maps/Fareward/scripts.pory"
	walk_down
# 780 "data/maps/Fareward/scripts.pory"
	walk_down
# 780 "data/maps/Fareward/scripts.pory"
	walk_down
# 781 "data/maps/Fareward/scripts.pory"
	delay_8
# 782 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_right
	step_end

# 785 "data/maps/Fareward/scripts.pory"
Fareward_Movement_Damon2:
# 786 "data/maps/Fareward/scripts.pory"
	walk_right
# 786 "data/maps/Fareward/scripts.pory"
	walk_right
# 786 "data/maps/Fareward/scripts.pory"
	walk_right
# 786 "data/maps/Fareward/scripts.pory"
	walk_right
	step_end

# 789 "data/maps/Fareward/scripts.pory"
Fareward_Movement_Damon3:
# 790 "data/maps/Fareward/scripts.pory"
	walk_left
# 790 "data/maps/Fareward/scripts.pory"
	walk_left
# 790 "data/maps/Fareward/scripts.pory"
	walk_left
# 790 "data/maps/Fareward/scripts.pory"
	walk_left
# 790 "data/maps/Fareward/scripts.pory"
	walk_left
# 790 "data/maps/Fareward/scripts.pory"
	walk_left
	step_end

# 793 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter1:
# 794 "data/maps/Fareward/scripts.pory"
	face_right
# 795 "data/maps/Fareward/scripts.pory"
	delay_16
# 796 "data/maps/Fareward/scripts.pory"
	face_up
# 797 "data/maps/Fareward/scripts.pory"
	delay_16
# 798 "data/maps/Fareward/scripts.pory"
	face_right
# 799 "data/maps/Fareward/scripts.pory"
	delay_16
# 799 "data/maps/Fareward/scripts.pory"
	delay_16
# 800 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 803 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter2:
# 804 "data/maps/Fareward/scripts.pory"
	walk_up
# 804 "data/maps/Fareward/scripts.pory"
	walk_up
	step_end

# 807 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter3:
# 808 "data/maps/Fareward/scripts.pory"
	walk_down
# 808 "data/maps/Fareward/scripts.pory"
	walk_down
# 809 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 812 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter4:
# 813 "data/maps/Fareward/scripts.pory"
	walk_up
# 813 "data/maps/Fareward/scripts.pory"
	walk_up
# 813 "data/maps/Fareward/scripts.pory"
	walk_up
# 814 "data/maps/Fareward/scripts.pory"
	face_right
	step_end

# 817 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter5:
# 818 "data/maps/Fareward/scripts.pory"
	walk_up
# 818 "data/maps/Fareward/scripts.pory"
	walk_up
# 819 "data/maps/Fareward/scripts.pory"
	walk_left
# 820 "data/maps/Fareward/scripts.pory"
	face_up
	step_end

# 823 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter6:
# 824 "data/maps/Fareward/scripts.pory"
	walk_in_place_right
# 824 "data/maps/Fareward/scripts.pory"
	walk_in_place_right
	step_end

# 827 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter7:
# 828 "data/maps/Fareward/scripts.pory"
	walk_down
# 828 "data/maps/Fareward/scripts.pory"
	walk_down
# 828 "data/maps/Fareward/scripts.pory"
	walk_down
# 829 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 832 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter8:
# 833 "data/maps/Fareward/scripts.pory"
	walk_right
# 834 "data/maps/Fareward/scripts.pory"
	walk_down
# 834 "data/maps/Fareward/scripts.pory"
	walk_down
# 835 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 838 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter9:
# 839 "data/maps/Fareward/scripts.pory"
	walk_up
# 840 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_down
	step_end

# 843 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter10:
# 844 "data/maps/Fareward/scripts.pory"
	walk_up
# 844 "data/maps/Fareward/scripts.pory"
	walk_up
# 844 "data/maps/Fareward/scripts.pory"
	walk_up
# 845 "data/maps/Fareward/scripts.pory"
	face_left
	step_end

# 848 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter11:
# 849 "data/maps/Fareward/scripts.pory"
	walk_in_place_up
# 849 "data/maps/Fareward/scripts.pory"
	walk_in_place_up
	step_end

# 852 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter12:
# 853 "data/maps/Fareward/scripts.pory"
	walk_left
# 854 "data/maps/Fareward/scripts.pory"
	face_down
# 855 "data/maps/Fareward/scripts.pory"
	delay_4
# 856 "data/maps/Fareward/scripts.pory"
	walk_in_place_down
	step_end

# 859 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter13:
# 860 "data/maps/Fareward/scripts.pory"
	walk_down
# 861 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 864 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter14:
# 865 "data/maps/Fareward/scripts.pory"
	walk_left
# 866 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_right
	step_end

# 869 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter15:
# 870 "data/maps/Fareward/scripts.pory"
	walk_right
# 870 "data/maps/Fareward/scripts.pory"
	walk_right
# 871 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_left
	step_end

# 874 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter16:
# 875 "data/maps/Fareward/scripts.pory"
	walk_up
# 875 "data/maps/Fareward/scripts.pory"
	walk_up
# 876 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_down
	step_end

# 879 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter17:
# 880 "data/maps/Fareward/scripts.pory"
	walk_in_place_right
# 880 "data/maps/Fareward/scripts.pory"
	walk_in_place_right
	step_end

# 883 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter18:
# 884 "data/maps/Fareward/scripts.pory"
	walk_down
# 884 "data/maps/Fareward/scripts.pory"
	walk_down
# 885 "data/maps/Fareward/scripts.pory"
	walk_left
	step_end

# 888 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter19:
# 889 "data/maps/Fareward/scripts.pory"
	walk_right
# 889 "data/maps/Fareward/scripts.pory"
	walk_right
	step_end

# 892 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter20:
# 893 "data/maps/Fareward/scripts.pory"
	walk_right
# 893 "data/maps/Fareward/scripts.pory"
	walk_right
# 894 "data/maps/Fareward/scripts.pory"
	walk_in_place_up
	step_end

# 897 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter21:
# 898 "data/maps/Fareward/scripts.pory"
	walk_left
# 898 "data/maps/Fareward/scripts.pory"
	walk_left
# 898 "data/maps/Fareward/scripts.pory"
	walk_left
# 899 "data/maps/Fareward/scripts.pory"
	walk_down
# 899 "data/maps/Fareward/scripts.pory"
	walk_down
# 900 "data/maps/Fareward/scripts.pory"
	face_right
	step_end

# 903 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter22:
# 904 "data/maps/Fareward/scripts.pory"
	walk_down
# 904 "data/maps/Fareward/scripts.pory"
	walk_down
# 905 "data/maps/Fareward/scripts.pory"
	face_left
	step_end

# 908 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter23:
# 909 "data/maps/Fareward/scripts.pory"
	walk_right
# 910 "data/maps/Fareward/scripts.pory"
	face_up
	step_end

# 913 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter24:
# 914 "data/maps/Fareward/scripts.pory"
	walk_right
# 914 "data/maps/Fareward/scripts.pory"
	walk_right
# 915 "data/maps/Fareward/scripts.pory"
	face_up
	step_end

# 918 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter25:
# 919 "data/maps/Fareward/scripts.pory"
	walk_down
# 920 "data/maps/Fareward/scripts.pory"
	walk_right
# 921 "data/maps/Fareward/scripts.pory"
	walk_in_place_down
	step_end

# 924 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter26:
# 925 "data/maps/Fareward/scripts.pory"
	walk_left
# 926 "data/maps/Fareward/scripts.pory"
	walk_in_place_down
	step_end

# 929 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter27:
# 930 "data/maps/Fareward/scripts.pory"
	walk_up
# 931 "data/maps/Fareward/scripts.pory"
	walk_right
# 932 "data/maps/Fareward/scripts.pory"
	face_down
	step_end

# 935 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter28:
# 936 "data/maps/Fareward/scripts.pory"
	walk_left
# 936 "data/maps/Fareward/scripts.pory"
	walk_left
# 936 "data/maps/Fareward/scripts.pory"
	walk_left
# 936 "data/maps/Fareward/scripts.pory"
	walk_left
# 937 "data/maps/Fareward/scripts.pory"
	walk_up
# 937 "data/maps/Fareward/scripts.pory"
	walk_up
# 937 "data/maps/Fareward/scripts.pory"
	walk_up
# 937 "data/maps/Fareward/scripts.pory"
	walk_up
# 937 "data/maps/Fareward/scripts.pory"
	walk_up
# 937 "data/maps/Fareward/scripts.pory"
	walk_up
# 937 "data/maps/Fareward/scripts.pory"
	walk_up
# 937 "data/maps/Fareward/scripts.pory"
	walk_up
	step_end

# 940 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter29:
# 941 "data/maps/Fareward/scripts.pory"
	walk_left
# 942 "data/maps/Fareward/scripts.pory"
	walk_down
	step_end

# 945 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter30:
# 946 "data/maps/Fareward/scripts.pory"
	walk_right
# 946 "data/maps/Fareward/scripts.pory"
	walk_right
# 947 "data/maps/Fareward/scripts.pory"
	face_down
	step_end

# 950 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter31:
# 951 "data/maps/Fareward/scripts.pory"
	walk_left
# 952 "data/maps/Fareward/scripts.pory"
	walk_up
# 953 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_down
	step_end

# 956 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter32:
# 957 "data/maps/Fareward/scripts.pory"
	walk_left
# 957 "data/maps/Fareward/scripts.pory"
	walk_left
# 957 "data/maps/Fareward/scripts.pory"
	walk_left
# 958 "data/maps/Fareward/scripts.pory"
	walk_down
# 958 "data/maps/Fareward/scripts.pory"
	walk_down
# 958 "data/maps/Fareward/scripts.pory"
	walk_down
# 958 "data/maps/Fareward/scripts.pory"
	walk_down
# 958 "data/maps/Fareward/scripts.pory"
	walk_down
# 958 "data/maps/Fareward/scripts.pory"
	walk_down
# 958 "data/maps/Fareward/scripts.pory"
	walk_down
# 958 "data/maps/Fareward/scripts.pory"
	walk_down
# 958 "data/maps/Fareward/scripts.pory"
	walk_down
# 958 "data/maps/Fareward/scripts.pory"
	walk_down
	step_end

# 961 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter33:
# 962 "data/maps/Fareward/scripts.pory"
	walk_up
# 962 "data/maps/Fareward/scripts.pory"
	walk_up
# 962 "data/maps/Fareward/scripts.pory"
	walk_up
# 962 "data/maps/Fareward/scripts.pory"
	walk_up
# 963 "data/maps/Fareward/scripts.pory"
	walk_right
# 963 "data/maps/Fareward/scripts.pory"
	walk_right
# 963 "data/maps/Fareward/scripts.pory"
	walk_right
# 963 "data/maps/Fareward/scripts.pory"
	walk_right
# 963 "data/maps/Fareward/scripts.pory"
	walk_right
# 963 "data/maps/Fareward/scripts.pory"
	walk_right
# 963 "data/maps/Fareward/scripts.pory"
	walk_right
# 963 "data/maps/Fareward/scripts.pory"
	walk_right
# 963 "data/maps/Fareward/scripts.pory"
	walk_right
# 963 "data/maps/Fareward/scripts.pory"
	walk_right
# 963 "data/maps/Fareward/scripts.pory"
	walk_right
	step_end

Fareward_Text_ShouldMeetNeighbors::
# 476 "data/maps/Fareward/scripts.pory"
	.string "I should go meet the new neighbors.$"

Fareward_Text_ShouldGetStarter::
# 480 "data/maps/Fareward/scripts.pory"
	.string "I shouldn't leave until I've received my\n"
	.string "starter pokémon.$"

Fareward_Text_BoyAndGirl1::
# 485 "data/maps/Fareward/scripts.pory"
	.string "What's your favorite pokémon type?\n"
	.string "Mine is fire type!$"

Fareward_Text_BoyAndGirl2::
# 490 "data/maps/Fareward/scripts.pory"
	.string "So boring. My favorite is the elegant\n"
	.string "and beautiful fairy type, of course.$"

Fareward_Text_Man::
# 495 "data/maps/Fareward/scripts.pory"
	.string "Dagnabbit, where'd I put my keys?!\n"
	.string "Gonna have to call the locksmith again...$"

Fareward_Text_Lass::
# 500 "data/maps/Fareward/scripts.pory"
	.string "I love tending to these flowers.\n"
	.string "I sure wish my dad's lombre were here\l"
	.string "to help water them, though.$"

Fareward_Text_Hiker::
# 506 "data/maps/Fareward/scripts.pory"
	.string "I can't wait to hike Carnie's Butte today!\n"
	.string "The weather is just perfect for a\l"
	.string "nice trek through the wilderness.$"

Fareward_Text_Sign1::
# 512 "data/maps/Fareward/scripts.pory"
	.string "Fareward\n"
	.string "The new blooming town of east Xemek.\p"
	.string "{DOWN_ARROW} Route 249\n"
	.string "{UP_ARROW} Route 250\l"
	.string "{RIGHT_ARROW} Route 251$"

Fareward_Text_Damon1::
# 520 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh, hey {PLAYER}!$"

Fareward_Text_Damon2::
# 524 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You excited to finally get\n"
	.string "your very own pokémon? I know I am!\p"
	.string "I wonder what pokémon we'll get to pick\n"
	.string "from. I hope there's a swablu!\p"
	.string "Well, let me know if you see Professor\n"
	.string "Maple before I do, ok? I gotta go take\l"
	.string "care of some stuff at home right now,\l"
	.string "so I'll see ya!$"

Fareward_Text_GetStarter1::
# 535 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Alright, you three.\n"
	.string "Are you ready to choose your\l"
	.string "first pokémon?$"

Fareward_Text_GetStarter2::
# 541 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yes, yes, yes! I'm so ready!$"

Fareward_Text_GetStarter3::
# 545 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Wow, your friend sure is pumped\n"
	.string "up for this, huh?$"

Fareward_Text_GetStarter4::
# 550 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I'm glad to see how much\n"
	.string "you're looking forward to this, Damon!\p"
	.string "However, I did promise Grisha to give\n"
	.string "{PLAYER} their own pokémon quite some\l"
	.string "time ago, so I'd like them to choose\l"
	.string "first if that's alright with the two\l"
	.string "of you.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Fine with me.$"

Fareward_Text_GetStarter5::
# 561 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh! Yeah, I guess that's ok.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ok then! {PLAYER},\n"
	.string "go ahead and choose one of the three\l"
	.string "pokémon from the large pouch of my bag.$"

Fareward_Text_GetStarter6::
# 568 "data/maps/Fareward/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"

Fareward_Text_GetStarter7::
# 572 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Excellent choice!\n"
	.string "Now, Damon and Haley, you two can\l"
	.string "choose from the remaining two pokémon.$"

Fareward_Text_GetStarter8::
# 578 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oooh, I'll take this one! ...Oh!\n"
	.string "Sorry, I'm getting ahead of myself.\l"
	.string "Is that alright with you, Haley?$"

Fareward_Text_GetStarter9::
# 584 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Sure, that's fine! I like\n"
	.string "the other one, anyway.\l"
	.string "Nice to meet you, by the way.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh, uh, yeah! Nice to meet you too!$"

Fareward_Text_GetStarter10::
# 591 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Wonderful! Now then,\n"
	.string "it's time to choose your second partners!$"

Fareward_Text_GetStarter11::
# 596 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Huh? We each get to choose\n"
	.string "two pokémon?\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} That's right, Haley!\n"
	.string "In the Xemek region, using two pokémon\l"
	.string "at the same time is the most common\l"
	.string "form of pokémon battle.\p"
	.string "It was popularized some time ago by a\n"
	.string "group of famous Champion-ranked\l"
	.string "trainers.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I see. Well, I didn't expect to\n"
	.string "receive two pokémon today, but who\l"
	.string "would refuse an opportunity like that?\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Well then, why don't you all\n"
	.string "come and choose another pokémon\l"
	.string "from this second pouch?$"

Fareward_Text_GetStarter12::
# 614 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Don't mind if I do!$"

Fareward_Text_GetStarter13::
# 618 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You want that one, {PLAYER}?\n"
	.string "Then I'll take this one, ok?$"

Fareward_Text_GetStarter14::
# 623 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Works for me!$"

Fareward_Text_GetStarter15::
# 627 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Now then...$"

Fareward_Text_GetStarter16::
# 631 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Why don't we find out\n"
	.string "what your new partners are capable of?$"

Fareward_Text_GetStarter17::
# 636 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yeah! We've wanted to face\n"
	.string "each other in a pokémon battle since\l"
	.string "we were young, so let's do it now,\l"
	.string "{PLAYER}! Come on!$"

Fareward_Text_GetStarter18::
# 643 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Can't wait to get started, huh?$"

Fareward_Text_GetStarter19::
# 647 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Wonderful!\n"
	.string "Have at it, you two.$"

Fareward_Text_GetStarter20::
# 652 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ok, let's do this!$"

Fareward_Text_GetStarter21::
# 656 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Wow! That was so much fun!\n"
	.string "Wanna go again, {PLAYER}?\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Now hold on, Damon.\n"
	.string "Your pokémon will need some healing\l"
	.string "after that battle.$"

Fareward_Text_GetStarter22::
# 664 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Here, {PLAYER}.\n"
	.string "Let me heal your pokémon as well.$"

Fareward_Text_GetStarter23::
# 669 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} How about you battle\n"
	.string "{PLAYER} next, Haley?\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Me? I don't know, I'm not really\n"
	.string "that interested in pokémon battles.$"

Fareward_Text_GetStarter24::
# 676 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} C'mon, Haley!\n"
	.string "It's a ton of fun, I promise!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} ...\n"
	.string "... ...\l"
	.string "Alright, I'll give it a shot.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yeah! That's the spirit!$"

Fareward_Text_GetStarter25::
# 685 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Alright...here goes nothing!$"

Fareward_Text_GetStarter26::
# 689 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You know, that was\n"
	.string "surprisingly fun!$"

Fareward_Text_GetStarter27::
# 694 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} See? I told you you'd have fun!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yeah, yeah...$"

Fareward_Text_GetStarter28::
# 699 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Alright, you three.\n"
	.string "If you'll allow me some final words.$"

Fareward_Text_GetStarter29::
# 704 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} First, I'd like each of you\n"
	.string "to have these.$"

Fareward_Text_GetStarter30::
# 709 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I'm sure you already know\n"
	.string "that you can use these poké balls to\l"
	.string "catch wild pokémon.\p"
	.string "Make sure to weaken your foe and\n"
	.string "inflict it with a status condition\l"
	.string "to make it easier to capture.\p"
	.string "I also want each of you to take\n"
	.string "one of these with you.$"

Fareward_Text_GetStarter31::
# 720 "data/maps/Fareward/scripts.pory"
	.string "{PLAYER} received a Pokédex!$"

Fareward_Text_GetStarter32::
# 724 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} They're called Pokédexes.\n"
	.string "With them, you can record information\l"
	.string "about pokémon you see and catch.\p"
	.string "They're invaluable tools for\n"
	.string "any pokémon trainer.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Thank you so much, Professor!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yeah, thanks! This is super cool!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's my pleasure!\p"
	.string "Now, I suggest you three make your way\n"
	.string "down Route 249 toward Remus,\l"
	.string "then head east to Grandelia.\p"
	.string "You can stop by my research laboratory\n"
	.string "there to check in.\p"
	.string "Anyway, I'm looking forward to seeing how\n"
	.string "you three develop as trainers.\p"
	.string "I hope to see you form strong bonds with\n"
	.string "your pokémon.\p"
	.string "You can learn just as much them as\n"
	.string "they can learn from you.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Well said, Professor!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Thanks for the advice, Prof! I'm\n"
	.string "gonna go catch all sorts of cool pokémon!$"

Fareward_Text_GetStarter33::
# 749 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} See y'all later!$"

Fareward_Text_GetStarter34::
# 753 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Your friend can't stay still\n"
	.string "for very long, can he?$"

Fareward_Text_GetStarter35::
# 758 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I find his enthusiasm for\n"
	.string "pokémon to be quite infectious!\p"
	.string "I hope you two are just as excited for\n"
	.string "your upcoming journeys as he is.\p"
	.string "For now...$"

Fareward_Text_GetStarter36::
# 766 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I'd better head back to\n"
	.string "Grandelia and get back to my work.\p"
	.string "I hope to see you two again soon!$"

Fareward_Text_GetStarter37::
# 772 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Well, I should let my parents know\n"
	.string "about all this before I head out.\p"
	.string "It was nice to meet you, {PLAYER}.\n"
	.string "See you around!$"
