#include "\z\cvo_rhsafrf_compats\greenmag\macros.hpp"

#if GREENMAG_LOADED
class CfgPatches {
	class CVO_RHSAFRF_Compats_GreenMag {
		addonRootClass = "CVO_RHSAFRF_Compats";

		requiredAddons[] = {
			"rhs_c_weapons",
			"greenmag_main"
		};
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

class CfgMagazines {
	// External Classes
	class CA_Magazine;

	#include "magazines\afrf_545x39.hpp"

};

class CfgWeapons {
	// External Classes
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class greenmag_core_1Rnd;
	class greenmag_core_10Rnd;
	class greenmag_core_20Rnd;
	class greenmag_core_30Rnd;
	class greenmag_core_40Rnd;
	class greenmag_core_50Rnd;
	class greenmag_core_60Rnd;

	// Core Classes
	class CVO_GreenMag_Ammo_Core_1Rnd : greenmag_core_1Rnd {
		author = "Skippie [CVO]";
	};
	class CVO_GreenMag_Ammo_Core_10Rnd : greenmag_core_10Rnd {
		author = "Skippie [CVO]";
	};
	class CVO_GreenMag_Ammo_Core_20Rnd : greenmag_core_20Rnd {
		author = "Skippie [CVO]";
	};
	class CVO_GreenMag_Ammo_Core_30Rnd : greenmag_core_30Rnd {
		author = "Skippie [CVO]";
	};
	class CVO_GreenMag_Ammo_Core_40Rnd : greenmag_core_40Rnd {
		author = "Skippie [CVO]";
	};
	class CVO_GreenMag_Ammo_Core_50Rnd : greenmag_core_50Rnd {
		author = "Skippie [CVO]";
	};
	class CVO_GreenMag_Ammo_Core_60Rnd : greenmag_core_60Rnd {
		author = "Skippie [CVO]";
	};


	// Ammo
	#include "ammo\afrf_545x39.hpp"

	// Belts
	
};
#endif
