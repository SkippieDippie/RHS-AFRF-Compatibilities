#include "\z\cvo_rhsafrf_compats\greenmag\macros.hpp"

class CfgPatches {
	class CVO_RHSAFRF_Compats_GreenMag_545x39_Ammo {
		addonRootClass = "CVO_RHSAFRF_Compats_GreenMag";

		requiredAddons[] = {"greenmag_main"};
		requiredVersion = 1.00;

		units[] = {};
		weapons[] = {
			"CVO_GreenMag_AFRF_Ammo_545x39_7N6_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N6_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N6_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N6M_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N6M_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N6M_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N10_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N10_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N10_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N11_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N11_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N11_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N22_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N22_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N22_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7T3M_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7T3M_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7T3M_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7U1_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7U1_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7U1_60Rnd"
		};
	};
};

class CfgWeapons {
	class greenmag_core_box;
	class greenmag_core_1Rnd : greenmag_core_box {
		class ItemInfo;
	};
	class greenmag_core_10Rnd : greenmag_core_box {
		class ItemInfo;
	};
	class greenmag_core_20Rnd : greenmag_core_box {
		class ItemInfo;
	};
	class greenmag_core_30Rnd : greenmag_core_box {
		class ItemInfo;
	};
	class greenmag_core_40Rnd : greenmag_core_box {
		class ItemInfo;
	};
	class greenmag_core_50Rnd : greenmag_core_box {
		class ItemInfo;
	};
	class greenmag_core_60Rnd : greenmag_core_box {
		class ItemInfo;
	};

	AMMO_CLASS(545x39_7N6,5.45x39 7N6,0.22)
	AMMO_CLASS(545x39_7N6M,5.45x39 7N6M,0.22)
	AMMO_CLASS(545x39_7N10,5.45x39 7N10,0.22)
	AMMO_CLASS(545x39_7N22,5.45x39 7N22,0.22)
	AMMO_CLASS(545x39_7T3M,5.45x39 7T3M,0.22)
	AMMO_CLASS(545x39_7U1,5.45x39 7U1,0.22)
};
