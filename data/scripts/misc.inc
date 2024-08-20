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

gText_Locked::
	.string "It's locked.$"


gText_GiveNicknameToMon::
	.string "Should I give my {STR_VAR_1} a nickname?$"