#include "\z\cvo_rhsafrf_compats\greenmag\macros.hpp"

class CfgPatches {
	class CVO_RHSAFRF_Compats_GreenMag_762x39_Ammo {
		addonRootClass = "CVO_RHSAFRF_Compats_GreenMag";

		requiredAddons[] = {"greenmag_main"};
		requiredVersion = 1.00;

		units[] = {};
		weapons[] = {
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231P_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231P_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231P_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231U_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231U_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231U_60Rnd",
		};
	};
};

class CfgWeapons {
	class greenmag_core_1Rnd;
	class greenmag_core_10Rnd;
	class greenmag_core_20Rnd;
	class greenmag_core_30Rnd;
	class greenmag_core_40Rnd;
	class greenmag_core_50Rnd;
	class greenmag_core_60Rnd;

	AMMO_CLASS(762x39_57N231,7.62x39 57-N-231)
	AMMO_CLASS(762x39_57N231P,7.62x39 57-N-231P)
	AMMO_CLASS(762x39_57N231U,7.62x39 57-N-231U)
};