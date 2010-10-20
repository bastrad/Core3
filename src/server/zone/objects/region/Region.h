/*
 *	server/zone/objects/region/Region.h generated by engine3 IDL compiler 0.61
 */

#ifndef REGION_H_
#define REGION_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace bazaar {

class BazaarTerminal;

} // namespace bazaar
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::bazaar;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace shuttle {

class ShuttleCreature;

} // namespace shuttle
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::shuttle;

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace city {

class CityHallObject;

} // namespace city
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::city;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace bank {

class BankInstallation;

} // namespace bank
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::bank;

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace shuttle {

class ShuttleInstallation;

} // namespace shuttle
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::shuttle;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/scene/variables/StringId.h"

#include "server/zone/objects/region/RegionCenterPoint.h"

#include "server/zone/objects/region/RegionCenterPointList.h"

#include "system/util/VectorMap.h"

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/area/ActiveArea.h"

namespace server {
namespace zone {
namespace objects {
namespace region {

class Region : public ActiveArea {
public:
	Region();

	void notifyEnter(SceneObject* object);

	void sendGreetingMessage(PlayerCreature* player);

	void sendDepartingMessage(PlayerCreature* player);

	void notifyExit(SceneObject* object);

	void insertToZone(Zone* zone);

	void removeFromZone();

	void despawnCityObjects();

	void addBazaar(BazaarTerminal* ter);

	BazaarTerminal* getBazaar(int idx);

	ShuttleInstallation* getShuttle();

	int getBazaarCount();

	bool isRegion();

	CityHallObject* getCityHall();

	void setCityHall(CityHallObject* hall);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Region(DummyConstructorParameter* param);

	virtual ~Region();

	friend class RegionHelper;
};

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

namespace server {
namespace zone {
namespace objects {
namespace region {

class RegionImplementation : public ActiveAreaImplementation {
protected:
	VectorMap<unsigned long long, ManagedReference<BazaarTerminal* > > bazaars;

	SortedVector<ManagedReference<BankInstallation* > > banks;

	ManagedReference<ShuttleInstallation* > shuttleInstallation;

	ManagedReference<CityHallObject* > cityHall;

public:
	RegionImplementation();

	RegionImplementation(DummyConstructorParameter* param);

	void notifyEnter(SceneObject* object);

	void sendGreetingMessage(PlayerCreature* player);

	void sendDepartingMessage(PlayerCreature* player);

	void notifyExit(SceneObject* object);

	void insertToZone(Zone* zone);

	void removeFromZone();

	void despawnCityObjects();

	void addBazaar(BazaarTerminal* ter);

	BazaarTerminal* getBazaar(int idx);

	ShuttleInstallation* getShuttle();

	int getBazaarCount();

	bool isRegion();

	CityHallObject* getCityHall();

	void setCityHall(CityHallObject* hall);

	Region* _this;

	operator const Region*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~RegionImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class Region;
};

class RegionAdapter : public ActiveAreaAdapter {
public:
	RegionAdapter(RegionImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void notifyEnter(SceneObject* object);

	void sendGreetingMessage(PlayerCreature* player);

	void sendDepartingMessage(PlayerCreature* player);

	void notifyExit(SceneObject* object);

	void insertToZone(Zone* zone);

	void removeFromZone();

	void despawnCityObjects();

	void addBazaar(BazaarTerminal* ter);

	BazaarTerminal* getBazaar(int idx);

	ShuttleInstallation* getShuttle();

	int getBazaarCount();

	bool isRegion();

	CityHallObject* getCityHall();

	void setCityHall(CityHallObject* hall);

};

class RegionHelper : public DistributedObjectClassHelper, public Singleton<RegionHelper> {
	static RegionHelper* staticInitializer;

public:
	RegionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<RegionHelper>;
};

} // namespace region
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::region;

#endif /*REGION_H_*/
