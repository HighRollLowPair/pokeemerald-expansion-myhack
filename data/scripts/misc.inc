EventScript_Window::
	lockall
	msgbox gText_Window, MSGBOX_DEFAULT
	releaseall
	end

gText_Window::
	.string "It's a beautiful day today!$"

EventScript_Locked::
	lock
	msgbox gText_Locked
	release
	end

EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastDown
	waitmovement 0
	release
	end

gText_Locked::
	.string "It's locked.$"


gText_GiveNicknameToMon::
	.string "Should I give my {STR_VAR_1} a nickname?$"