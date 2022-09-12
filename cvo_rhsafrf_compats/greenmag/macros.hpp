#define QUOTE(var) #var

#define MULTIPLY(var1,var2) __EVAL(var1 * var2)

#define AMMOTYPE_CLASS(var) CVO_GreenMag_AFRF_Ammo_##var##_1Rnd

#define AMMO_CLASS(CLNAME,DNAME,MASS)\
	class CVO_GreenMag_AFRF_Ammo_##CLNAME##_1Rnd : greenmag_core_1Rnd { \
		displayName = QUOTE(DNAME - 1 Rnd); \
		scope = 2; \
		picture = "\z\greenmag\addons\main\data\556mm.paa"; \
		class ItemInfo : ItemInfo { \
			mass = MASS; \
		}; \
	}; \
	class CVO_GreenMag_AFRF_Ammo_##CLNAME##_10Rnd : greenmag_core_10Rnd { \
		displayName = QUOTE(DNAME - 10 Rnd); \
		scope = 2; \
		greenmag_ammotype = QUOTE(AMMOTYPE_CLASS(CLNAME)); \
		class ItemInfo : ItemInfo { \
			mass = MULTIPLY(MASS,10); \
		}; \
	}; \
	class CVO_GreenMag_AFRF_Ammo_##CLNAME##_20Rnd : greenmag_core_20Rnd { \
		displayName = QUOTE(DNAME - 20 Rnd); \
		scope = 2; \
		greenmag_ammotype = QUOTE(AMMOTYPE_CLASS(CLNAME)); \
		class ItemInfo : ItemInfo { \
			mass = MULTIPLY(MASS,20); \
		}; \
	}; \
	class CVO_GreenMag_AFRF_Ammo_##CLNAME##_30Rnd : greenmag_core_30Rnd { \
		displayName = QUOTE(DNAME - 30 Rnd); \
		scope = 2; \
		scopeArsenal=2; \
		scopeCurator=2; \
		greenmag_ammotype = QUOTE(AMMOTYPE_CLASS(CLNAME)); \
		class ItemInfo : ItemInfo { \
			mass = MULTIPLY(MASS,30); \
		}; \
	}; \
	class CVO_GreenMag_AFRF_Ammo_##CLNAME##_40Rnd : greenmag_core_40Rnd { \
		displayName = QUOTE(DNAME - 40 Rnd); \
		scope = 2; \
		greenmag_ammotype = QUOTE(AMMOTYPE_CLASS); \
		class ItemInfo : ItemInfo { \
			mass = MULTIPLY(MASS,40); \
		}; \
	}; \
	class CVO_GreenMag_AFRF_Ammo_##CLNAME##_50Rnd : greenmag_core_50Rnd { \
		displayName = QUOTE(DNAME - 50 Rnd); \
		scope = 2; \
		greenmag_ammotype = QUOTE(AMMOTYPE_CLASS(CLNAME)); \
		class ItemInfo : ItemInfo { \
			mass = MULTIPLY(MASS,50); \
		}; \
	}; \
	class CVO_GreenMag_AFRF_Ammo_##CLNAME##_60Rnd : greenmag_core_60Rnd { \
		displayName = QUOTE(DNAME - 60 Rnd); \
		scope = 2; \
		scopeArsenal=2; \
		scopeCurator=2; \
		greenmag_ammotype = QUOTE(AMMOTYPE_CLASS(CLNAME)); \
		class ItemInfo : ItemInfo { \
			mass = MULTIPLY(MASS,60); \
		}; \
	}; 
