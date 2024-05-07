Fareward_EventScript_DamonBattle::
# 6 "data/scripts/rival_battles.pory"
	switch VAR_STARTER_MON
# 7 "data/scripts/rival_battles.pory"
	case SPECIES_TURTWIG, Fareward_EventScript_DamonBattle_3
# 16 "data/scripts/rival_battles.pory"
	case SPECIES_CYNDAQUIL, Fareward_EventScript_DamonBattle_4
# 25 "data/scripts/rival_battles.pory"
	case SPECIES_POPPLIO, Fareward_EventScript_DamonBattle_5
Fareward_EventScript_DamonBattle_1:
	return

Fareward_EventScript_DamonBattle_3:
# 8 "data/scripts/rival_battles.pory"
	switch VAR_SECOND_STARTER_MON
# 9 "data/scripts/rival_battles.pory"
	case SPECIES_WATTREL, Fareward_EventScript_DamonBattle_7
# 11 "data/scripts/rival_battles.pory"
	case SPECIES_CROAGUNK, Fareward_EventScript_DamonBattle_8
# 13 "data/scripts/rival_battles.pory"
	case SPECIES_ROCKRUFF, Fareward_EventScript_DamonBattle_9
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_4:
# 17 "data/scripts/rival_battles.pory"
	switch VAR_SECOND_STARTER_MON
# 18 "data/scripts/rival_battles.pory"
	case SPECIES_WATTREL, Fareward_EventScript_DamonBattle_11
# 20 "data/scripts/rival_battles.pory"
	case SPECIES_CROAGUNK, Fareward_EventScript_DamonBattle_12
# 22 "data/scripts/rival_battles.pory"
	case SPECIES_ROCKRUFF, Fareward_EventScript_DamonBattle_13
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_5:
# 26 "data/scripts/rival_battles.pory"
	switch VAR_SECOND_STARTER_MON
# 27 "data/scripts/rival_battles.pory"
	case SPECIES_WATTREL, Fareward_EventScript_DamonBattle_15
# 29 "data/scripts/rival_battles.pory"
	case SPECIES_CROAGUNK, Fareward_EventScript_DamonBattle_16
# 31 "data/scripts/rival_battles.pory"
	case SPECIES_ROCKRUFF, Fareward_EventScript_DamonBattle_17
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_7:
# 10 "data/scripts/rival_battles.pory"
	trainerbattle_no_intro TRAINER_DAMON_FAREWARD_TURTWIG_WATTREL, Fareward_Text_DamonDefeated
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_8:
# 12 "data/scripts/rival_battles.pory"
	trainerbattle_no_intro TRAINER_DAMON_FAREWARD_TURTWIG_CROAGUNK, Fareward_Text_DamonDefeated
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_9:
# 14 "data/scripts/rival_battles.pory"
	trainerbattle_no_intro TRAINER_DAMON_FAREWARD_TURTWIG_ROCKRUFF, Fareward_Text_DamonDefeated
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_11:
# 19 "data/scripts/rival_battles.pory"
	trainerbattle_no_intro TRAINER_DAMON_FAREWARD_CYNDAQIL_WATTREL, Fareward_Text_DamonDefeated
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_12:
# 21 "data/scripts/rival_battles.pory"
	trainerbattle_no_intro TRAINER_DAMON_FAREWARD_CYNDAQIL_CROAGUNK, Fareward_Text_DamonDefeated
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_13:
# 23 "data/scripts/rival_battles.pory"
	trainerbattle_no_intro TRAINER_DAMON_FAREWARD_CYNDAQIL_ROCKRUFF, Fareward_Text_DamonDefeated
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_15:
# 28 "data/scripts/rival_battles.pory"
	trainerbattle_no_intro TRAINER_DAMON_FAREWARD_POPPLIO_WATTREL, Fareward_Text_DamonDefeated
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_16:
# 30 "data/scripts/rival_battles.pory"
	trainerbattle_no_intro TRAINER_DAMON_FAREWARD_POPPLIO_CROAGUNK, Fareward_Text_DamonDefeated
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_17:
# 32 "data/scripts/rival_battles.pory"
	trainerbattle_no_intro TRAINER_DAMON_FAREWARD_POPPLIO_ROCKRUFF, Fareward_Text_DamonDefeated
	goto Fareward_EventScript_DamonBattle_1


gText_NotEnoughMons::
# 1 "data/scripts/rival_battles.pory"
	.string "Somehow, you don't have enough pokémon!$"

Fareward_Text_DamonDefeated::
# 38 "data/scripts/rival_battles.pory"
	.string "Dang, I lost! Nice work, {PLAYER}!$"
