PewterCity_Museum_2F_MapScripts::
	.byte 0

PewterCity_Museum_2F_EventScript_Man::
	msgbox PewterCity_Museum_2F_Text_WhatsSpecialAboutMoonStone, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_OldMan::
	msgbox PewterCity_Museum_2F_Text_BoughtColorTVForMoonLanding, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_Scientist::
	msgbox PewterCity_Museum_2F_Text_RunningSpaceExhibitThisMonth, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_LittleGirl::
	msgbox PewterCity_Museum_2F_Text_AskedDaddyToCatchPikachu, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_BaldingMan::
	msgbox PewterCity_Museum_2F_Text_PikachuSoonIPromise, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_SpaceShuttle::
	msgbox PewterCity_Museum_2F_Text_SpaceShuttle, MSGBOX_SIGN
	end

PewterCity_Museum_2F_EventScript_MoonStone::
	msgbox PewterCity_Museum_2F_Text_MeteoriteThatFellOnMtMoon, MSGBOX_SIGN
	end

PewterCity_Museum_2F_EventScript_Clefairy::
	lockall
	setvar VAR_0x8004, SPECIES_CLEFAIRY
	special SetSeenMon
	showmonpic SPECIES_CLEFAIRY, 10, 3
	msgbox PewterCity_Museum_2F_Text_ClefairySign
	hidemonpic
	releaseall
	end

PewterCity_Museum_2F_Text_ClefairySign::
    .string "This POKé BALL holds a\n"
	.string "CLEFAIRY caught in MT. MOON.$"

PewterCity_Museum_2F_EventScript_Computer::
	msgbox PewterCity_Museum_2F_Text_Computer, MSGBOX_SIGN
	end

PewterCity_Museum_2F_Text_Computer::
    .string "This computer is playing live\n"
	.string "feeds from satellites."
