class AMMO_CLASS(762x39_57N231P_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = "7.62 57-N-231P - 1Rnd";
	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.35;
	};
};

class AMMO_CLASS(762x39_57N231P_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = "7.62 57-N-231P - 10Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231P_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 3.5;
	};
};

class AMMO_CLASS(762x39_57N231P_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = "7.62 57-N-231P - 20Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231P_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.0;
	};
};

class AMMO_CLASS(762x39_57N231P_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = "7.62 57-N-231P - 30Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231P_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.5;
	};
};

class AMMO_CLASS(762x39_57N231P_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = "7.62 57-N-231P - 40Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231P_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.0;
	};
};

class AMMO_CLASS(762x39_57N231P_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = "7.62 57-N-231P - 50Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231P_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 17.5;
	};
};

class AMMO_CLASS(762x39_57N231P_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = "7.62 57-N-231P - 60Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231P_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 21;
	};
};
