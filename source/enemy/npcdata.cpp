/*=========================================================================

	npcdata.cpp

	Author:		CRB
	Created:
	Project:	Spongebob
	Purpose:

	Copyright (c) 2000 Climax Development Ltd

===========================================================================*/

#ifndef __ENEMY_NPC_H__
#include "enemy\npc.h"
#endif

#ifndef __ENEMY_NPLATFRM_H__
#include "enemy\nplatfrm.h"
#endif

#ifndef	__PLAYER_PLAYER_H__
#include "player\player.h"
#endif

#ifndef	__ANIM_CLAM_HEADER__
#include <ACTOR_CLAM_ANIM.h>
#endif

#ifndef	__ANIM_ANENOMELVL1_HEADER__
#include <ACTOR_ANENOMELVL1_ANIM.h>
#endif

#ifndef	__ANIM_ANENOMELVL3_HEADER__
#include <ACTOR_ANENOMELVL3_ANIM.h>
#endif

#ifndef __ANIM_BABYOCTOPUS_HEADER__
#include <ACTOR_BABYOCTOPUS_ANIM.h>
#endif

#ifndef __ANIM_CATERPILLAR_HEADER__
#include <ACTOR_CATERPILLAR_ANIM.h>
#endif

#ifndef __ANIM_DUSTDEVIL_HEADER__
#include <ACTOR_DUSTDEVIL_ANIM.h>
#endif

#ifndef __ANIM_EYEBALL_HEADER__
#include <ACTOR_EYEBALL_ANIM.h>
#endif

#ifndef __ANIM_FLAMINGSKULL_HEADER__
#include <ACTOR_FLAMINGSKULL_ANIM.h>
#endif

#ifndef __ANIM_FLYINGDUTCHMAN_HEADER__
#include <ACTOR_FLYINGDUTCHMAN_ANIM.h>
#endif

#ifndef __ANIM_GHOST_HEADER__
#include <ACTOR_GHOST_ANIM.h>
#endif

#ifndef __ANIM_HERMITCRAB_HEADER__
#include <ACTOR_HERMITCRAB_ANIM.h>
#endif

#ifndef __ANIM_IRONDOGFISH_HEADER__
#include <ACTOR_IRONDOGFISH_ANIM.h>
#endif

#ifndef __ANIM_JELLYFISH1_HEADER__
#include <ACTOR_JELLYFISH1_ANIM.h>
#endif

#ifndef __ANIM_PUFFAFISH_HEADER__
#include <ACTOR_PUFFAFISH_ANIM.h>
#endif

#ifndef __ANIM_SHARKMAN_HEADER__
#include <ACTOR_SHARKMAN_ANIM.h>
#endif

#ifndef __ANIM_SKELETALFISH_HEADER__
#include <ACTOR_SKELETALFISH_ANIM.h>
#endif

#ifndef __ANIM_SPIDERCRAB_HEADER__
#include <ACTOR_SPIDERCRAB_ANIM.h>
#endif

#ifndef __ANIM_SQUIDDART_HEADER__
#include <ACTOR_SQUIDDART_ANIM.h>
#endif

#ifndef __ANIM_STOMPER_HEADER__
#include <ACTOR_STOMPER_ANIM.h>
#endif

#ifndef __ANIM_SPIKEYANENOME_HEADER__
#include <ACTOR_SPIKEYANENOME_ANIM.h>
#endif

#ifndef __ANIM_BALLBLOB_HEADER__
#include <ACTOR_BALLBLOB_ANIM.h>
#endif

//#ifndef	__ANIM_SHARKSUB_HEADER__
//#include <ACTOR_SHARKSUB_ANIM.h>
//#endif


CNpcFriend::NPC_FRIEND_DATA CNpcFriend::m_data[NPC_FRIEND_UNIT_TYPE_MAX] =
{
	{	// NPC_SANDY_CHEEKS
		//NPC_FRIEND_INIT_DEFAULT,
		//NPC_FRIEND_SENSOR_NONE,
		NPC_FRIEND_MOVEMENT_STATIC,
		//NPC_FRIEND_MOVEMENT_MODIFIER_NONE,
		//NPC_FRIEND_CLOSE_NONE,
		//NPC_FRIEND_TIMER_NONE,
		true,
		3,
		128,
		false,
		DAMAGE__HIT_ENEMY,
	},

	{	// NPC_GARY
		//NPC_FRIEND_INIT_DEFAULT,
		//NPC_FRIEND_SENSOR_NONE,
		NPC_FRIEND_MOVEMENT_GARY,
		//NPC_FRIEND_MOVEMENT_MODIFIER_NONE,
		//NPC_FRIEND_CLOSE_NONE,
		//NPC_FRIEND_TIMER_NONE,
		false,
		3,
		2048,
		false,
		DAMAGE__HIT_ENEMY,
	},
};

CNpcPlatform::NPC_PLATFORM_DATA CNpcPlatform::m_data[NPC_PLATFORM_TYPE_MAX] =
{
	{	// NPC_LINEAR_PLATFORM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_PLATFORM_MOVEMENT_FIXED_PATH,
		3,
		//512,
		2048,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_CIRCULAR_PLATFORM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_PLATFORM_MOVEMENT_FIXED_CIRCULAR,
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_BUBBLE_PLATFORM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_PLATFORM_MOVEMENT_BUBBLE,
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_FINITE_LIFE_RESPAWN,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_COLLAPSING_BUBBLE_PLATFORM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_PLATFORM_MOVEMENT_STATIC,
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE_COLLAPSIBLE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_FISH_HOOK_PLATFORM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_PLATFORM_MOVEMENT_STATIC,
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE_FISH_HOOK,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_RETRACTING_PLATFORM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_PLATFORM_MOVEMENT_STATIC,
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_RETRACT,
	},

	{	// NPC_GEYSER_PLATFORM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_PLATFORM_MOVEMENT_STATIC,
		8,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_GEYSER,
	},

	{	// NPC_BOBBING_PLATFORM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_PLATFORM_MOVEMENT_BOB,
		0,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_FALLING_PLATFORM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_PLATFORM_MOVEMENT_FALL,
		4,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_CART_PLATFORM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_PLATFORM_MOVEMENT_CART,
		4,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_PLAYER_BUBBLE_PLATFORM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_PLATFORM_MOVEMENT_PLAYER_BUBBLE,
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_FINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},
};

CNpcEnemy::NPC_DATA CNpcEnemy::m_data[NPC_UNIT_TYPE_MAX] =
{
	{	// NPC_FALLING_ITEM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_DEFAULT,
		//NPC_SENSOR_FALLING_ITEM_USER_CLOSE,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_FALLING_ITEM_FALL,
		NPC_TIMER_NONE,
		false,
		8,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__SQUASH_ENEMY,
		0,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_FISH_HOOK
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_FISH_HOOK,
		NPC_SENSOR_FISH_HOOK_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_FISH_HOOK_RISE,
		NPC_TIMER_NONE,
		false,
		3,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__NONE,
		0,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_DUST_DEVIL
		ACTORS_DUSTDEVIL_SBK,
		ANIM_DUSTDEVIL_TWIST,
		NPC_INIT_RETURNING_HAZARD,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_RETURNING_HAZARD,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__NONE,
		0,
		ANIM_DUSTDEVIL_TWIST,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_PENDULUM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_PENDULUM,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_PENDULUM,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		0,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_FIREBALL
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_FIREBALL,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIREBALL,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		40,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__BURN_ENEMY,
		0,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_SAW_BLADE
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_RETURNING_HAZARD,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_RETURNING_HAZARD,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		0,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_SMALL_JELLYFISH_1
		ACTORS_JELLYFISH1_SBK,
		ANIM_JELLYFISH1_IDLE,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_JELLYFISH_USER_CLOSE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_JELLYFISH,
		NPC_CLOSE_JELLYFISH_EVADE,
		NPC_TIMER_NONE,
		false,
		3,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__SHOCK_ENEMY,
		16,
		ANIM_JELLYFISH1_SWIM,
		NPC_SHOT_GENERIC,
		0,
		ANIM_JELLYFISH1_SWIM,
		NPC_COLLISION_GENERIC,
		true,
	},

	{	// NPC_SMALL_JELLYFISH_2
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_JELLYFISH_USER_CLOSE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_JELLYFISH,
		NPC_CLOSE_JELLYFISH_EVADE,
		NPC_TIMER_NONE,
		false,
		3,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__SHOCK_ENEMY,
		32,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_ANEMONE_1
		ACTORS_ANENOMELVL1_SBK,
		ANIM_ANENOMELVL1_BEND,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_ANEMONE_USER_CLOSE,
		NPC_MOVEMENT_STATIC_CYCLE_ANIM,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_ANEMONE_1_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__NONE,
		16,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_ANEMONE_2
		ACTORS_SPIKEYANENOME_SBK,
		ANIM_SPIKEYANENOME_BODY,
		NPC_INIT_ANEMONE_2,
		NPC_SENSOR_ANEMONE_USER_CLOSE,
		NPC_MOVEMENT_STATIC_CYCLE_ANIM,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_ANEMONE_2_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__NONE,
		32,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_ANEMONE_3
		ACTORS_ANENOMELVL3_SBK,
		ANIM_ANENOMELVL3_BEND,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_ANEMONE_USER_CLOSE,
		NPC_MOVEMENT_STATIC_CYCLE_ANIM,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_ANEMONE_3_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__NONE,
		48,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_SKELETAL_FISH
		ACTORS_SKELETALFISH_SBK,
		ANIM_SKELETALFISH_IDLE,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_GENERIC_USER_VISIBLE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_SKELETAL_FISH_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__BITE_ENEMY,
		0,
		ANIM_SKELETALFISH_SWIM,
		NPC_SHOT_GENERIC,
		ANIM_SKELETALFISH_DIE,
		ANIM_SKELETALFISH_GETHIT,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_CLAM_JUMP
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_CLAM_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_CLAM_JUMP_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		0,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_CLAM_STATIC
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_CLAM_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_CLAM_SNAP_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		0,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_SQUID_DART
		ACTORS_SQUIDDART_SBK,
		ANIM_SQUIDDART_SWIM,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		5,
		256,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		16,
		ANIM_SQUIDDART_SWIM,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_FISH_FOLK
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_FISH_FOLK,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH_WALK,
		NPC_MOVEMENT_MODIFIER_FISH_FOLK,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		2,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__NONE,
		0,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_PRICKLY_BUG
		ACTORS_CATERPILLAR_SBK,
		ANIM_CATERPILLAR_CRAWL,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH_WALK,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		1,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__POISON_ENEMY,
		48,
		ANIM_CATERPILLAR_CRAWL,
		NPC_SHOT_GENERIC,
		ANIM_CATERPILLAR_DIE,
		ANIM_CATERPILLAR_GETHIT,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_SEA_SNAKE
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		256,
		DETECT_NO_COLLISION,
		DAMAGE__SHOCK_ENEMY,
		56,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_PUFFA_FISH
		ACTORS_PUFFAFISH_SBK,
		ANIM_PUFFAFISH_PUFFUPIDLE,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_PUFFA_FISH_USER_CLOSE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_PUFFA_FISH_INFLATE,
		NPC_TIMER_NONE,
		false,
		2,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		64,
		ANIM_PUFFAFISH_SWIM,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_ANGLER_FISH
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		1,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__NONE,
		0,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_HERMIT_CRAB
		ACTORS_HERMITCRAB_SBK,
		ANIM_HERMITCRAB_IDLE,
		NPC_INIT_HERMIT_CRAB,
		NPC_SENSOR_HERMIT_CRAB_USER_CLOSE,
		NPC_MOVEMENT_FIXED_PATH_WALK,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_HERMIT_CRAB_ATTACK,
		NPC_TIMER_NONE,
		false,
		2,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		32,
		ANIM_HERMITCRAB_SCUTTLE,
		NPC_SHOT_GENERIC,
		ANIM_HERMITCRAB_DIE,
		ANIM_HERMITCRAB_GETHIT,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_MINE
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		0,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_BOOGER_MONSTER
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_BOOGER_MONSTER_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_BOOGER_MONSTER_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__BITE_ENEMY,
		0,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_SPIDER_CRAB
		ACTORS_SPIDERCRAB_SBK,
		ANIM_SPIDERCRAB_IDLE,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_SPIDER_CRAB_USER_CLOSE,
		NPC_MOVEMENT_FIXED_PATH_WALK,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_SPIDER_CRAB_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		DETECT_ATTACK_COLLISION_GENERIC,
		DAMAGE__PINCH_ENEMY,
		0,
		ANIM_SPIDERCRAB_RUN,
		NPC_SHOT_GENERIC,
		ANIM_SPIDERCRAB_DIE,
		ANIM_SPIDERCRAB_HIT,
		NPC_COLLISION_SPIDER_CRAB_BITE,
		false,
	},

	{	// NPC_EYEBALL
		ACTORS_EYEBALL_SBK,
		ANIM_EYEBALL_STALK,
		NPC_INIT_EYEBALL,
		NPC_SENSOR_EYEBALL_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_EYEBALL_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		32,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_BABY_OCTOPUS
		ACTORS_BABYOCTOPUS_SBK,
		ANIM_BABYOCTOPUS_IDLE,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_OCTOPUS_USER_CLOSE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_OCTOPUS,
		NPC_CLOSE_OCTOPUS_ATTACK,
		NPC_TIMER_NONE,
		false,
		2,
		512,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		32,
		ANIM_BABYOCTOPUS_SWIM,
		NPC_SHOT_GENERIC,
		ANIM_BABYOCTOPUS_DIE,
		ANIM_BABYOCTOPUS_HIT,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_ZOMBIE_FISH_FOLK
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_FISH_FOLK,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH_WALK,
		NPC_MOVEMENT_MODIFIER_FISH_FOLK,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		2,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		16,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_NINJA_STARFISH
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NINJA_STARFISH_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_GENERIC_USER_SEEK,
		NPC_TIMER_NONE,
		false,
		3,
		64,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		16,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_GHOST
		ACTORS_GHOST_SBK,
		ANIM_GHOST_IDLE,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		2,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		0,
		ANIM_GHOST_MOVE,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_GHOST_PIRATE
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_GHOST_PIRATE,
		NPC_SENSOR_GHOST_PIRATE_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_GHOST_PIRATE_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		160,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_FLAMING_SKULL
		ACTORS_FLAMINGSKULL_SBK,
		ANIM_FLAMINGSKULL_MOVE,
		NPC_INIT_FLAMING_SKULL,
		NPC_SENSOR_FLAMING_SKULL_USER_CLOSE,
		NPC_MOVEMENT_STATIC_CYCLE_ANIM,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_FLAMING_SKULL_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__BURN_ENEMY,
		16,
		ANIM_FLAMINGSKULL_MOVE,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_SHARK_MAN
		ACTORS_SHARKMAN_SBK,
		ANIM_SHARKMAN_IDLE1_,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_GENERIC_USER_VISIBLE,
		NPC_MOVEMENT_SHARK_MAN,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_SHARK_MAN_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__BITE_ENEMY,
		16,
		ANIM_SHARKMAN_RUN,
		NPC_SHOT_GENERIC,
		ANIM_SHARKMAN_DIE,
		ANIM_SHARKMAN_BLOCK,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_OIL_BLOB
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_OIL_BLOB_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_GENERIC_USER_SEEK,
		NPC_TIMER_NONE,
		false,
		3,
		64,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		0,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_SKULL_STOMPER
		ACTORS_STOMPER_SBK,
		ANIM_STOMPER_CRUSH,
		NPC_INIT_SKULL_STOMPER,
		NPC_SENSOR_SKULL_STOMPER_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_SKULL_STOMPER_ATTACK,
		NPC_TIMER_NONE,
		false,
		5,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__SQUASH_ENEMY,
		0,
		ANIM_STOMPER_CRUSH,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_MOTHER_JELLYFISH
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_MOTHER_JELLYFISH,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_MOTHER_JELLYFISH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_MOTHER_JELLYFISH_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		256,
		DETECT_NO_COLLISION,
		DAMAGE__SHOCK_ENEMY,
		256,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_SUB_SHARK
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_SUB_SHARK,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_SUB_SHARK,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_SUB_SHARK_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		256,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_PARASITIC_WORM
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_PARASITIC_WORM,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_PARASITIC_WORM,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		256,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_FLYING_DUTCHMAN
		ACTORS_FLYINGDUTCHMAN_SBK,
		ANIM_FLYINGDUTCHMAN_FLY,
		NPC_INIT_FLYING_DUTCHMAN,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FLYING_DUTCHMAN,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_FLYING_DUTCHMAN_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		256,
		ANIM_FLYINGDUTCHMAN_FLY,
		NPC_SHOT_GENERIC,
		0,
		ANIM_FLYINGDUTCHMAN_GETHIT,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_IRON_DOGFISH
		ACTORS_IRONDOGFISH_SBK,
		ANIM_IRONDOGFISH_IDLE,
		NPC_INIT_IRON_DOGFISH,
		NPC_SENSOR_IRON_DOGFISH_USER_CLOSE,
		NPC_MOVEMENT_IRON_DOGFISH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_IRON_DOGFISH_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		256,
		ANIM_IRONDOGFISH_WALK,
		NPC_SHOT_GENERIC,
		0,
		ANIM_IRONDOGFISH_GETHIT,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_PARASITIC_WORM_SEGMENT
		ACTORS_CLAM_SBK,
		ANIM_CLAM_SIDESNAP,
		NPC_INIT_PARASITIC_WORM_SEGMENT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		DETECT_NO_COLLISION,
		DAMAGE__HIT_ENEMY,
		256,
		0,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},

	{	// NPC_BALL_BLOB
		ACTORS_BALLBLOB_SBK,
		ANIM_BALLBLOB_WOBBLE,
		NPC_INIT_BALL_BLOB,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_BALL_BLOB,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		128,
		DETECT_NO_COLLISION,
		DAMAGE__BURN_ENEMY,
		16,
		ANIM_BALLBLOB_WOBBLE,
		NPC_SHOT_GENERIC,
		0,
		0,
		NPC_COLLISION_GENERIC,
		false,
	},
};

CNpcEnemy::NPC_UNIT_TYPE CNpcEnemy::mapEditConvertTable[NPC_UNIT_TYPE_MAX] =
{
	NPC_SMALL_JELLYFISH_1,
	NPC_SMALL_JELLYFISH_2,
	NPC_MOTHER_JELLYFISH,
	NPC_ANEMONE_1,
	NPC_ANEMONE_2,
	NPC_ANEMONE_3,
	NPC_BABY_OCTOPUS,
	NPC_BALL_BLOB,
	NPC_BOOGER_MONSTER,
	NPC_PRICKLY_BUG,
	NPC_CLAM_JUMP,
	NPC_CLAM_STATIC,
	NPC_EYEBALL,
	NPC_FLAMING_SKULL,
	NPC_FLYING_DUTCHMAN,
	NPC_GHOST,
	NPC_PARASITIC_WORM,
	NPC_HERMIT_CRAB,
	NPC_IRON_DOGFISH,
	NPC_PUFFA_FISH,
	NPC_SEA_SNAKE,
	NPC_SHARK_MAN,
	NPC_SUB_SHARK,
	NPC_SKELETAL_FISH,
	NPC_SPIDER_CRAB,
	NPC_SQUID_DART,
	NPC_SKULL_STOMPER,
	NPC_DUST_DEVIL,
	NPC_FALLING_ITEM,
	NPC_FISH_HOOK,
	NPC_PENDULUM,
	NPC_FIREBALL,
	NPC_SAW_BLADE,
	NPC_FISH_FOLK,
	NPC_ANGLER_FISH,
	NPC_MINE,
	NPC_ZOMBIE_FISH_FOLK,
	NPC_NINJA_STARFISH,
	NPC_GHOST_PIRATE,
	NPC_OIL_BLOB,
	NPC_PARASITIC_WORM_SEGMENT,
};

CNpcPlatform::NPC_PLATFORM_UNIT_TYPE CNpcPlatform::mapEditConvertTable[NPC_PLATFORM_TYPE_MAX] =
{
	NPC_BUBBLE_PLATFORM,
	NPC_LINEAR_PLATFORM,
	NPC_CIRCULAR_PLATFORM,
	NPC_COLLAPSING_BUBBLE_PLATFORM,
	NPC_FISH_HOOK_PLATFORM,
	NPC_RETRACTING_PLATFORM,
	NPC_GEYSER_PLATFORM,
	NPC_BOBBING_PLATFORM,
	NPC_FALLING_PLATFORM,
	NPC_CART_PLATFORM,
	NPC_PLAYER_BUBBLE_PLATFORM,
};