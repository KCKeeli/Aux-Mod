#define SOUND(var1,var2,var3,var4) class TRIPLES(Prefix,Sound,var1) \
{ \
    name = var2; \
    sound[] = {QPATHTOF(data\ambient\var3##), "db+10", 1}; \
    titles[] = {2, var4}; \
}

#define SOUND_FX(var1,var2,var3) class TRIPLES(DOUBLES(PREFIX,Sound),var1,SFX) \
{ \
    name = var2; \
    sounds[] = {"sound0"}; \
    sound0[] = {QPATHTOF(data\ambient\var3##), "db+10", 1, 500, 1, 2, 3, 4}; \
    empty[] = {"", 0, 0, 0, 0, 0, 0, 0}; \
}