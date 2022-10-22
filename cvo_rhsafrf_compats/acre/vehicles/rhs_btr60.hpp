class rhs_btr_base;

class rhs_btr60_base : rhs_btr_base {
	class AcreRacks {
		class Rack_1 {
			displayName = CESTRING(racks,R123M,name);
			shortName = CESTRING(racks,R123M,nameShort);

			componentName = "ACRE_VRC64";
			mountedRadio = "ACRE_PRC77";
			isRadioRemovable = 0;
			defaultComponents[] = {};

			allowedPositions[] = {{"turret", [1]}};
			disablePositions[] = {};
			intercom[] = {"Intercom_1"};
		};
		/*
		class Rack_2 : Rack_1 {
			displayName = CESTRING(racks,R-130,name);
			shortName = CESTRING(racks,R-130,nameShort);

			componentName = "ACRE_VRC103";
			mountedRadio = "ACRE_PRC117F";
		};
		*/
	};

	class AcreIntercoms {
		acre_hasInfantryPhone = 0;

		class Intercom_1 {
			displayName = "$STR_ACRE_sys_intercom_crewIntercom";
			shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

			allowedPositions[] = {"driver", "gunner", {"turret", [1]}};
			disablePositions[] = {};
			masterPositions[] = {{"turret", [1]}};

			limitedPositions[] = {};
			numLimitedPositions = 0;

			connectedByDefault = 1;
		};
	};
};