class CfgPatches {
	class CVO_RHSAFRF_Compats_GreenMag_545x39_Magazines {
		addonRootClass = "CVO_RHSAFRF_Compats_GreenMag";

		requiredAddons[] = {"rhs_c_weapons"};
		requiredVersion = 1.00;

		units[] = {};
		weapons[] = {};
	};
};

class CfgMagazines {
	class CA_Magazine;

	class rhs_30Rnd_545x39_AK : CA_Magazine {
		greenmag_canSpeedload = 1;
		greenmag_needBelt = 0;
		greenmag_ammo = "greenmag_ammo_545x39_basic_1Rnd";
		greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";
	};

	class rhs_30Rnd_545x39_7N6_AK : rhs_30Rnd_545x39_AK {
		greenmag_ammo = "CVO_GreenMag_AFRF_Ammo_545x39_7N6_1Rnd";
	};

	class rhs_30Rnd_545x39_7N6M_AK : rhs_30Rnd_545x39_7N6_AK {
		greenmag_ammo = "CVO_GreenMag_AFRF_Ammo_545x39_7N6M_1Rnd";
	};

	class rhs_30Rnd_545x39_7N10_AK : rhs_30Rnd_545x39_7N6_AK {
		greenmag_ammo = "CVO_GreenMag_AFRF_Ammo_545x39_7N10_1Rnd";
	};

	class rhs_30Rnd_545x39_7N22_AK : rhs_30Rnd_545x39_7N10_AK {
		greenmag_ammo = "CVO_GreenMag_AFRF_Ammo_545x39_7N22_1Rnd";
	};

	class rhs_30Rnd_545x39_AK_green : rhs_30Rnd_545x39_7N6_AK {
		greenmag_ammo = "CVO_GreenMag_AFRF_Ammo_545x39_7T3M_1Rnd";
	};

	class rhs_30Rnd_545x39_7U1_AK : rhs_30Rnd_545x39_7N10_AK {
		greenmag_ammo = "CVO_GreenMag_AFRF_Ammo_545x39_7U1_1Rnd";
	};
};
