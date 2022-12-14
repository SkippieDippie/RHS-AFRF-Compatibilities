class AMMO_CLASS(9x39_SP6_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = CESTRING(ammo,9x39_SP6_1Rnd,name);
	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.5;
	};
};

class AMMO_CLASS(9x39_SP6_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = CESTRING(ammo,9x39_SP6_10Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_SP6_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 5.0;
	};
};

class AMMO_CLASS(9x39_SP6_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = CESTRING(ammo,9x39_SP6_20Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_SP6_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.;
	};
};

class AMMO_CLASS(9x39_SP6_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = CESTRING(ammo,9x39_SP6_30Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x39_SP6_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 15.0;
	};
};

class AMMO_CLASS(9x39_SP6_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = CESTRING(ammo,9x39_SP6_40Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_SP6_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 20.0;
	};
};

class AMMO_CLASS(9x39_SP6_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = CESTRING(ammo,9x39_SP6_50Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x39_SP6_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 25.0;
	};
};

class AMMO_CLASS(9x39_SP6_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = CESTRING(ammo,9x39_SP6_60Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x39_SP6_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 30.0;
	};
};
