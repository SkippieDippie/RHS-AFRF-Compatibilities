class AMMO_CLASS(762x54_7N1_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = "7.62 7N1 - 1Rnd";
	picture = "\z\greenmag\addons\main\data\762mm.paa";

	scope = 2;
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.48;
	};
};

class AMMO_CLASS(762x54_7N1_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = "7.62 7N1 - 10Rnd";

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_7N1_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.8;
	};
};

class AMMO_CLASS(762x54_7N1_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = "7.62 7N1 - 20Rnd";

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_7N1_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 9.6;
	};
};

class AMMO_CLASS(762x54_7N1_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = "7.62 7N1 - 30Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_7N1_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.4;
	};
};

class AMMO_CLASS(762x54_7N1_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = "7.62 7N1 - 40Rnd";

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_7N1_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 19.2;
	};
};

class AMMO_CLASS(762x54_7N1_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = "7.62 7N1 - 50Rnd";

	scope = 2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_7N1_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 24.0;
	};
};

class AMMO_CLASS(762x54_7N1_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = "7.62 7N1 - 60Rnd";

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;
	
	greenmag_ammotype = QAMMO_CLASS(762x54_7N1_1Rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 28.8;
	};
};
