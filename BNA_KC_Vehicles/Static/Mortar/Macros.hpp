// 500 meters, original 0.35
#define MORTAR_RANGE_SMALL 0.3504
// 1998 meters, original 0.7
#define MORTAR_RANGE_MEDIUM 0.7
// 400 meters, original 1
#define MORTAR_RANGE_FAR 0.4953


#define MORTAR_SOUND_FIRE() reloadSound[] = {"\swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reload.wss", 2, 1, 20}; \
reloadMagazineSound[] = {"\swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reloadMagazine.wss", 1, 1, 20};


#define MORTAR_SOUND_AMMO() soundHit[] = {"", 316.228, 1}; \
soundFly[] = {"\SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss", 3, 1, 250}; \
soundHit1[] = {"\SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit1.wss", 2.51189, 1, 1900}; \
soundHit2[] = {"\SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit2.wss", 2.51189, 1, 1900}; \
soundHit3[] = {"\SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit3.wss", 2.51189, 1, 1900}; \
soundHit4[] = {"\SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit4.wss", 2.51189, 1, 1900}; \
soundHit5[] = {"\SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit5.wss", 2.51189, 1, 1900};


#define CSW_MAG_CARRY(MAG) class MAG##_CSW: MAG \
{ \
    type = 256; \
    scope = 2; \
    scopeArsenal = 2; \
    mass = 300; \
}