class CfgPatches {
	class CVO_RHSAFRF_Compats_GreenMag_762x54_Magazines {
		addonRootClass = "CVO_RHSAFRF_Compats_GreenMag";

		requiredAddons[] = {"rhs_c_weapons"};
		requiredVersion = 1.00;

		units[] = {};
		weapons[] = {};
	};
};

class CfgMagazines {
	class rhs_30Rnd_545x39_7N6_AK;

	class rhs_10Rnd_762x54mmR_7N1 : rhs_30Rnd_545x39_7N6_AK {
		greenmag_canSpeedload = 1;
		greenmag_needBelt = 0;
		greenmag_ammo = "CVO_GreenMag_AFRF_Ammo_762x54_7N1_1Rnd";
		greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";		
	};

	class rhs_10Rnd_762x54mmR_7N14 : rhs_10Rnd_762x54mmR_7N1 {
		greenmag_ammo = "CVO_GreenMag_AFRF_Ammo_762x54_7N14_1Rnd";
	};
};