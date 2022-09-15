#include "\z\cvo_rhsafrf_compats\macros_common.hpp"

#define GREENMAG_LOADED __has_include("\z\greenmag\addons\main\script_component.hpp")

#define AMMO_CLASS(CLNAME) DOUBLES(CVO_AFRF_greenmag_ammo,CLNAME)
#define QAMMO_CLASS(CLNAME) QUOTE(AMMO_CLASS(CLNAME))

#define BELT_CLASS(CLNAME) DOUBLES(CVO_AFRF_greenmag_beltlinked,CLNAME)
#define QBELT_CLASS(CLNAME) QUOTE(BELT_CLASS(CLNAME))

#define CESTRING(CLNAME) QUOTE(DOUBLES($STR_CVO_AFRF_greenmag,CLNAME))
#define CESTRING(PREFIX,CLNAME) QUOTE(TRIPLES($STR_CVO_AFRF_greenmag,PREFIX,CLNAME))
#define CESTRING(PREFIX,CLNAME,POSTFIX) QUOTE(QUADRUPLES($STR_CVO_AFRF_greenmag,PREFIX,CLNAME,POSTFIX))
