#pragma once

typedef enum {
    RAND_INF_DUNGEONS_DONE_SPIRIT_TEMPLE,
    RAND_INF_DUNGEONS_DONE_SHADOW_TEMPLE,

    RAND_INF_COWS_MILKED_KF_LINKS_HOUSE_COW,
    RAND_INF_COWS_MILKED_HF_COW_GROTTO_COW,
    RAND_INF_COWS_MILKED_LLR_STABLES_LEFT_COW,
    RAND_INF_COWS_MILKED_LLR_STABLES_RIGHT_COW,
    RAND_INF_COWS_MILKED_LLR_TOWER_LEFT_COW,
    RAND_INF_COWS_MILKED_LLR_TOWER_RIGHT_COW,
    RAND_INF_COWS_MILKED_KAK_IMPAS_HOUSE_COW,
    RAND_INF_COWS_MILKED_DMT_COW_GROTTO_COW,
    RAND_INF_COWS_MILKED_GV_COW,
    RAND_INF_COWS_MILKED_JABU_JABUS_BELLY_MQ_COW,

    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_DEKU_SCRUB_NEAR_BOMB_BAG_LEFT,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_DEKU_SCRUB_SIDE_ROOM_NEAR_DODONGOS,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_DEKU_SCRUB_NEAR_BOMB_BAG_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_DEKU_SCRUB_LOBBY,
    RAND_INF_SCRUBS_PURCHASED_JABU_JABUS_BELLY_DEKU_SCRUB,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_DEKU_SCRUB_CENTER_LEFT,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_DEKU_SCRUB_CENTER_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_DEKU_SCRUB_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_DEKU_SCRUB_LEFT,
    RAND_INF_SCRUBS_PURCHASED_HF_DEKU_SCRUB_GROTTO,
    RAND_INF_SCRUBS_PURCHASED_ZR_DEKU_SCRUB_GROTTO_REAR,
    RAND_INF_SCRUBS_PURCHASED_ZR_DEKU_SCRUB_GROTTO_FRONT,
    RAND_INF_SCRUBS_PURCHASED_SFM_DEKU_SCRUB_GROTTO_REAR,
    RAND_INF_SCRUBS_PURCHASED_SFM_DEKU_SCRUB_GROTTO_FRONT,
    RAND_INF_SCRUBS_PURCHASED_LH_DEKU_SCRUB_GROTTO_LEFT,
    RAND_INF_SCRUBS_PURCHASED_LH_DEKU_SCRUB_GROTTO_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_LH_DEKU_SCRUB_GROTTO_CENTER,
    RAND_INF_SCRUBS_PURCHASED_GV_DEKU_SCRUB_GROTTO_REAR,
    RAND_INF_SCRUBS_PURCHASED_GV_DEKU_SCRUB_GROTTO_FRONT,
    RAND_INF_SCRUBS_PURCHASED_LW_DEKU_SCRUB_GROTTO_REAR,
    RAND_INF_SCRUBS_PURCHASED_LW_DEKU_SCRUB_GROTTO_FRONT,
    RAND_INF_SCRUBS_PURCHASED_DMC_DEKU_SCRUB_GROTTO_LEFT,
    RAND_INF_SCRUBS_PURCHASED_DMC_DEKU_SCRUB_GROTTO_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_DMC_DEKU_SCRUB_GROTTO_CENTER,
    RAND_INF_SCRUBS_PURCHASED_GC_DEKU_SCRUB_GROTTO_LEFT,
    RAND_INF_SCRUBS_PURCHASED_GC_DEKU_SCRUB_GROTTO_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_GC_DEKU_SCRUB_GROTTO_CENTER,
    RAND_INF_SCRUBS_PURCHASED_LLR_DEKU_SCRUB_GROTTO_LEFT,
    RAND_INF_SCRUBS_PURCHASED_LLR_DEKU_SCRUB_GROTTO_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_LLR_DEKU_SCRUB_GROTTO_CENTER,
    RAND_INF_SCRUBS_PURCHASED_COLOSSUS_DEKU_SCRUB_GROTTO_REAR,
    RAND_INF_SCRUBS_PURCHASED_COLOSSUS_DEKU_SCRUB_GROTTO_FRONT,
    RAND_INF_SCRUBS_PURCHASED_LW_DEKU_SCRUB_NEAR_DEKU_THEATER_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_LW_DEKU_SCRUB_NEAR_DEKU_THEATER_LEFT,
    RAND_INF_SCRUBS_PURCHASED_LW_DEKU_SCRUB_NEAR_BRIDGE,
    RAND_INF_SCRUBS_PURCHASED_DMC_DEKU_SCRUB,
    RAND_INF_SCRUBS_PURCHASED_DEKU_TREE_MQ_DEKU_SCRUB,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_MQ_DEKU_SCRUB_LOBBY_REAR,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_MQ_DEKU_SCRUB_LOBBY_FRONT,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_MQ_DEKU_SCRUB_STAIRCASE,
    RAND_INF_SCRUBS_PURCHASED_DODONGOS_CAVERN_MQ_DEKU_SCRUB_SIDE_ROOM_NEAR_LOWER_LIZALFOS,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_MQ_DEKU_SCRUB_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_MQ_DEKU_SCRUB_CENTER_LEFT,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_MQ_DEKU_SCRUB_CENTER,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_MQ_DEKU_SCRUB_CENTER_RIGHT,
    RAND_INF_SCRUBS_PURCHASED_GANONS_CASTLE_MQ_DEKU_SCRUB_LEFT,

    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_1,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_2,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_3,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_4,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_5,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_6,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_7,
    RAND_INF_SHOP_ITEMS_KF_SHOP_ITEM_8,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_1,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_2,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_3,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_4,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_5,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_6,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_7,
    RAND_INF_SHOP_ITEMS_GC_SHOP_ITEM_8,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_1,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_2,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_3,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_4,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_5,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_6,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_7,
    RAND_INF_SHOP_ITEMS_ZD_SHOP_ITEM_8,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_1,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_2,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_3,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_4,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_5,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_6,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_7,
    RAND_INF_SHOP_ITEMS_KAK_BAZAAR_ITEM_8,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_1,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_2,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_3,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_4,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_5,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_6,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_7,
    RAND_INF_SHOP_ITEMS_KAK_POTION_SHOP_ITEM_8,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_1,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_2,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_3,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_4,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_5,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_6,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_7,
    RAND_INF_SHOP_ITEMS_MARKET_BAZAAR_ITEM_8,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_1,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_2,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_3,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_4,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_5,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_6,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_7,
    RAND_INF_SHOP_ITEMS_MARKET_POTION_SHOP_ITEM_8,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_1,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_2,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_3,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_4,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_5,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_6,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_7,
    RAND_INF_SHOP_ITEMS_MARKET_BOMBCHU_SHOP_ITEM_8,

    RAND_INF_MERCHANTS_CARPET_SALESMAN,
    RAND_INF_MERCHANTS_MEDIGORON,
    RAND_INF_MERCHANTS_GRANNYS_SHOP,
    RAND_INF_MERCHANTS_MAGIC_BEAN_SALESMAN,

    RAND_INF_ADULT_TRADES_LW_TRADE_COJIRO,
    RAND_INF_ADULT_TRADES_GV_TRADE_SAW,
    RAND_INF_ADULT_TRADES_DMT_TRADE_BROKEN_SWORD,
    RAND_INF_ADULT_TRADES_ZD_TRADE_PRESCRIPTION,
    RAND_INF_ADULT_TRADES_LH_TRADE_FROG,
    RAND_INF_ADULT_TRADES_DMT_TRADE_EYEDROPS,
    RAND_INF_ADULT_TRADES_DMT_TRADE_CLAIM_CHECK,

    RAND_INF_KAK_100_GOLD_SKULLTULA_REWARD,

    RAND_INF_GREG_FOUND,


    RAND_INF_TOT_MASTER_SWORD,

    RAND_INF_CHILD_FISHING,
    RAND_INF_CHILD_FISH_1,
    RAND_INF_CHILD_FISH_2,
    RAND_INF_CHILD_FISH_3,
    RAND_INF_CHILD_FISH_4,
    RAND_INF_CHILD_FISH_5,
    RAND_INF_CHILD_FISH_6,
    RAND_INF_CHILD_FISH_7,
    RAND_INF_CHILD_FISH_8,
    RAND_INF_CHILD_FISH_9,
    RAND_INF_CHILD_FISH_10,
    RAND_INF_CHILD_FISH_11,
    RAND_INF_CHILD_FISH_12,
    RAND_INF_CHILD_FISH_13,
    RAND_INF_CHILD_FISH_14,
    RAND_INF_CHILD_FISH_15,
    RAND_INF_CHILD_LOACH_1,
    RAND_INF_CHILD_LOACH_2,
    RAND_INF_ADULT_FISHING,
    RAND_INF_ADULT_FISH_1,
    RAND_INF_ADULT_FISH_2,
    RAND_INF_ADULT_FISH_3,
    RAND_INF_ADULT_FISH_4,
    RAND_INF_ADULT_FISH_5,
    RAND_INF_ADULT_FISH_6,
    RAND_INF_ADULT_FISH_7,
    RAND_INF_ADULT_FISH_8,
    RAND_INF_ADULT_FISH_9,
    RAND_INF_ADULT_FISH_10,
    RAND_INF_ADULT_FISH_11,
    RAND_INF_ADULT_FISH_12,
    RAND_INF_ADULT_FISH_13,
    RAND_INF_ADULT_FISH_14,
    RAND_INF_ADULT_FISH_15,
    RAND_INF_ADULT_LOACH,

    RAND_INF_10_BIG_POES,
    RAND_INF_GRANT_GANONS_BOSSKEY,

    RAND_INF_GOHMA_SOUL,
    RAND_INF_KING_DODONGO_SOUL,
    RAND_INF_BARINADE_SOUL,
    RAND_INF_PHANTOM_GANON_SOUL,
    RAND_INF_VOLVAGIA_SOUL,
    RAND_INF_MORPHA_SOUL,
    RAND_INF_BONGO_BONGO_SOUL,
    RAND_INF_TWINROVA_SOUL,
    RAND_INF_GANON_SOUL,

    RAND_INF_HAS_OCARINA_A,
    RAND_INF_HAS_OCARINA_C_UP,
    RAND_INF_HAS_OCARINA_C_DOWN,
    RAND_INF_HAS_OCARINA_C_LEFT,
    RAND_INF_HAS_OCARINA_C_RIGHT,

    RAND_INF_CAUGHT_LOACH,

    RAND_INF_CAN_SWIM,

    RAND_INF_HAS_WALLET,

    RAND_INF_BEEHIVE_KF_STORMS_GROTTO_LEFT,
    RAND_INF_BEEHIVE_KF_STORMS_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_LW_NEAR_SHORTCUTS_GROTTO_LEFT,
    RAND_INF_BEEHIVE_LW_NEAR_SHORTCUTS_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_LW_DEKU_SCRUB_GROTTO,
    RAND_INF_BEEHIVE_SFM_STORMS_GROTTO,
    RAND_INF_BEEHIVE_HF_NEAR_MARKET_GROTTO_LEFT,
    RAND_INF_BEEHIVE_HF_NEAR_MARKET_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_HF_OPEN_GROTTO_LEFT,
    RAND_INF_BEEHIVE_HF_OPEN_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_HF_SOUTHEAST_GROTTO_LEFT,
    RAND_INF_BEEHIVE_HF_SOUTHEAST_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_HF_INSIDE_FENCE_GROTTO,
    RAND_INF_BEEHIVE_LLR_GROTTO,
    RAND_INF_BEEHIVE_KAK_OPEN_GROTTO_LEFT,
    RAND_INF_BEEHIVE_KAK_OPEN_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_DMT_COW_GROTTO,
    RAND_INF_BEEHIVE_DMT_STORMS_GROTTO_LEFT,
    RAND_INF_BEEHIVE_DMT_STORMS_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_GC_GROTTO,
    RAND_INF_BEEHIVE_DMC_UPPER_GROTTO_LEFT,
    RAND_INF_BEEHIVE_DMC_UPPER_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_DMC_HAMMER_GROTTO,
    RAND_INF_BEEHIVE_ZR_OPEN_GROTTO_LEFT,
    RAND_INF_BEEHIVE_ZR_OPEN_GROTTO_RIGHT,
    RAND_INF_BEEHIVE_ZR_STORMS_GROTTO,
    RAND_INF_BEEHIVE_ZD_IN_FRONT_OF_KING_ZORA_LEFT,
    RAND_INF_BEEHIVE_ZD_IN_FRONT_OF_KING_ZORA_RIGHT,
    RAND_INF_BEEHIVE_ZD_BEHIND_KING_ZORA,
    RAND_INF_BEEHIVE_LH_GROTTO,
    RAND_INF_BEEHIVE_GV_DEKU_SCRUB_GROTTO,
    RAND_INF_BEEHIVE_COLOSSUS_GROTTO,

    RAND_INF_GROTTO_FISH_ZR_OPEN_GROTTO,
    RAND_INF_GROTTO_FISH_DMC_UPPER_GROTTO,
    RAND_INF_GROTTO_FISH_DMT_STORMS_GROTTO,
    RAND_INF_GROTTO_FISH_KAK_OPEN_GROTTO,
    RAND_INF_GROTTO_FISH_HF_NEAR_MARKET_GROTTO,
    RAND_INF_GROTTO_FISH_HF_OPEN_GROTTO,
    RAND_INF_GROTTO_FISH_HF_SOUTHEAST_GROTTO,
    RAND_INF_GROTTO_FISH_LW_NEAR_SHORTCUTS_GROTTO,
    RAND_INF_GROTTO_FISH_KF_STORMS_GROTTO,

    RAND_INF_FISHING_POLE_FOUND,

    RAND_INF_ZD_FISH_1,
    RAND_INF_ZD_FISH_2,
    RAND_INF_ZD_FISH_3,
    RAND_INF_ZD_FISH_4,
    RAND_INF_ZD_FISH_5,

    RAND_INF_HAS_INFINITE_QUIVER,
    RAND_INF_HAS_INFINITE_BOMB_BAG,
    RAND_INF_HAS_INFINITE_BULLET_BAG,
    RAND_INF_HAS_INFINITE_STICK_UPGRADE,
    RAND_INF_HAS_INFINITE_NUT_UPGRADE,
    RAND_INF_HAS_INFINITE_MAGIC_METER,
    RAND_INF_HAS_INFINITE_BOMBCHUS,
    RAND_INF_HAS_INFINITE_MONEY,

    RAND_INF_HAS_SKELETON_KEY,

    RAND_INF_LINKS_POCKET,
    RAND_INF_LEARNED_EPONA_SONG,
    RAND_INF_DARUNIAS_JOY,
    RAND_INF_KING_ZORA_THAWED,

    RAND_INF_HC_GREAT_FAIRY_REWARD,
    RAND_INF_DMT_GREAT_FAIRY_REWARD,
    RAND_INF_DMC_GREAT_FAIRY_REWARD,
    RAND_INF_ZF_GREAT_FAIRY_REWARD,
    RAND_INF_COLOSSUS_GREAT_FAIRY_REWARD,
    RAND_INF_OGC_GREAT_FAIRY_REWARD,

    RAND_INF_MARKET_TREASURE_CHEST_GAME_ITEM_1,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_ITEM_2,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_ITEM_3,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_ITEM_4,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_ITEM_5,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_KEY_1,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_KEY_2,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_KEY_3,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_KEY_4,
    RAND_INF_MARKET_TREASURE_CHEST_GAME_KEY_5,

    RAND_INF_GF_ITEM_FROM_LEADER_OF_FORTRESS,
    RAND_INF_GF_GTG_GATE_PERMANENTLY_OPEN,

    RAND_INF_ZELDAS_LETTER,
    RAND_INF_WEIRD_EGG,
    RAND_INF_CHILD_TRADES_MASK_KEATON,
    RAND_INF_CHILD_TRADES_MASK_SKULL,
    RAND_INF_CHILD_TRADES_MASK_SPOOKY,
    RAND_INF_CHILD_TRADES_MASK_BUNNY,
    RAND_INF_CHILD_TRADES_MASK_GORON,
    RAND_INF_CHILD_TRADES_MASK_ZORA,
    RAND_INF_CHILD_TRADES_MASK_GERUDO,
    RAND_INF_CHILD_TRADES_MASK_TRUTH,

    RAND_INF_SFM_FAIRY_GROTTO_FAIRY_1,
    RAND_INF_SFM_FAIRY_GROTTO_FAIRY_2,
    RAND_INF_SFM_FAIRY_GROTTO_FAIRY_3,
    RAND_INF_SFM_FAIRY_GROTTO_FAIRY_4,
    RAND_INF_SFM_FAIRY_GROTTO_FAIRY_5,
    RAND_INF_SFM_FAIRY_GROTTO_FAIRY_6,
    RAND_INF_SFM_FAIRY_GROTTO_FAIRY_7,
    RAND_INF_SFM_FAIRY_GROTTO_FAIRY_8,
    RAND_INF_ZR_FAIRY_GROTTO_FAIRY_1,
    RAND_INF_ZR_FAIRY_GROTTO_FAIRY_2,
    RAND_INF_ZR_FAIRY_GROTTO_FAIRY_3,
    RAND_INF_ZR_FAIRY_GROTTO_FAIRY_4,
    RAND_INF_ZR_FAIRY_GROTTO_FAIRY_5,
    RAND_INF_ZR_FAIRY_GROTTO_FAIRY_6,
    RAND_INF_ZR_FAIRY_GROTTO_FAIRY_7,
    RAND_INF_ZR_FAIRY_GROTTO_FAIRY_8,
    RAND_INF_HF_FAIRY_GROTTO_FAIRY_1,
    RAND_INF_HF_FAIRY_GROTTO_FAIRY_2,
    RAND_INF_HF_FAIRY_GROTTO_FAIRY_3,
    RAND_INF_HF_FAIRY_GROTTO_FAIRY_4,
    RAND_INF_HF_FAIRY_GROTTO_FAIRY_5,
    RAND_INF_HF_FAIRY_GROTTO_FAIRY_6,
    RAND_INF_HF_FAIRY_GROTTO_FAIRY_7,
    RAND_INF_HF_FAIRY_GROTTO_FAIRY_8,
    RAND_INF_ZD_FAIRY_GROTTO_FAIRY_1,
    RAND_INF_ZD_FAIRY_GROTTO_FAIRY_2,
    RAND_INF_ZD_FAIRY_GROTTO_FAIRY_3,
    RAND_INF_ZD_FAIRY_GROTTO_FAIRY_4,
    RAND_INF_ZD_FAIRY_GROTTO_FAIRY_5,
    RAND_INF_ZD_FAIRY_GROTTO_FAIRY_6,
    RAND_INF_ZD_FAIRY_GROTTO_FAIRY_7,
    RAND_INF_ZD_FAIRY_GROTTO_FAIRY_8,
    RAND_INF_GF_FAIRY_GROTTO_FAIRY_1,
    RAND_INF_GF_FAIRY_GROTTO_FAIRY_2,
    RAND_INF_GF_FAIRY_GROTTO_FAIRY_3,
    RAND_INF_GF_FAIRY_GROTTO_FAIRY_4,
    RAND_INF_GF_FAIRY_GROTTO_FAIRY_5,
    RAND_INF_GF_FAIRY_GROTTO_FAIRY_6,
    RAND_INF_GF_FAIRY_GROTTO_FAIRY_7,
    RAND_INF_GF_FAIRY_GROTTO_FAIRY_8,
    RAND_INF_GRAVEYARD_SHIELD_GRAVE_FAIRY_1,
    RAND_INF_GRAVEYARD_SHIELD_GRAVE_FAIRY_2,
    RAND_INF_GRAVEYARD_SHIELD_GRAVE_FAIRY_3,
    RAND_INF_GRAVEYARD_SHIELD_GRAVE_FAIRY_4,
    RAND_INF_GRAVEYARD_SHIELD_GRAVE_FAIRY_5,
    RAND_INF_GRAVEYARD_SHIELD_GRAVE_FAIRY_6,
    RAND_INF_GRAVEYARD_SHIELD_GRAVE_FAIRY_7,
    RAND_INF_GRAVEYARD_SHIELD_GRAVE_FAIRY_8,
    RAND_INF_GANONS_CASTLE_SCRUBS_FAIRY_1,
    RAND_INF_GANONS_CASTLE_SCRUBS_FAIRY_2,
    RAND_INF_GANONS_CASTLE_SCRUBS_FAIRY_3,
    RAND_INF_GANONS_CASTLE_SCRUBS_FAIRY_4,
    RAND_INF_GANONS_CASTLE_SCRUBS_FAIRY_5,
    RAND_INF_GANONS_CASTLE_SCRUBS_FAIRY_6,
    RAND_INF_GANONS_CASTLE_SCRUBS_FAIRY_7,
    RAND_INF_GANONS_CASTLE_SCRUBS_FAIRY_8,
    RAND_INF_GANONS_CASTLE_MQ_SCRUBS_FAIRY_1,
    RAND_INF_GANONS_CASTLE_MQ_SCRUBS_FAIRY_2,
    RAND_INF_GANONS_CASTLE_MQ_SCRUBS_FAIRY_3,
    RAND_INF_GANONS_CASTLE_MQ_SCRUBS_FAIRY_4,
    RAND_INF_GANONS_CASTLE_MQ_SCRUBS_FAIRY_5,
    RAND_INF_GANONS_CASTLE_MQ_SCRUBS_FAIRY_6,
    RAND_INF_GANONS_CASTLE_MQ_SCRUBS_FAIRY_7,
    RAND_INF_GANONS_CASTLE_MQ_SCRUBS_FAIRY_8,
    RAND_INF_COLOSSUS_OASIS_FAIRY_1,
    RAND_INF_COLOSSUS_OASIS_FAIRY_2,
    RAND_INF_COLOSSUS_OASIS_FAIRY_3,
    RAND_INF_COLOSSUS_OASIS_FAIRY_4,
    RAND_INF_COLOSSUS_OASIS_FAIRY_5,
    RAND_INF_COLOSSUS_OASIS_FAIRY_6,
    RAND_INF_COLOSSUS_OASIS_FAIRY_7,
    RAND_INF_COLOSSUS_OASIS_FAIRY_8,

    RAND_INF_ZR_BEAN_SPROUT_FAIRY_1,
    RAND_INF_ZR_BEAN_SPROUT_FAIRY_2,
    RAND_INF_ZR_BEAN_SPROUT_FAIRY_3,
    RAND_INF_KF_BEAN_SPROUT_FAIRY_1,
    RAND_INF_KF_BEAN_SPROUT_FAIRY_2,
    RAND_INF_KF_BEAN_SPROUT_FAIRY_3,
    RAND_INF_LW_BEAN_SPROUT_NEAR_BRIDGE_FAIRY_1,
    RAND_INF_LW_BEAN_SPROUT_NEAR_BRIDGE_FAIRY_2,
    RAND_INF_LW_BEAN_SPROUT_NEAR_BRIDGE_FAIRY_3,
    RAND_INF_LW_BEAN_SPROUT_NEAR_THEATER_FAIRY_1,
    RAND_INF_LW_BEAN_SPROUT_NEAR_THEATER_FAIRY_2,
    RAND_INF_LW_BEAN_SPROUT_NEAR_THEATER_FAIRY_3,
    RAND_INF_LH_BEAN_SPROUT_FAIRY_1,
    RAND_INF_LH_BEAN_SPROUT_FAIRY_2,
    RAND_INF_LH_BEAN_SPROUT_FAIRY_3,
    RAND_INF_GV_BEAN_SPROUT_FAIRY_1,
    RAND_INF_GV_BEAN_SPROUT_FAIRY_2,
    RAND_INF_GV_BEAN_SPROUT_FAIRY_3,
    RAND_INF_COLOSSUS_BEAN_SPROUT_FAIRY_1,
    RAND_INF_COLOSSUS_BEAN_SPROUT_FAIRY_2,
    RAND_INF_COLOSSUS_BEAN_SPROUT_FAIRY_3,
    RAND_INF_GRAVEYARD_BEAN_SPROUT_FAIRY_1,
    RAND_INF_GRAVEYARD_BEAN_SPROUT_FAIRY_2,
    RAND_INF_GRAVEYARD_BEAN_SPROUT_FAIRY_3,
    RAND_INF_DMC_BEAN_SPROUT_FAIRY_1,
    RAND_INF_DMC_BEAN_SPROUT_FAIRY_2,
    RAND_INF_DMC_BEAN_SPROUT_FAIRY_3,
    RAND_INF_DMT_BEAN_SPROUT_FAIRY_1,
    RAND_INF_DMT_BEAN_SPROUT_FAIRY_2,
    RAND_INF_DMT_BEAN_SPROUT_FAIRY_3,

    RAND_INF_TOT_LEFTMOST_GOSSIP_STONE_FAIRY,
    RAND_INF_TOT_LEFTMOST_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_TOT_LEFT_CENTER_GOSSIP_STONE_FAIRY,
    RAND_INF_TOT_LEFT_CENTER_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_TOT_RIGHT_CENTER_GOSSIP_STONE_FAIRY,
    RAND_INF_TOT_RIGHT_CENTER_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_TOT_RIGHTMOST_GOSSIP_STONE_FAIRY,
    RAND_INF_TOT_RIGHTMOST_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_DMC_GOSSIP_STONE_FAIRY,
    RAND_INF_DMC_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_DMT_GOSSIP_STONE_FAIRY,
    RAND_INF_DMT_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_COLOSSUS_GOSSIP_STONE_FAIRY,
    RAND_INF_COLOSSUS_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_DODONGOS_CAVERN_GOSSIP_STONE_FAIRY,
    RAND_INF_DODONGOS_CAVERN_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_DODONGOS_CAVERN_MQ_GOSSIP_STONE_FAIRY,
    RAND_INF_DODONGOS_CAVERN_MQ_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_GV_GOSSIP_STONE_FAIRY,
    RAND_INF_GV_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_GC_MAZE_GOSSIP_STONE_FAIRY,
    RAND_INF_GC_MAZE_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_GC_MEDIGORON_GOSSIP_STONE_FAIRY,
    RAND_INF_GC_MEDIGORON_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_GRAVEYARD_GOSSIP_STONE_FAIRY,
    RAND_INF_GRAVEYARD_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_HC_MALON_GOSSIP_STONE_FAIRY,
    RAND_INF_HC_MALON_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_HC_ROCK_WALL_GOSSIP_STONE_FAIRY,
    RAND_INF_HC_ROCK_WALL_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_HC_STORMS_GROTTO_GOSSIP_STONE_FAIRY,
    RAND_INF_HC_STORMS_GROTTO_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_KF_DEKU_TREE_LEFT_GOSSIP_STONE_FAIRY,
    RAND_INF_KF_DEKU_TREE_LEFT_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_KF_DEKU_TREE_RIGHT_GOSSIP_STONE_FAIRY,
    RAND_INF_KF_DEKU_TREE_RIGHT_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_KF_GOSSIP_STONE_FAIRY,
    RAND_INF_KF_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_KF_STORMS_GROTTO_GOSSIP_STONE_FAIRY,
    RAND_INF_KF_STORMS_GROTTO_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_LH_LAB_GOSSIP_STONE_FAIRY,
    RAND_INF_LH_LAB_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_LH_SOUTHEAST_GOSSIP_STONE_FAIRY,
    RAND_INF_LH_SOUTHEAST_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_LH_SOUTHWEST_GOSSIP_STONE_FAIRY,
    RAND_INF_LH_SOUTHWEST_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_LW_GOSSIP_STONE_FAIRY,
    RAND_INF_LW_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_SFM_MAZE_LOWER_GOSSIP_STONE_FAIRY,
    RAND_INF_SFM_MAZE_LOWER_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_SFM_MAZE_UPPER_GOSSIP_STONE_FAIRY,
    RAND_INF_SFM_MAZE_UPPER_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_SFM_SARIA_GOSSIP_STONE_FAIRY,
    RAND_INF_SFM_SARIA_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_ZD_GOSSIP_STONE_FAIRY,
    RAND_INF_ZD_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_ZF_FAIRY_GOSSIP_STONE_FAIRY,
    RAND_INF_ZF_FAIRY_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_ZF_JABU_GOSSIP_STONE_FAIRY,
    RAND_INF_ZF_JABU_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_ZR_NEAR_GROTTOS_GOSSIP_STONE_FAIRY,
    RAND_INF_ZR_NEAR_GROTTOS_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_ZR_NEAR_DOMAIN_GOSSIP_STONE_FAIRY,
    RAND_INF_ZR_NEAR_DOMAIN_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_HF_COW_GROTTO_GOSSIP_STONE_FAIRY,
    RAND_INF_HF_COW_GROTTO_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_HF_NEAR_MARKET_GROTTO_GOSSIP_STONE_FAIRY,
    RAND_INF_HF_NEAR_MARKET_GROTTO_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_HF_SOUTHEAST_GROTTO_GOSSIP_STONE_FAIRY,
    RAND_INF_HF_SOUTHEAST_GROTTO_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_HF_OPEN_GROTTO_GOSSIP_STONE_FAIRY,
    RAND_INF_HF_OPEN_GROTTO_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_KAK_OPEN_GROTTO_GOSSIP_STONE_FAIRY,
    RAND_INF_KAK_OPEN_GROTTO_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_ZR_OPEN_GROTTO_GOSSIP_STONE_FAIRY,
    RAND_INF_ZR_OPEN_GROTTO_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_LW_NEAR_SHORTCUTS_GROTTO_GOSSIP_STONE_FAIRY,
    RAND_INF_LW_NEAR_SHORTCUTS_GROTTO_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_DMT_STORMS_GROTTO_GOSSIP_STONE_FAIRY,
    RAND_INF_DMT_STORMS_GROTTO_GOSSIP_STONE_FAIRY_BIG,
    RAND_INF_DMC_UPPER_GROTTO_GOSSIP_STONE_FAIRY,
    RAND_INF_DMC_UPPER_GROTTO_GOSSIP_STONE_FAIRY_BIG,

    RAND_INF_LH_ISLAND_SUN_FAIRY,
    RAND_INF_HF_POND_STORMS_FAIRY,
    RAND_INF_DMT_FLAG_SUN_FAIRY,
    RAND_INF_LW_SHORTCUT_STORMS_FAIRY,
    RAND_INF_GF_KITCHEN_SUN_FAIRY,
    RAND_INF_BOTTOM_OF_THE_WELL_BASEMENT_SUN_FAIRY,
    RAND_INF_BOTTOM_OF_THE_WELL_MQ_CELL_SUN_FAIRY,
    RAND_INF_BOTTOM_OF_THE_WELL_MQ_BASEMENT_SUN_FAIRY,
    RAND_INF_ICE_CAVERN_ENTRANCE_STORMS_FAIRY,
    RAND_INF_GERUDO_TRAINING_GROUND_ENTRANCE_STORMS_FAIRY,
    // If you add anything to this list, you need to update the size of randomizerInf in z64save.h to be ceil(RAND_INF_MAX / 16)

    RAND_INF_MAX,
} RandomizerInf;
