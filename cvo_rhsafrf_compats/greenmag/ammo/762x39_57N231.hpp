class AMMO_CLASS(762x39_57N231_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = "7.62 57-N-231 - 1Rnd";
	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.35;
	};
};

class AMMO_CLASS(762x39_57N231_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = "7.62 57-N-231 - 10Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 3.5;
	};
};

class AMMO_CLASS(762x39_57N231_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = "7.62 57-N-231 - 20Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.0;
	};
};

class AMMO_CLASS(762x39_57N231_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = "7.62 57-N-231 - 30Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.5;
	};
};

class AMMO_CLASS(762x39_57N231_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = "7.62 57-N-231 - 40Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.0;
	};
};

class AMMO_CLASS(762x39_57N231_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = "7.62 57-N-231 - 50Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 17.5;
	};
};

class AMMO_CLASS(762x39_57N231_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = "7.62 57-N-231 - 60Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 21;
	};
};
