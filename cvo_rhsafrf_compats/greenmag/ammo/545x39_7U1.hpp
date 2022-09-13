class AMMO_CLASS(545x39_7U1_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = "5.45 7U1 - 1Rnd";
	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.24;
	};
};

class AMMO_CLASS(545x39_7U1_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = "5.45 7U1 - 10Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(545x39_7U1_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_7U1_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = "5.45 7U1 - 20Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(545x39_7U1_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_7U1_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = "5.45 7U1 - 30Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(545x39_7U1_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_7U1_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = "5.45 7U1 - 40Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(545x39_7U1_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_7U1_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = "5.45 7U1 - 50Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(545x39_7U1_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(545x39_7U1_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = "5.45 7U1 - 60Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(545x39_7U1_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.4;
	};
};
