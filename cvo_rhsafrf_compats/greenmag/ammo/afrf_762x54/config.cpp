#include "\z\cvo_rhsafrf_compats\greenmag\macros.hpp"

class CfgPatches {
	class CVO_RHSAFRF_Compats_GreenMag_762x54_Ammo {
		addonRootClass = "CVO_RHSAFRF_Compats_GreenMag";

		requiredAddons[] = {"greenmag_main"};
		requiredVersion = 1.00;

		units[] = {};
		weapons[] = {
			"CVO_GreenMag_AFRF_Ammo_762x54_7N1_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N1_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N1_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N14_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N14_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N14_60Rnd"
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

	AMMO_CLASS(762x54_7N1,7.62x54 7N1,0.48)
	AMMO_CLASS(762x54_7N14,7.62x54 7N14,0.48)
};