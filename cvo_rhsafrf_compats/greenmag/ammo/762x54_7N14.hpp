class AMMO_CLASS(762x54_7N14_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = "7.62 7N14 - 1Rnd";
	picture = "\z\greenmag\addons\main\data\762mm.paa";

	scope = 2;
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.48;
	};
};

class AMMO_CLASS(762x54_7N14_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = "7.62 7N14 - 10Rnd";

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_7N14_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.8;
	};
};

class AMMO_CLASS(762x54_7N14_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = "7.62 7N14 - 20Rnd";

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_7N14_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 9.6;
	};
};

class AMMO_CLASS(762x54_7N14_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = "7.62 7N14 - 30Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_7N14_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.4;
	};
};

class AMMO_CLASS(762x54_7N14_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = "7.62 7N14 - 40Rnd";

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_7N14_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 19.2;
	};
};

class AMMO_CLASS(762x54_7N14_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = "7.62 7N14 - 50Rnd";

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_7N14_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 24.0;
	};
};

class AMMO_CLASS(762x54_7N14_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = "7.62 7N14 - 60Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_7N14_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 28.8;
	};
};
