/*******************/
/*** Level Class ***/
/*******************/

#ifndef __LEVEL_LEVEL_H__
#define __LEVEL_LEVEL_H__

#include "system\global.h"
#include "level/layertile.h"
#include "level/layercollision.h"

/*****************************************************************************/
class CLayer;
class CLevel
{
public:
			CLevel();
	virtual ~CLevel();

// Scene Handlers
	void		init();
	void		shutdown();
	void		render();
	void		think(int _frames);

	void				setCameraCentre(DVECTOR _pos)		{MapPos=_pos;}
	static DVECTOR		getCameraPos()						{return MapPos;}

private:
	void		initLayers();

	sLvlHdr			*LevelHdr;
	static DVECTOR	MapPos;


// Tile Layers
	CLayerTile		*TileLayers[CLayerTile::LAYER_TILE_TYPE_MAX];
// Collision
	CLayerCollision	*CollisionLayer;
};

/*****************************************************************************/

#endif