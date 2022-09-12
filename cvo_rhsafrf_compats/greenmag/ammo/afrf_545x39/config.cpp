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
			"CVO_GreenMag_AFRF_Ammo_545x39_7N22_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N22_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7N22_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7T3M_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7T3M_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7T3M_60Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7U1_1Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7U1_30Rnd",
			"CVO_GreenMag_AFRF_Ammo_545x39_7U1_60Rnd",
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

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6_1Rnd : greenmag_core_1Rnd {
		displayName = "5.45x39 7N6 - 1 Rnd";
		scope = 2;
		picture = "\z\greenmag\addons\main\data\556mm.paa";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6_10Rnd : greenmag_core_10Rnd {
		displayName = "5.45x39 7N6 - 10 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N6_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6_20Rnd : greenmag_core_20Rnd {
		displayName = "5.45x39 7N6 - 20 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N6_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6_30Rnd : greenmag_core_30Rnd {
		displayName = "5.45x39 7N6 - 30 Rnd";
		scope = 2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N6_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6_40Rnd : greenmag_core_40Rnd {
		displayName = "5.45x39 7N6 - 40 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N6_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6_50Rnd : greenmag_core_50Rnd {
		displayName = "5.45x39 7N6 - 50 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N6_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6_60Rnd : greenmag_core_60Rnd {
		displayName = "5.45x39 7N6 - 60 Rnd";
		scope = 2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N6_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6M_1Rnd : greenmag_core_1Rnd {
		displayName = "5.45x39 7N6M - 1 Rnd";
		scope = 2;
		picture = "\z\greenmag\addons\main\data\556mm.paa";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6M_10Rnd : greenmag_core_10Rnd {
		displayName = "5.45x39 7N6M - 10 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N6M_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6M_20Rnd : greenmag_core_20Rnd {
		displayName = "5.45x39 7N6M - 20 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N6M_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6M_30Rnd : greenmag_core_30Rnd {
		displayName = "5.45x39 7N6M - 30 Rnd";
		scope = 2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N6M_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6M_40Rnd : greenmag_core_40Rnd {
		displayName = "5.45x39 7N6M - 40 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N6M_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6M_50Rnd : greenmag_core_50Rnd {
		displayName = "5.45x39 7N6M - 50 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N6M_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N6M_60Rnd : greenmag_core_60Rnd {
		displayName = "5.45x39 7N6M - 60 Rnd";
		scope = 2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N6M_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N10_1Rnd : greenmag_core_1Rnd {
		displayName = "5.45x39 7N10 - 1 Rnd";
		scope = 2;
		picture = "\z\greenmag\addons\main\data\556mm.paa";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N10_10Rnd : greenmag_core_10Rnd {
		displayName = "5.45x39 7N10 - 10 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N10_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N10_20Rnd : greenmag_core_20Rnd {
		displayName = "5.45x39 7N10 - 20 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N10_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N10_30Rnd : greenmag_core_30Rnd {
		displayName = "5.45x39 7N10 - 30 Rnd";
		scope = 2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N10_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N10_40Rnd : greenmag_core_40Rnd {
		displayName = "5.45x39 7N10 - 40 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N10_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N10_50Rnd : greenmag_core_50Rnd {
		displayName = "5.45x39 7N10 - 50 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N10_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N10_60Rnd : greenmag_core_60Rnd {
		displayName = "5.45x39 7N10 - 60 Rnd";
		scope = 2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N10_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N22_1Rnd : greenmag_core_1Rnd {
		displayName = "5.45x39 7N22 - 1 Rnd";
		scope = 2;
		picture = "\z\greenmag\addons\main\data\556mm.paa";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N22_10Rnd : greenmag_core_10Rnd {
		displayName = "5.45x39 7N22 - 10 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N22_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N22_20Rnd : greenmag_core_20Rnd {
		displayName = "5.45x39 7N22 - 20 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N22_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N22_30Rnd : greenmag_core_30Rnd {
		displayName = "5.45x39 7N22 - 30 Rnd";
		scope = 2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N22_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N22_40Rnd : greenmag_core_40Rnd {
		displayName = "5.45x39 7N22 - 40 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N22_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N22_50Rnd : greenmag_core_50Rnd {
		displayName = "5.45x39 7N22 - 50 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N22_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7N22_60Rnd : greenmag_core_60Rnd {
		displayName = "5.45x39 7N22 - 60 Rnd";
		scope = 2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7N22_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7T3M_1Rnd : greenmag_core_1Rnd {
		displayName = "5.45x39 7T3M - 1 Rnd";
		scope = 2;
		picture = "\z\greenmag\addons\main\data\556mm.paa";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7T3M_10Rnd : greenmag_core_10Rnd {
		displayName = "5.45x39 7T3M - 10 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7T3M_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7T3M_20Rnd : greenmag_core_20Rnd {
		displayName = "5.45x39 7T3M - 20 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7T3M_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7T3M_30Rnd : greenmag_core_30Rnd {
		displayName = "5.45x39 7T3M - 30 Rnd";
		scope = 2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7T3M_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7T3M_40Rnd : greenmag_core_40Rnd {
		displayName = "5.45x39 7T3M - 40 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7T3M_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7T3M_50Rnd : greenmag_core_50Rnd {
		displayName = "5.45x39 7T3M - 50 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7T3M_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7T3M_60Rnd : greenmag_core_60Rnd {
		displayName = "5.45x39 7T3M - 60 Rnd";
		scope = 2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7T3M_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7U1_1Rnd : greenmag_core_1Rnd {
		displayName = "5.45x39 7U1 - 1 Rnd";
		scope = 2;
		picture = "\z\greenmag\addons\main\data\556mm.paa";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7U1_10Rnd : greenmag_core_10Rnd {
		displayName = "5.45x39 7U1 - 10 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7U1_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7U1_20Rnd : greenmag_core_20Rnd {
		displayName = "5.45x39 7U1 - 20 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7U1_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7U1_30Rnd : greenmag_core_30Rnd {
		displayName = "5.45x39 7U1 - 30 Rnd";
		scope = 2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7U1_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7U1_40Rnd : greenmag_core_40Rnd {
		displayName = "5.45x39 7U1 - 40 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7U1_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7U1_50Rnd : greenmag_core_50Rnd {
		displayName = "5.45x39 7U1 - 50 Rnd";
		scope = 2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7U1_1Rnd";
	};

	class CVO_GreenMag_AFRF_Ammo_545x39_7U1_60Rnd : greenmag_core_60Rnd {
		displayName = "5.45x39 7U1 - 60 Rnd";
		scope = 2;
		scopeArsenal=2;
		scopeCurator=2;
		greenmag_ammotype = "CVO_GreenMag_AFRF_Ammo_545x39_7U1_1Rnd";
	};
};
