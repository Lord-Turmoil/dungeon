/******************************************************************************
 ***                   N E W  D E S I R E  S T U D I O S                    ***
 ******************************************************************************
 *                   Project Name : Dungeon                                   *
 *                                                                            *
 *                      File Name : Stand.h                                   *
 *                                                                            *
 *                     Programmer : Tony Skywalker                            *
 *                                                                            *
 *                     Start Date : December 8, 2022                          *
 *                                                                            *
 *                    Last Update :                                           *
 *                                                                            *
 * -------------------------------------------------------------------------- *
 * Over View:                                                                 *
 *   The stand...                                                             *
 * -------------------------------------------------------------------------- *
 * Build Environment:                                                         *
 *   Windows 11 Pro                                                           *
 *   Visual Studio 2022 Community                                             *
 *   EasyX 20220901                                                           *
 ******************************************************************************/

#ifndef _STAND_H_
#define _STAND_H_

#include "Object.h"

class Flashback;

class Stand : public Object
{
public:
	Stand(Scene* scene);
	virtual ~Stand();

	virtual Stand* Clone() const;
	virtual void Clone(Stand* clone) const {}

	virtual bool Load(XMLElement* node);

	void Initialize();

public:
	static const int SaveCost()		{ return 100; }
	static const int FlashCost()	{ return 200; }

	void IsAvailable(bool isAvailable)	{ m_isAvailable = isAvailable; }
	bool IsAvailable() const			{ return m_isAvailable; }

	double GetRadius() const { return m_radius; }

	Flashback* GetFlashback();

protected:
	virtual void _InitBehavior(XMLElement* node = nullptr);

private:
	bool m_isAvailable;
	double m_radius;

	Flashback* m_pFlashback;
};

#endif
