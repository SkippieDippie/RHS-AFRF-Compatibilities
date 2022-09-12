class CfgPatches {
	class CVO_RHSAFRF_Compats_GreenMag_762x39_Magazines {
		addonRootClass = "CVO_RHSAFRF_Compats_GreenMag";

		requiredAddons[] = {"rhs_c_weapons"};
		requiredVersion = 1.00;

		units[] = {};
		weapons[] = {};
	};
};

class CfgMagazines {
	class rhs_30Rnd_545x39_7N6_AK;

	class rhs_30Rnd_762x39mm : rhs_30Rnd_545x39_7N6_AK {
		greenmag_canSpeedload = 1;
		greenmag_needBelt = 0;
		greenmag_ammo = "CVO_GreenMag_AFRF_Ammo_762x39_57N231_1Rnd";
		greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";
	};

	class rhs_30Rnd_762x39mm_89 : rhs_30Rnd_762x39mm {
		greenmag_ammo = "CVO_GreenMag_AFRF_Ammo_762x39_57N231_1Rnd";
	};

	class rhs_30Rnd_762x39mm_tracer : rhs_30Rnd_762x39mm {
		greenmag_ammo = "CVO_GreenMag_AFRF_Ammo_762x39_57N231P_1Rnd";
	};

	class rhs_30Rnd_762x39mm_U : rhs_30Rnd_762x39mm {
		greenmag_ammo = "CVO_GreenMag_AFRF_Ammo_762x39_57N231U_1Rnd";
	};
};
