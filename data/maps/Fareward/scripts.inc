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
	lockall
# 94 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Lass, MSGBOX_NPC
# 95 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_Hiker::
# 99 "data/maps/Fareward/scripts.pory"
	lockall
# 100 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Hiker, MSGBOX_NPC
# 101 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_Sign1::
# 105 "data/maps/Fareward/scripts.pory"
	lockall
# 106 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Sign1, MSGBOX_SIGN
# 107 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_Sign2::
# 111 "data/maps/Fareward/scripts.pory"
	lockall
# 112 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Sign2, MSGBOX_SIGN
# 113 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_Sign3::
# 117 "data/maps/Fareward/scripts.pory"
	lockall
# 118 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Sign3, MSGBOX_SIGN
# 119 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_Sign4::
# 123 "data/maps/Fareward/scripts.pory"
	lockall
# 124 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Sign4, MSGBOX_SIGN
# 125 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_Damon::
# 129 "data/maps/Fareward/scripts.pory"
	lockall
# 130 "data/maps/Fareward/scripts.pory"
	addobject 1
# 131 "data/maps/Fareward/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 132 "data/maps/Fareward/scripts.pory"
	applymovement 1, Fareward_Movement_Damon1
# 133 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 134 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Damon1
# 135 "data/maps/Fareward/scripts.pory"
	closemessage
# 136 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 137 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 138 "data/maps/Fareward/scripts.pory"
	applymovement 1, Fareward_Movement_Damon2
# 139 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 140 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_Damon2
# 141 "data/maps/Fareward/scripts.pory"
	closemessage
# 142 "data/maps/Fareward/scripts.pory"
	applymovement 1, Fareward_Movement_Damon3
# 143 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 144 "data/maps/Fareward/scripts.pory"
	removeobject 1
# 145 "data/maps/Fareward/scripts.pory"
	savebgm MUS_DUMMY
# 146 "data/maps/Fareward/scripts.pory"
	fadedefaultbgm
# 147 "data/maps/Fareward/scripts.pory"
	delay 10
# 148 "data/maps/Fareward/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 4
# 149 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_CONVO_IN_PLAYER_HOUSE
# 150 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_MOM_AT_CUPBOARD
# 151 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_DAD_DEFAULT
# 152 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 153 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_GetStarter::
# 157 "data/maps/Fareward/scripts.pory"
	lockall
# 158 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter1
# 159 "data/maps/Fareward/scripts.pory"
	closemessage
# 160 "data/maps/Fareward/scripts.pory"
	playse SE_BIKE_HOP
# 161 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_JumpInPlace_Up
# 162 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 163 "data/maps/Fareward/scripts.pory"
	playse SE_BIKE_HOP
# 164 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_JumpInPlace_Up
# 165 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 166 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter2
# 167 "data/maps/Fareward/scripts.pory"
	closemessage
# 168 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 169 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 170 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 171 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 172 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter3
# 173 "data/maps/Fareward/scripts.pory"
	closemessage
# 174 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 175 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 176 "data/maps/Fareward/scripts.pory"
	delay 4
# 177 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 178 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 179 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter4
# 180 "data/maps/Fareward/scripts.pory"
	closemessage
# 181 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter1
# 182 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 183 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter5
# 184 "data/maps/Fareward/scripts.pory"
	closemessage
# 185 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter2
# 186 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 187 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 188 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 189 "data/maps/Fareward/scripts.pory"
	delay 4
# 190 "data/maps/Fareward/scripts.pory"
	fadescreen FADE_TO_BLACK
# 191 "data/maps/Fareward/scripts.pory"
	special ChooseStarter
# 192 "data/maps/Fareward/scripts.pory"
	waitstate
# 193 "data/maps/Fareward/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 194 "data/maps/Fareward/scripts.pory"
	playfanfare MUS_EVOLVED
# 195 "data/maps/Fareward/scripts.pory"
	message Fareward_Text_GetStarter6
# 196 "data/maps/Fareward/scripts.pory"
	waitfanfare
# 197 "data/maps/Fareward/scripts.pory"
	msgbox gText_GiveNicknameToMon, MSGBOX_YESNO
# 198 "data/maps/Fareward/scripts.pory"
	call_if_eq VAR_RESULT, YES, Fareward_EventScript_NicknameStarter
# 199 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 200 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 201 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter7
# 202 "data/maps/Fareward/scripts.pory"
	closemessage
# 203 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter3
# 204 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter4
# 205 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter5
# 206 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 207 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 208 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 209 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 210 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 211 "data/maps/Fareward/scripts.pory"
	delay 16
# 212 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter6
# 213 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 214 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter8
# 215 "data/maps/Fareward/scripts.pory"
	closemessage
# 216 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 217 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 218 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter9
# 219 "data/maps/Fareward/scripts.pory"
	closemessage
# 220 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter7
# 221 "data/maps/Fareward/scripts.pory"
	delay 8
# 222 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter8
# 223 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 224 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 225 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 226 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 227 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter10
# 228 "data/maps/Fareward/scripts.pory"
	closemessage
# 229 "data/maps/Fareward/scripts.pory"
	playse SE_PIN
# 230 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 231 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 232 "data/maps/Fareward/scripts.pory"
	delay 48
# 233 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter11
# 234 "data/maps/Fareward/scripts.pory"
	closemessage
# 235 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 236 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 237 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter12
# 238 "data/maps/Fareward/scripts.pory"
	closemessage
# 239 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter9
# 240 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter4
# 241 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter10
# 242 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter2
# 243 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 244 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 245 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 246 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 247 "data/maps/Fareward/scripts.pory"
	fadescreen FADE_TO_BLACK
# 248 "data/maps/Fareward/scripts.pory"
	special ChooseStarter
# 249 "data/maps/Fareward/scripts.pory"
	waitstate
# 250 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter13
# 251 "data/maps/Fareward/scripts.pory"
	closemessage
# 252 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 253 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 254 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter14
# 255 "data/maps/Fareward/scripts.pory"
	closemessage
# 256 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 257 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 258 "data/maps/Fareward/scripts.pory"
	delay 4
# 259 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter11
# 260 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 261 "data/maps/Fareward/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_SECOND_STARTER_MON
# 262 "data/maps/Fareward/scripts.pory"
	playfanfare MUS_EVOLVED
# 263 "data/maps/Fareward/scripts.pory"
	message Fareward_Text_GetStarter6
# 264 "data/maps/Fareward/scripts.pory"
	waitfanfare
# 265 "data/maps/Fareward/scripts.pory"
	msgbox gText_GiveNicknameToMon, MSGBOX_YESNO
# 266 "data/maps/Fareward/scripts.pory"
	call_if_eq VAR_RESULT, YES, Fareward_EventScript_NicknameSecondStarter
# 267 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter15
# 268 "data/maps/Fareward/scripts.pory"
	closemessage
# 269 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter12
# 270 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 271 "data/maps/Fareward/scripts.pory"
	removeobject 3
# 272 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter13
# 273 "data/maps/Fareward/scripts.pory"
	delay 2
# 274 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter13
# 275 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 276 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 277 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter16
# 278 "data/maps/Fareward/scripts.pory"
	closemessage
# 279 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 280 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 281 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 282 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 283 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter17
# 284 "data/maps/Fareward/scripts.pory"
	closemessage
# 285 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 286 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 287 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter18
# 288 "data/maps/Fareward/scripts.pory"
	closemessage
# 289 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 290 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 291 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 292 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 293 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 294 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 295 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter19
# 296 "data/maps/Fareward/scripts.pory"
	closemessage
# 297 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter16
# 298 "data/maps/Fareward/scripts.pory"
	delay 4
# 299 "data/maps/Fareward/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 300 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter14
# 301 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Fareward_Movement_GetStarter15
# 302 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 303 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 304 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 305 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter20
# 306 "data/maps/Fareward/scripts.pory"
	closemessage
# 307 "data/maps/Fareward/scripts.pory"
	call Fareward_EventScript_DamonBattle
# 308 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter17
# 309 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 310 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter21
# 311 "data/maps/Fareward/scripts.pory"
	closemessage
# 312 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter18
# 313 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 314 "data/maps/Fareward/scripts.pory"
	playse SE_USE_ITEM
# 315 "data/maps/Fareward/scripts.pory"
	delay 24
# 316 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter19
# 317 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 318 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter22
# 319 "data/maps/Fareward/scripts.pory"
	closemessage
# 320 "data/maps/Fareward/scripts.pory"
	playse SE_USE_ITEM
# 321 "data/maps/Fareward/scripts.pory"
	delay 24
# 322 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastUp
# 323 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFastUp
# 324 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 325 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 326 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter23
# 327 "data/maps/Fareward/scripts.pory"
	closemessage
# 328 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter20
# 329 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 330 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter24
# 331 "data/maps/Fareward/scripts.pory"
	closemessage
# 332 "data/maps/Fareward/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 333 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter21
# 334 "data/maps/Fareward/scripts.pory"
	delay 16
# 335 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter16
# 336 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter16
# 337 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 338 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 339 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 340 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 341 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 342 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter25
# 343 "data/maps/Fareward/scripts.pory"
	closemessage
# 344 "data/maps/Fareward/scripts.pory"
	call Fareward_EventScript_HaleyBattle
# 345 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter26
# 346 "data/maps/Fareward/scripts.pory"
	closemessage
# 347 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter22
# 348 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 349 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter27
# 350 "data/maps/Fareward/scripts.pory"
	closemessage
# 351 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 352 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 353 "data/maps/Fareward/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 354 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 355 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 356 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 357 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter28
# 358 "data/maps/Fareward/scripts.pory"
	closemessage
# 359 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter23
# 360 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter24
# 361 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 362 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 363 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter29
# 364 "data/maps/Fareward/scripts.pory"
	closemessage
# 365 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter25
# 366 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 367 "data/maps/Fareward/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 368 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter30
# 369 "data/maps/Fareward/scripts.pory"
	waitfanfare
# 370 "data/maps/Fareward/scripts.pory"
	closemessage
# 371 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter26
# 372 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 373 "data/maps/Fareward/scripts.pory"
	delay 8
# 374 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter26
# 375 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 376 "data/maps/Fareward/scripts.pory"
	delay 8
# 377 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter27
# 378 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter31
# 379 "data/maps/Fareward/scripts.pory"
	closemessage
# 380 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter3
# 381 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 382 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 383 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 384 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 385 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 386 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter32
# 387 "data/maps/Fareward/scripts.pory"
	closemessage
# 388 "data/maps/Fareward/scripts.pory"
	applymovement 5, Fareward_Movement_GetStarter28
# 389 "data/maps/Fareward/scripts.pory"
	delay 60
# 390 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 391 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 392 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 393 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 394 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 395 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 396 "data/maps/Fareward/scripts.pory"
	delay 88
# 397 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 398 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 399 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 400 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 401 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 402 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 403 "data/maps/Fareward/scripts.pory"
	waitmovement 5
# 404 "data/maps/Fareward/scripts.pory"
	delay 40
# 405 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 406 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 407 "data/maps/Fareward/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 408 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 409 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 410 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 411 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter33
# 412 "data/maps/Fareward/scripts.pory"
	closemessage
# 413 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 414 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 415 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 416 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 417 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter34
# 418 "data/maps/Fareward/scripts.pory"
	closemessage
# 419 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter29
# 420 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 421 "data/maps/Fareward/scripts.pory"
	playse SE_USE_ITEM
# 422 "data/maps/Fareward/scripts.pory"
	delay 24
# 423 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter30
# 424 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 425 "data/maps/Fareward/scripts.pory"
	playse SE_USE_ITEM
# 426 "data/maps/Fareward/scripts.pory"
	delay 24
# 427 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter31
# 428 "data/maps/Fareward/scripts.pory"
	waitmovement 0
# 429 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter35
# 430 "data/maps/Fareward/scripts.pory"
	closemessage
# 431 "data/maps/Fareward/scripts.pory"
	applymovement 2, Fareward_Movement_GetStarter32
# 432 "data/maps/Fareward/scripts.pory"
	delay 48
# 433 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 434 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 435 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 436 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 437 "data/maps/Fareward/scripts.pory"
	delay 64
# 438 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 439 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 440 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 441 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 442 "data/maps/Fareward/scripts.pory"
	waitmovement 2
# 443 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 444 "data/maps/Fareward/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 445 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 446 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 447 "data/maps/Fareward/scripts.pory"
	msgbox Fareward_Text_GetStarter36
# 448 "data/maps/Fareward/scripts.pory"
	closemessage
# 449 "data/maps/Fareward/scripts.pory"
	applymovement 4, Fareward_Movement_GetStarter33
# 450 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 451 "data/maps/Fareward/scripts.pory"
	delay 200
# 452 "data/maps/Fareward/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 453 "data/maps/Fareward/scripts.pory"
	waitmovement 4
# 454 "data/maps/Fareward/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 455 "data/maps/Fareward/scripts.pory"
	removeobject 2
# 456 "data/maps/Fareward/scripts.pory"
	removeobject 4
# 457 "data/maps/Fareward/scripts.pory"
	removeobject 5
# 458 "data/maps/Fareward/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 459 "data/maps/Fareward/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 460 "data/maps/Fareward/scripts.pory"
	special SetUnlockedPokedexFlags
# 461 "data/maps/Fareward/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_MAPLE
# 462 "data/maps/Fareward/scripts.pory"
	setflag FLAG_ADDED_CONDITION_TO_POKENAV
# 463 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_CONVO_IN_PLAYER_HOUSE
# 464 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_MOM_DEFAULT
# 465 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_DAD_DEFAULT
# 466 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_HALEYS_DAD_DEFAULT
# 467 "data/maps/Fareward/scripts.pory"
	clearflag FLAG_HIDE_HALEYS_MOM_DEFAULT
# 468 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_HALEYS_MOM_AT_BOXES
# 469 "data/maps/Fareward/scripts.pory"
	setflag FLAG_HIDE_HALEY_HALEYHOUSE2F
# 470 "data/maps/Fareward/scripts.pory"
	setvar VAR_FAREWARD_INTRO_STATE, 6
# 471 "data/maps/Fareward/scripts.pory"
	releaseall
	return


Fareward_EventScript_NicknameStarter::
# 475 "data/maps/Fareward/scripts.pory"
	setvar VAR_0x8004, 0
# 476 "data/maps/Fareward/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


Fareward_EventScript_NicknameSecondStarter::
# 481 "data/maps/Fareward/scripts.pory"
	setvar VAR_0x8004, 1
# 482 "data/maps/Fareward/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


# 787 "data/maps/Fareward/scripts.pory"
Fareward_Movement_Damon1:
# 788 "data/maps/Fareward/scripts.pory"
	walk_down
# 788 "data/maps/Fareward/scripts.pory"
	walk_down
# 788 "data/maps/Fareward/scripts.pory"
	walk_down
# 788 "data/maps/Fareward/scripts.pory"
	walk_down
# 788 "data/maps/Fareward/scripts.pory"
	walk_down
# 788 "data/maps/Fareward/scripts.pory"
	walk_down
# 789 "data/maps/Fareward/scripts.pory"
	delay_8
# 790 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_right
	step_end

# 793 "data/maps/Fareward/scripts.pory"
Fareward_Movement_Damon2:
# 794 "data/maps/Fareward/scripts.pory"
	walk_right
# 794 "data/maps/Fareward/scripts.pory"
	walk_right
# 794 "data/maps/Fareward/scripts.pory"
	walk_right
# 794 "data/maps/Fareward/scripts.pory"
	walk_right
	step_end

# 797 "data/maps/Fareward/scripts.pory"
Fareward_Movement_Damon3:
# 798 "data/maps/Fareward/scripts.pory"
	walk_left
# 798 "data/maps/Fareward/scripts.pory"
	walk_left
# 798 "data/maps/Fareward/scripts.pory"
	walk_left
# 798 "data/maps/Fareward/scripts.pory"
	walk_left
# 798 "data/maps/Fareward/scripts.pory"
	walk_left
# 798 "data/maps/Fareward/scripts.pory"
	walk_left
	step_end

# 801 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter1:
# 802 "data/maps/Fareward/scripts.pory"
	face_right
# 803 "data/maps/Fareward/scripts.pory"
	delay_16
# 804 "data/maps/Fareward/scripts.pory"
	face_up
# 805 "data/maps/Fareward/scripts.pory"
	delay_16
# 806 "data/maps/Fareward/scripts.pory"
	face_right
# 807 "data/maps/Fareward/scripts.pory"
	delay_16
# 807 "data/maps/Fareward/scripts.pory"
	delay_16
# 808 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 811 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter2:
# 812 "data/maps/Fareward/scripts.pory"
	walk_up
# 812 "data/maps/Fareward/scripts.pory"
	walk_up
	step_end

# 815 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter3:
# 816 "data/maps/Fareward/scripts.pory"
	walk_down
# 816 "data/maps/Fareward/scripts.pory"
	walk_down
# 817 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 820 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter4:
# 821 "data/maps/Fareward/scripts.pory"
	walk_up
# 821 "data/maps/Fareward/scripts.pory"
	walk_up
# 821 "data/maps/Fareward/scripts.pory"
	walk_up
# 822 "data/maps/Fareward/scripts.pory"
	face_right
	step_end

# 825 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter5:
# 826 "data/maps/Fareward/scripts.pory"
	walk_up
# 826 "data/maps/Fareward/scripts.pory"
	walk_up
# 827 "data/maps/Fareward/scripts.pory"
	walk_left
# 828 "data/maps/Fareward/scripts.pory"
	face_up
	step_end

# 831 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter6:
# 832 "data/maps/Fareward/scripts.pory"
	walk_in_place_right
# 832 "data/maps/Fareward/scripts.pory"
	walk_in_place_right
	step_end

# 835 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter7:
# 836 "data/maps/Fareward/scripts.pory"
	walk_down
# 836 "data/maps/Fareward/scripts.pory"
	walk_down
# 836 "data/maps/Fareward/scripts.pory"
	walk_down
# 837 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 840 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter8:
# 841 "data/maps/Fareward/scripts.pory"
	walk_right
# 842 "data/maps/Fareward/scripts.pory"
	walk_down
# 842 "data/maps/Fareward/scripts.pory"
	walk_down
# 843 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 846 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter9:
# 847 "data/maps/Fareward/scripts.pory"
	walk_up
# 848 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_down
	step_end

# 851 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter10:
# 852 "data/maps/Fareward/scripts.pory"
	walk_up
# 852 "data/maps/Fareward/scripts.pory"
	walk_up
# 852 "data/maps/Fareward/scripts.pory"
	walk_up
# 853 "data/maps/Fareward/scripts.pory"
	face_left
	step_end

# 856 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter11:
# 857 "data/maps/Fareward/scripts.pory"
	walk_in_place_up
# 857 "data/maps/Fareward/scripts.pory"
	walk_in_place_up
	step_end

# 860 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter12:
# 861 "data/maps/Fareward/scripts.pory"
	walk_left
# 862 "data/maps/Fareward/scripts.pory"
	face_down
# 863 "data/maps/Fareward/scripts.pory"
	delay_4
# 864 "data/maps/Fareward/scripts.pory"
	walk_in_place_down
	step_end

# 867 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter13:
# 868 "data/maps/Fareward/scripts.pory"
	walk_down
# 869 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_up
	step_end

# 872 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter14:
# 873 "data/maps/Fareward/scripts.pory"
	walk_left
# 874 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_right
	step_end

# 877 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter15:
# 878 "data/maps/Fareward/scripts.pory"
	walk_right
# 878 "data/maps/Fareward/scripts.pory"
	walk_right
# 879 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_left
	step_end

# 882 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter16:
# 883 "data/maps/Fareward/scripts.pory"
	walk_up
# 883 "data/maps/Fareward/scripts.pory"
	walk_up
# 884 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_down
	step_end

# 887 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter17:
# 888 "data/maps/Fareward/scripts.pory"
	walk_in_place_right
# 888 "data/maps/Fareward/scripts.pory"
	walk_in_place_right
	step_end

# 891 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter18:
# 892 "data/maps/Fareward/scripts.pory"
	walk_down
# 892 "data/maps/Fareward/scripts.pory"
	walk_down
# 893 "data/maps/Fareward/scripts.pory"
	walk_left
	step_end

# 896 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter19:
# 897 "data/maps/Fareward/scripts.pory"
	walk_right
# 897 "data/maps/Fareward/scripts.pory"
	walk_right
	step_end

# 900 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter20:
# 901 "data/maps/Fareward/scripts.pory"
	walk_right
# 901 "data/maps/Fareward/scripts.pory"
	walk_right
# 902 "data/maps/Fareward/scripts.pory"
	walk_in_place_up
	step_end

# 905 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter21:
# 906 "data/maps/Fareward/scripts.pory"
	walk_left
# 906 "data/maps/Fareward/scripts.pory"
	walk_left
# 906 "data/maps/Fareward/scripts.pory"
	walk_left
# 907 "data/maps/Fareward/scripts.pory"
	walk_down
# 907 "data/maps/Fareward/scripts.pory"
	walk_down
# 908 "data/maps/Fareward/scripts.pory"
	face_right
	step_end

# 911 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter22:
# 912 "data/maps/Fareward/scripts.pory"
	walk_down
# 912 "data/maps/Fareward/scripts.pory"
	walk_down
# 913 "data/maps/Fareward/scripts.pory"
	face_left
	step_end

# 916 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter23:
# 917 "data/maps/Fareward/scripts.pory"
	walk_right
# 918 "data/maps/Fareward/scripts.pory"
	face_up
	step_end

# 921 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter24:
# 922 "data/maps/Fareward/scripts.pory"
	walk_right
# 922 "data/maps/Fareward/scripts.pory"
	walk_right
# 923 "data/maps/Fareward/scripts.pory"
	face_up
	step_end

# 926 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter25:
# 927 "data/maps/Fareward/scripts.pory"
	walk_down
# 928 "data/maps/Fareward/scripts.pory"
	walk_right
# 929 "data/maps/Fareward/scripts.pory"
	walk_in_place_down
	step_end

# 932 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter26:
# 933 "data/maps/Fareward/scripts.pory"
	walk_left
# 934 "data/maps/Fareward/scripts.pory"
	walk_in_place_down
	step_end

# 937 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter27:
# 938 "data/maps/Fareward/scripts.pory"
	walk_up
# 939 "data/maps/Fareward/scripts.pory"
	walk_right
# 940 "data/maps/Fareward/scripts.pory"
	face_down
	step_end

# 943 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter28:
# 944 "data/maps/Fareward/scripts.pory"
	walk_left
# 944 "data/maps/Fareward/scripts.pory"
	walk_left
# 944 "data/maps/Fareward/scripts.pory"
	walk_left
# 944 "data/maps/Fareward/scripts.pory"
	walk_left
# 945 "data/maps/Fareward/scripts.pory"
	walk_up
# 945 "data/maps/Fareward/scripts.pory"
	walk_up
# 945 "data/maps/Fareward/scripts.pory"
	walk_up
# 945 "data/maps/Fareward/scripts.pory"
	walk_up
# 945 "data/maps/Fareward/scripts.pory"
	walk_up
# 945 "data/maps/Fareward/scripts.pory"
	walk_up
# 945 "data/maps/Fareward/scripts.pory"
	walk_up
# 945 "data/maps/Fareward/scripts.pory"
	walk_up
	step_end

# 948 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter29:
# 949 "data/maps/Fareward/scripts.pory"
	walk_left
# 950 "data/maps/Fareward/scripts.pory"
	walk_down
	step_end

# 953 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter30:
# 954 "data/maps/Fareward/scripts.pory"
	walk_right
# 954 "data/maps/Fareward/scripts.pory"
	walk_right
# 955 "data/maps/Fareward/scripts.pory"
	face_down
	step_end

# 958 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter31:
# 959 "data/maps/Fareward/scripts.pory"
	walk_left
# 960 "data/maps/Fareward/scripts.pory"
	walk_up
# 961 "data/maps/Fareward/scripts.pory"
	walk_in_place_fast_down
	step_end

# 964 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter32:
# 965 "data/maps/Fareward/scripts.pory"
	walk_left
# 965 "data/maps/Fareward/scripts.pory"
	walk_left
# 965 "data/maps/Fareward/scripts.pory"
	walk_left
# 966 "data/maps/Fareward/scripts.pory"
	walk_down
# 966 "data/maps/Fareward/scripts.pory"
	walk_down
# 966 "data/maps/Fareward/scripts.pory"
	walk_down
# 966 "data/maps/Fareward/scripts.pory"
	walk_down
# 966 "data/maps/Fareward/scripts.pory"
	walk_down
# 966 "data/maps/Fareward/scripts.pory"
	walk_down
# 966 "data/maps/Fareward/scripts.pory"
	walk_down
# 966 "data/maps/Fareward/scripts.pory"
	walk_down
# 966 "data/maps/Fareward/scripts.pory"
	walk_down
# 966 "data/maps/Fareward/scripts.pory"
	walk_down
	step_end

# 969 "data/maps/Fareward/scripts.pory"
Fareward_Movement_GetStarter33:
# 970 "data/maps/Fareward/scripts.pory"
	walk_up
# 970 "data/maps/Fareward/scripts.pory"
	walk_up
# 970 "data/maps/Fareward/scripts.pory"
	walk_up
# 970 "data/maps/Fareward/scripts.pory"
	walk_up
# 971 "data/maps/Fareward/scripts.pory"
	walk_right
# 971 "data/maps/Fareward/scripts.pory"
	walk_right
# 971 "data/maps/Fareward/scripts.pory"
	walk_right
# 971 "data/maps/Fareward/scripts.pory"
	walk_right
# 971 "data/maps/Fareward/scripts.pory"
	walk_right
# 971 "data/maps/Fareward/scripts.pory"
	walk_right
# 971 "data/maps/Fareward/scripts.pory"
	walk_right
# 971 "data/maps/Fareward/scripts.pory"
	walk_right
# 971 "data/maps/Fareward/scripts.pory"
	walk_right
# 971 "data/maps/Fareward/scripts.pory"
	walk_right
# 971 "data/maps/Fareward/scripts.pory"
	walk_right
	step_end

Fareward_Text_ShouldMeetNeighbors::
# 486 "data/maps/Fareward/scripts.pory"
	.string "I should go meet the new neighbors.$"

Fareward_Text_ShouldGetStarter::
# 490 "data/maps/Fareward/scripts.pory"
	.string "I shouldn't leave until I've received my\n"
	.string "starter pokémon.$"

Fareward_Text_BoyAndGirl1::
# 495 "data/maps/Fareward/scripts.pory"
	.string "What's your favorite pokémon type?\n"
	.string "Mine is fire type!$"

Fareward_Text_BoyAndGirl2::
# 500 "data/maps/Fareward/scripts.pory"
	.string "So boring. My favorite is the elegant\n"
	.string "and beautiful fairy type, of course.$"

Fareward_Text_Man::
# 505 "data/maps/Fareward/scripts.pory"
	.string "Dagnabbit, where'd I put my keys?!\n"
	.string "Gonna have to call the locksmith again...$"

Fareward_Text_Lass::
# 510 "data/maps/Fareward/scripts.pory"
	.string "I love tending to these flowers.\n"
	.string "I sure wish my dad's lombre were here\l"
	.string "to help water them, though.$"

Fareward_Text_Hiker::
# 516 "data/maps/Fareward/scripts.pory"
	.string "I can't wait to hike Carnie's Butte today!\n"
	.string "The weather is just perfect for a\l"
	.string "nice trek through the wilderness.$"

Fareward_Text_Sign1::
# 522 "data/maps/Fareward/scripts.pory"
	.string "Fareward\n"
	.string "The newest town of Xemek.$"

Fareward_Text_Sign2::
# 527 "data/maps/Fareward/scripts.pory"
	.string "{DOWN_ARROW} Route 249$"

Fareward_Text_Sign3::
# 531 "data/maps/Fareward/scripts.pory"
	.string "{UP_ARROW} Route 250$"

Fareward_Text_Sign4::
# 535 "data/maps/Fareward/scripts.pory"
	.string "{RIGHT_ARROW} Route 251\n"
	.string "{RIGHT_ARROW} {RIGHT_ARROW} Carnie's Butte$"

Fareward_Text_Damon1::
# 540 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh, hey {PLAYER}!$"

Fareward_Text_Damon2::
# 544 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You excited to finally get\n"
	.string "your very own pokémon? I know I am!\p"
	.string "I wonder what pokémon we'll get to pick\n"
	.string "from. I hope there's a swablu!\p"
	.string "Well, let me know if you see Professor\n"
	.string "Maple before I do, ok? I gotta go take\l"
	.string "care of some stuff at home right now,\l"
	.string "so I'll see ya!$"

Fareward_Text_GetStarter1::
# 555 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Alright, you three.\n"
	.string "Are you ready to choose your\l"
	.string "first pokémon?$"

Fareward_Text_GetStarter2::
# 561 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yes, yes, yes! I'm so ready!$"

Fareward_Text_GetStarter3::
# 565 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Wow, your friend sure is pumped\n"
	.string "up for this, huh?$"

Fareward_Text_GetStarter4::
# 570 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I'm glad to see how much\n"
	.string "you're looking forward to this, Damon!\p"
	.string "However, I did promise Grisha to give\n"
	.string "{PLAYER} their own pokémon quite some\l"
	.string "time ago, so I'd like them to choose\l"
	.string "first if that's alright with the two\l"
	.string "of you.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Fine with me.$"

Fareward_Text_GetStarter5::
# 581 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh! Yeah, I guess that's ok.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ok then! {PLAYER},\n"
	.string "go ahead and choose one of the three\l"
	.string "pokémon from the large pouch of my bag.$"

Fareward_Text_GetStarter6::
# 588 "data/maps/Fareward/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"

Fareward_Text_GetStarter7::
# 592 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Excellent choice!\n"
	.string "Now, Damon and Haley, you two can\l"
	.string "choose from the remaining two pokémon.$"

Fareward_Text_GetStarter8::
# 598 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oooh, I'll take this one! ...Oh!\n"
	.string "Sorry, I'm getting ahead of myself.\l"
	.string "Is that alright with you, Haley?$"

Fareward_Text_GetStarter9::
# 604 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Sure, that's fine! I like\n"
	.string "the other one, anyway.\l"
	.string "Nice to meet you, by the way.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh, uh, yeah! Nice to meet you too!$"

Fareward_Text_GetStarter10::
# 611 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Wonderful! Now then,\n"
	.string "it's time to choose your second partners!$"

Fareward_Text_GetStarter11::
# 616 "data/maps/Fareward/scripts.pory"
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
# 634 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Don't mind if I do!$"

Fareward_Text_GetStarter13::
# 638 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You want that one, {PLAYER}?\n"
	.string "Then I'll take this one, ok?$"

Fareward_Text_GetStarter14::
# 643 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Works for me!$"

Fareward_Text_GetStarter15::
# 647 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Now then...$"

Fareward_Text_GetStarter16::
# 651 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Why don't we find out\n"
	.string "what your new partners are capable of?$"

Fareward_Text_GetStarter17::
# 656 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yeah! We've wanted to face\n"
	.string "each other in a pokémon battle since\l"
	.string "we were young, so let's do it now,\l"
	.string "{PLAYER}! Come on!$"

Fareward_Text_GetStarter18::
# 663 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Can't wait to get started, huh?$"

Fareward_Text_GetStarter19::
# 667 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Wonderful!\n"
	.string "Have at it, you two.$"

Fareward_Text_GetStarter20::
# 672 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ok, let's do this!$"

Fareward_Text_GetStarter21::
# 676 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Wow! That was so much fun!\n"
	.string "Wanna go again, {PLAYER}?\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Now hold on, Damon.\n"
	.string "Your pokémon will need some healing\l"
	.string "after that battle.$"

Fareward_Text_GetStarter22::
# 684 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Here, {PLAYER}.\n"
	.string "Let me heal your pokémon as well.$"

Fareward_Text_GetStarter23::
# 689 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} How about you battle\n"
	.string "{PLAYER} next, Haley?\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Me? I don't know, I'm not really\n"
	.string "that interested in pokémon battles.$"

Fareward_Text_GetStarter24::
# 696 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} C'mon, Haley!\n"
	.string "It's a ton of fun, I promise!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} ...\n"
	.string "... ...\l"
	.string "Alright, I'll give it a shot.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yeah! That's the spirit!$"

Fareward_Text_GetStarter25::
# 705 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Alright...here we go!$"

Fareward_Text_GetStarter26::
# 709 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You know, that was\n"
	.string "surprisingly fun!$"

Fareward_Text_GetStarter27::
# 714 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} See? I told you you'd have fun!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yeah, yeah...$"

Fareward_Text_GetStarter28::
# 719 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Alright, you three.\n"
	.string "If you'll allow me some final words.$"

Fareward_Text_GetStarter29::
# 724 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} First, I want each of you\n"
	.string "to take one of these.$"

Fareward_Text_GetStarter30::
# 729 "data/maps/Fareward/scripts.pory"
	.string "{PLAYER} recevied a pokédex!$"

Fareward_Text_GetStarter31::
# 733 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} They're called pokédexes.\n"
	.string "With them, you can record information\l"
	.string "about pokémon you see and catch.\p"
	.string "They're invaluable tools for\n"
	.string "any pokémon trainer.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Thank you, Professor!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yeah, thanks! This is super cool!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So, I suggest you three\n"
	.string "make your way down Route 249 toward\l"
	.string "Remus, then head east to Grandelia.\p"
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

Fareward_Text_GetStarter32::
# 757 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Damon:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} See y'all later!$"

Fareward_Text_GetStarter33::
# 761 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Your friend can't stay still\n"
	.string "for very long, can he?$"

Fareward_Text_GetStarter34::
# 766 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I find his enthusiasm for\n"
	.string "pokémon to be quite infectious!\p"
	.string "I hope you two are just as excited for\n"
	.string "your upcoming journeys as he is.\p"
	.string "For now...$"

Fareward_Text_GetStarter35::
# 774 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Prof. Maple:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I'd better head back to\n"
	.string "Grandelia and get back to my work.\p"
	.string "I hope to see you two again soon!$"

Fareward_Text_GetStarter36::
# 780 "data/maps/Fareward/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Haley:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Well, I should let my parents know\n"
	.string "about all this before I head out.\p"
	.string "It was nice to meet you, {PLAYER}.\n"
	.string "See you around!$"
