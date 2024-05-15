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
	trainerbattle_earlyrival TRAINER_DAMON_FAREWARD_TURTWIG_WATTREL, RIVAL_BATTLE_TUTORIAL, Fareward_Text_DamonDefeated, Fareward_Text_DamonVictorous
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_8:
# 12 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_DAMON_FAREWARD_TURTWIG_CROAGUNK, RIVAL_BATTLE_TUTORIAL, Fareward_Text_DamonDefeated, Fareward_Text_DamonVictorous
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_9:
# 14 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_DAMON_FAREWARD_TURTWIG_ROCKRUFF, RIVAL_BATTLE_TUTORIAL, Fareward_Text_DamonDefeated, Fareward_Text_DamonVictorous
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_11:
# 19 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_DAMON_FAREWARD_CYNDAQUIL_WATTREL, RIVAL_BATTLE_TUTORIAL, Fareward_Text_DamonDefeated, Fareward_Text_DamonVictorous
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_12:
# 21 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_DAMON_FAREWARD_CYNDAQUIL_CROAGUNK, RIVAL_BATTLE_TUTORIAL, Fareward_Text_DamonDefeated, Fareward_Text_DamonVictorous
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_13:
# 23 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_DAMON_FAREWARD_CYNDAQUIL_ROCKRUFF, RIVAL_BATTLE_TUTORIAL, Fareward_Text_DamonDefeated, Fareward_Text_DamonVictorous
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_15:
# 28 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_DAMON_FAREWARD_POPPLIO_WATTREL, RIVAL_BATTLE_TUTORIAL, Fareward_Text_DamonDefeated, Fareward_Text_DamonVictorous
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_16:
# 30 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_DAMON_FAREWARD_POPPLIO_CROAGUNK, RIVAL_BATTLE_TUTORIAL, Fareward_Text_DamonDefeated, Fareward_Text_DamonVictorous
	goto Fareward_EventScript_DamonBattle_1

Fareward_EventScript_DamonBattle_17:
# 32 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_DAMON_FAREWARD_POPPLIO_ROCKRUFF, RIVAL_BATTLE_TUTORIAL, Fareward_Text_DamonDefeated, Fareward_Text_DamonVictorous
	goto Fareward_EventScript_DamonBattle_1


Fareward_EventScript_HaleyBattle::
# 39 "data/scripts/rival_battles.pory"
	switch VAR_STARTER_MON
# 40 "data/scripts/rival_battles.pory"
	case SPECIES_TURTWIG, Fareward_EventScript_HaleyBattle_3
# 49 "data/scripts/rival_battles.pory"
	case SPECIES_CYNDAQUIL, Fareward_EventScript_HaleyBattle_4
# 58 "data/scripts/rival_battles.pory"
	case SPECIES_POPPLIO, Fareward_EventScript_HaleyBattle_5
Fareward_EventScript_HaleyBattle_1:
	return

Fareward_EventScript_HaleyBattle_3:
# 41 "data/scripts/rival_battles.pory"
	switch VAR_SECOND_STARTER_MON
# 42 "data/scripts/rival_battles.pory"
	case SPECIES_WATTREL, Fareward_EventScript_HaleyBattle_7
# 44 "data/scripts/rival_battles.pory"
	case SPECIES_CROAGUNK, Fareward_EventScript_HaleyBattle_8
# 46 "data/scripts/rival_battles.pory"
	case SPECIES_ROCKRUFF, Fareward_EventScript_HaleyBattle_9
	goto Fareward_EventScript_HaleyBattle_1

Fareward_EventScript_HaleyBattle_4:
# 50 "data/scripts/rival_battles.pory"
	switch VAR_SECOND_STARTER_MON
# 51 "data/scripts/rival_battles.pory"
	case SPECIES_WATTREL, Fareward_EventScript_HaleyBattle_11
# 53 "data/scripts/rival_battles.pory"
	case SPECIES_CROAGUNK, Fareward_EventScript_HaleyBattle_12
# 55 "data/scripts/rival_battles.pory"
	case SPECIES_ROCKRUFF, Fareward_EventScript_HaleyBattle_13
	goto Fareward_EventScript_HaleyBattle_1

Fareward_EventScript_HaleyBattle_5:
# 59 "data/scripts/rival_battles.pory"
	switch VAR_SECOND_STARTER_MON
# 60 "data/scripts/rival_battles.pory"
	case SPECIES_WATTREL, Fareward_EventScript_HaleyBattle_15
# 62 "data/scripts/rival_battles.pory"
	case SPECIES_CROAGUNK, Fareward_EventScript_HaleyBattle_16
# 64 "data/scripts/rival_battles.pory"
	case SPECIES_ROCKRUFF, Fareward_EventScript_HaleyBattle_17
	goto Fareward_EventScript_HaleyBattle_1

Fareward_EventScript_HaleyBattle_7:
# 43 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_HALEY_FAREWARD_TURTWIG_WATTREL, RIVAL_BATTLE_TUTORIAL, Fareward_Text_HaleyDefeated, Fareward_Text_HaleyVictorous
	goto Fareward_EventScript_HaleyBattle_1

Fareward_EventScript_HaleyBattle_8:
# 45 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_HALEY_FAREWARD_TURTWIG_CROAGUNK, RIVAL_BATTLE_TUTORIAL, Fareward_Text_HaleyDefeated, Fareward_Text_HaleyVictorous
	goto Fareward_EventScript_HaleyBattle_1

Fareward_EventScript_HaleyBattle_9:
# 47 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_HALEY_FAREWARD_TURTWIG_ROCKRUFF, RIVAL_BATTLE_TUTORIAL, Fareward_Text_HaleyDefeated, Fareward_Text_HaleyVictorous
	goto Fareward_EventScript_HaleyBattle_1

Fareward_EventScript_HaleyBattle_11:
# 52 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_HALEY_FAREWARD_CYNDAQUIL_WATTREL, RIVAL_BATTLE_TUTORIAL, Fareward_Text_HaleyDefeated, Fareward_Text_HaleyVictorous
	goto Fareward_EventScript_HaleyBattle_1

Fareward_EventScript_HaleyBattle_12:
# 54 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_HALEY_FAREWARD_CYNDAQUIL_CROAGUNK, RIVAL_BATTLE_TUTORIAL, Fareward_Text_HaleyDefeated, Fareward_Text_HaleyVictorous
	goto Fareward_EventScript_HaleyBattle_1

Fareward_EventScript_HaleyBattle_13:
# 56 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_HALEY_FAREWARD_CYNDAQUIL_ROCKRUFF, RIVAL_BATTLE_TUTORIAL, Fareward_Text_HaleyDefeated, Fareward_Text_HaleyVictorous
	goto Fareward_EventScript_HaleyBattle_1

Fareward_EventScript_HaleyBattle_15:
# 61 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_HALEY_FAREWARD_POPPLIO_WATTREL, RIVAL_BATTLE_TUTORIAL, Fareward_Text_HaleyDefeated, Fareward_Text_HaleyVictorous
	goto Fareward_EventScript_HaleyBattle_1

Fareward_EventScript_HaleyBattle_16:
# 63 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_HALEY_FAREWARD_POPPLIO_CROAGUNK, RIVAL_BATTLE_TUTORIAL, Fareward_Text_HaleyDefeated, Fareward_Text_HaleyVictorous
	goto Fareward_EventScript_HaleyBattle_1

Fareward_EventScript_HaleyBattle_17:
# 65 "data/scripts/rival_battles.pory"
	trainerbattle_earlyrival TRAINER_HALEY_FAREWARD_POPPLIO_ROCKRUFF, RIVAL_BATTLE_TUTORIAL, Fareward_Text_HaleyDefeated, Fareward_Text_HaleyVictorous
	goto Fareward_EventScript_HaleyBattle_1


gText_NotEnoughMons::
# 1 "data/scripts/rival_battles.pory"
	.string "Somehow, you don't have enough pokémon!$"

Fareward_Text_DamonDefeated::
# 71 "data/scripts/rival_battles.pory"
	.string "Dang, I lost! Nice work, {PLAYER}!$"

Fareward_Text_DamonVictorous::
# 75 "data/scripts/rival_battles.pory"
	.string "I won! That was fun, {PLAYER}!$"

Fareward_Text_HaleyDefeated::
# 79 "data/scripts/rival_battles.pory"
	.string "Argh! Well at least I gave it a shot.$"

Fareward_Text_HaleyVictorous::
# 83 "data/scripts/rival_battles.pory"
	.string "Wow, I actually did it!$"
