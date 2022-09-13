class AMMO_CLASS(762x39_57N231U_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = "7.62 57-N-231U - 1Rnd";
	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.44;
	};
};

class AMMO_CLASS(762x39_57N231U_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = "7.62 57-N-231U - 10Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231U_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class AMMO_CLASS(762x39_57N231U_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = "7.62 57-N-231U - 20Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231U_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class AMMO_CLASS(762x39_57N231U_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = "7.62 57-N-231U - 30Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231U_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};

class AMMO_CLASS(762x39_57N231U_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = "7.62 57-N-231U - 40Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231U_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 17.6;
	};
};

class AMMO_CLASS(762x39_57N231U_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = "7.62 57-N-231U - 50Rnd";

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231U_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 22.0;
	};
};

class AMMO_CLASS(762x39_57N231U_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = "7.62 57-N-231U - 60Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(762x39_57N231U_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 26.4;
	};
};
