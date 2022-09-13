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
			// 5.45x39 Ammo
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
			"CVO_GreenMag_AFRF_Ammo_545x39_7U1_60Rnd",
			// 7.62x39 Ammo
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231P_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231P_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231P_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231U_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231U_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x39_57N231U_60Rnd",
			// 7.62x54 Ammo
			"CVO_GreenMag_AFRF_Ammo_762x54_7N1_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N1_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N1_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N14_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N14_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N14_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N13_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N13_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N13_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N26_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N26_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7N26_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7BZ3_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7BZ3_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_7BZ3_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_57N323S_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_57N323S_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_762x54_57N323S_60Rnd"
		};
	};
};

class CfgMagazines {
	// External Classes
	class CA_Magazine;

	#include "magazines\rhs_afrf_545x39.hpp"
	#include "magazines\rhs_afrf_762x39.hpp"
	#include "magazines\rhs_afrf_762x54.hpp"

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

	class CVO_GreenMag_Belt_Core : CBA_MiscItem {
		author = "Skippie [CVO]";

		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;

		picture = "\z\greenmag\addons\main\data\belt.paa";
	    model = "\A3\weapons_F\ammo\mag_univ.p3d";
	    
	    icon = "iconObject_circle";
	    mapSize = 0.034;
	};


	// Ammo
	#include "ammo\545x39_7N6.hpp"
	#include "ammo\545x39_7N6M.hpp"
	#include "ammo\545x39_7N10.hpp"
	#include "ammo\545x39_7N22.hpp"
	#include "ammo\545x39_7T3M.hpp"
	#include "ammo\545x39_7U1.hpp"

	#include "ammo\762x39_57N231.hpp"
	#include "ammo\762x39_57N231P.hpp"
	#include "ammo\762x39_57N231U.hpp"

	#include "ammo\762x54_57N323S.hpp"
	#include "ammo\762x54_7BZ3.hpp"
	#include "ammo\762x54_7N1.hpp"
	#include "ammo\762x54_7N13.hpp"
	#include "ammo\762x54_7N14.hpp"
	#include "ammo\762x54_7N26.hpp"
	#include "ammo\762x54_7T2.hpp"

	// Belts
	#include "belts\afrf_762x54.hpp"
	
};
#endif
