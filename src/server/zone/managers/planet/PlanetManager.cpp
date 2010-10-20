/*
 *	server/zone/managers/planet/PlanetManager.cpp generated by engine3 IDL compiler 0.61
 */

#include "PlanetManager.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "server/zone/objects/scene/variables/StringId.h"

#include "server/zone/managers/structure/StructureManager.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

#include "server/zone/objects/creature/shuttle/ShuttleCreature.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	PlanetManagerStub
 */

PlanetManager::PlanetManager(Zone* planet, ZoneProcessServerImplementation* srv) : ManagedService(DummyConstructorParameter::instance()) {
	PlanetManagerImplementation* _implementation = new PlanetManagerImplementation(planet, srv);
	_impl = _implementation;
	_impl->_setStub(this);
}

PlanetManager::PlanetManager(DummyConstructorParameter* param) : ManagedService(param) {
}

PlanetManager::~PlanetManager() {
}


void PlanetManager::initializeTransientMembers() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void PlanetManager::initialize() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

void PlanetManager::loadRegions() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		_implementation->loadRegions();
}

void PlanetManager::loadPlayerRegions() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		_implementation->loadPlayerRegions();
}

void PlanetManager::loadNoBuildAreas() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		_implementation->loadNoBuildAreas();
}

void PlanetManager::loadShuttles() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		_implementation->loadShuttles();
}

void PlanetManager::loadBadgeAreas() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		_implementation->loadBadgeAreas();
}

void PlanetManager::loadPerformanceLocations() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		_implementation->loadPerformanceLocations();
}

void PlanetManager::loadHuntingTargets() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		method.executeWithVoidReturn();
	} else
		_implementation->loadHuntingTargets();
}

void PlanetManager::loadReconLocations() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithVoidReturn();
	} else
		_implementation->loadReconLocations();
}

ShuttleCreature* PlanetManager::getShuttle(const String& arrivalPoint) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addAsciiParameter(arrivalPoint);

		return (ShuttleCreature*) method.executeWithObjectReturn();
	} else
		return _implementation->getShuttle(arrivalPoint);
}

void PlanetManager::addShuttle(const String& city, ShuttleCreature* shuttle) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addAsciiParameter(city);
		method.addObjectParameter(shuttle);

		method.executeWithVoidReturn();
	} else
		_implementation->addShuttle(city, shuttle);
}

void PlanetManager::dropShuttle(const String& city) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addAsciiParameter(city);

		method.executeWithVoidReturn();
	} else
		_implementation->dropShuttle(city);
}

bool PlanetManager::isNoBuildArea(float x, float y, StringId& fullAreaName) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->isNoBuildArea(x, y, fullAreaName);
}

unsigned int PlanetManager::getTravelFare(const String& departurePlanet, const String& arrivalPlanet) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addAsciiParameter(departurePlanet);
		method.addAsciiParameter(arrivalPlanet);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getTravelFare(departurePlanet, arrivalPlanet);
}

void PlanetManager::sendPlanetTravelPointListResponse(PlayerCreature* player) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendPlanetTravelPointListResponse(player);
}

StructureManager* PlanetManager::getStructureManager() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return (StructureManager*) method.executeWithObjectReturn();
	} else
		return _implementation->getStructureManager();
}

TerrainManager* PlanetManager::getTerrainManager() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getTerrainManager();
}

Region* PlanetManager::getRegion(float x, float y) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return (Region*) method.executeWithObjectReturn();
	} else
		return _implementation->getRegion(x, y);
}

int PlanetManager::getRegionCount() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getRegionCount();
}

int PlanetManager::getNumberOfCities() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getNumberOfCities();
}

void PlanetManager::increaseNumberOfCities() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		method.executeWithVoidReturn();
	} else
		_implementation->increaseNumberOfCities();
}

Region* PlanetManager::getRegion(int index) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addSignedIntParameter(index);

		return (Region*) method.executeWithObjectReturn();
	} else
		return _implementation->getRegion(index);
}

void PlanetManager::addRegion(Region* region) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addObjectParameter(region);

		method.executeWithVoidReturn();
	} else
		_implementation->addRegion(region);
}

void PlanetManager::dropRegion(Region* region) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addObjectParameter(region);

		method.executeWithVoidReturn();
	} else
		_implementation->dropRegion(region);
}

bool PlanetManager::hasRegion(const String& name) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addAsciiParameter(name);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasRegion(name);
}

void PlanetManager::addPerformanceLocation(SceneObject* obj) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->addPerformanceLocation(obj);
}

MissionTargetMap* PlanetManager::getPerformanceLocations() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getPerformanceLocations();
}

void PlanetManager::addMissionNpc(SceneObject* npc) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addObjectParameter(npc);

		method.executeWithVoidReturn();
	} else
		_implementation->addMissionNpc(npc);
}

MissionTargetMap* PlanetManager::getMissionNpcs() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getMissionNpcs();
}

void PlanetManager::addHuntingTargetTemplate(const String& temp1, const String& temp2, int level) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addAsciiParameter(temp1);
		method.addAsciiParameter(temp2);
		method.addSignedIntParameter(level);

		method.executeWithVoidReturn();
	} else
		_implementation->addHuntingTargetTemplate(temp1, temp2, level);
}

HuntingTargetEntry* PlanetManager::getHuntingTargetTemplate(int level) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getHuntingTargetTemplate(level);
}

void PlanetManager::addReconLoc(SceneObject* obj) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->addReconLoc(obj);
}

MissionTargetMap* PlanetManager::getReconLocs() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getReconLocs();
}

void PlanetManager::addInformant(SceneObject* obj) {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->addInformant(obj);
}

MissionTargetMap* PlanetManager::getInformants() {
	PlanetManagerImplementation* _implementation = (PlanetManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getInformants();
}

DistributedObjectServant* PlanetManager::_getImplementation() {
	return _impl;}

void PlanetManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	PlanetManagerImplementation
 */

PlanetManagerImplementation::PlanetManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


PlanetManagerImplementation::~PlanetManagerImplementation() {
	PlanetManagerImplementation::finalize();
}


void PlanetManagerImplementation::_initializeImplementation() {
	_setClassHelper(PlanetManagerHelper::instance());

	_serializationHelperMethod();
}

void PlanetManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (PlanetManager*) stub;
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* PlanetManagerImplementation::_getStub() {
	return _this;
}

PlanetManagerImplementation::operator const PlanetManager*() {
	return _this;
}

void PlanetManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PlanetManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PlanetManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PlanetManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PlanetManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PlanetManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PlanetManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PlanetManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("PlanetManager");

	addSerializableVariable("zone", &zone);
	addSerializableVariable("regionMap", &regionMap);
	addSerializableVariable("structureManager", &structureManager);
	addSerializableVariable("numberOfCities", &numberOfCities);
}

PlanetManagerImplementation::PlanetManagerImplementation(Zone* planet, ZoneProcessServerImplementation* srv) {
	_initializeImplementation();
	// server/zone/managers/planet/PlanetManager.idl(108):  		zone = planet;
	zone = planet;
	// server/zone/managers/planet/PlanetManager.idl(109):  		server = srv;
	server = srv;
	// server/zone/managers/planet/PlanetManager.idl(111):  		Logger.setLoggingName("PlanetManager");
	Logger::setLoggingName("PlanetManager");
	// server/zone/managers/planet/PlanetManager.idl(112):  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/managers/planet/PlanetManager.idl(113):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/planet/PlanetManager.idl(115):  		terrainManager = null;
	terrainManager = NULL;
	// server/zone/managers/planet/PlanetManager.idl(117):  		numberOfCities = 0;
	numberOfCities = 0;
	// server/zone/managers/planet/PlanetManager.idl(119):  		structureManager = null;
	structureManager = NULL;
}

ShuttleCreature* PlanetManagerImplementation::getShuttle(const String& arrivalPoint) {
	Locker _locker(_this);
	// server/zone/managers/planet/PlanetManager.idl(138):  		return shuttleMap.get(arrivalPoint);
	return (&shuttleMap)->get(arrivalPoint);
}

void PlanetManagerImplementation::addShuttle(const String& city, ShuttleCreature* shuttle) {
	Locker _locker(_this);
	// server/zone/managers/planet/PlanetManager.idl(142):  		shuttleMap.put(city, shuttle);
	(&shuttleMap)->put(city, shuttle);
}

void PlanetManagerImplementation::dropShuttle(const String& city) {
	Locker _locker(_this);
	// server/zone/managers/planet/PlanetManager.idl(146):  		shuttleMap.remove(city);
	(&shuttleMap)->remove(city);
}

StructureManager* PlanetManagerImplementation::getStructureManager() {
	// server/zone/managers/planet/PlanetManager.idl(162):  		return structureManager;
	return structureManager;
}

TerrainManager* PlanetManagerImplementation::getTerrainManager() {
	// server/zone/managers/planet/PlanetManager.idl(167):  		return terrainManager;
	return terrainManager;
}

Region* PlanetManagerImplementation::getRegion(float x, float y) {
	// server/zone/managers/planet/PlanetManager.idl(171):  		return regionMap.getRegion(x, y);
	return (&regionMap)->getRegion(x, y);
}

int PlanetManagerImplementation::getRegionCount() {
	// server/zone/managers/planet/PlanetManager.idl(175):  		return regionMap.size();
	return (&regionMap)->size();
}

int PlanetManagerImplementation::getNumberOfCities() {
	// server/zone/managers/planet/PlanetManager.idl(179):  		return numberOfCities;
	return numberOfCities;
}

void PlanetManagerImplementation::increaseNumberOfCities() {
	// server/zone/managers/planet/PlanetManager.idl(183):  		numberOfCities = numberOfCities + 1;
	numberOfCities = numberOfCities + 1;
}

Region* PlanetManagerImplementation::getRegion(int index) {
	// server/zone/managers/planet/PlanetManager.idl(187):  		return regionMap.getRegion(index);
	return (&regionMap)->getRegion(index);
}

void PlanetManagerImplementation::addRegion(Region* region) {
	// server/zone/managers/planet/PlanetManager.idl(191):  		regionMap.addRegion(region);
	(&regionMap)->addRegion(region);
}

void PlanetManagerImplementation::dropRegion(Region* region) {
	// server/zone/managers/planet/PlanetManager.idl(195):  		regionMap.dropRegion(region);
	(&regionMap)->dropRegion(region);
}

bool PlanetManagerImplementation::hasRegion(const String& name) {
	// server/zone/managers/planet/PlanetManager.idl(199):  		return regionMap.containsRegion(name);
	return (&regionMap)->containsRegion(name);
}

void PlanetManagerImplementation::addPerformanceLocation(SceneObject* obj) {
	// server/zone/managers/planet/PlanetManager.idl(203):  		performanceLocations.add(obj);
	(&performanceLocations)->add(obj);
}

MissionTargetMap* PlanetManagerImplementation::getPerformanceLocations() {
	// server/zone/managers/planet/PlanetManager.idl(208):  		return performanceLocations;
	return (&performanceLocations);
}

void PlanetManagerImplementation::addMissionNpc(SceneObject* npc) {
	// server/zone/managers/planet/PlanetManager.idl(212):  		missionNpcs.add(npc);
	(&missionNpcs)->add(npc);
}

MissionTargetMap* PlanetManagerImplementation::getMissionNpcs() {
	// server/zone/managers/planet/PlanetManager.idl(217):  		return missionNpcs;
	return (&missionNpcs);
}

void PlanetManagerImplementation::addHuntingTargetTemplate(const String& temp1, const String& temp2, int level) {
	// server/zone/managers/planet/PlanetManager.idl(221):  		huntingTargets.addTarget(temp1, temp2, level);
	(&huntingTargets)->addTarget(temp1, temp2, level);
}

HuntingTargetEntry* PlanetManagerImplementation::getHuntingTargetTemplate(int level) {
	// server/zone/managers/planet/PlanetManager.idl(226):  		return huntingTargets.getRandomTarget(level);
	return (&huntingTargets)->getRandomTarget(level);
}

void PlanetManagerImplementation::addReconLoc(SceneObject* obj) {
	// server/zone/managers/planet/PlanetManager.idl(230):  		reconLocs.add(obj);
	(&reconLocs)->add(obj);
}

MissionTargetMap* PlanetManagerImplementation::getReconLocs() {
	// server/zone/managers/planet/PlanetManager.idl(235):  		return reconLocs;
	return (&reconLocs);
}

void PlanetManagerImplementation::addInformant(SceneObject* obj) {
	// server/zone/managers/planet/PlanetManager.idl(239):  		informants.add(obj);
	(&informants)->add(obj);
}

MissionTargetMap* PlanetManagerImplementation::getInformants() {
	// server/zone/managers/planet/PlanetManager.idl(244):  		return informants;
	return (&informants);
}

/*
 *	PlanetManagerAdapter
 */

PlanetManagerAdapter::PlanetManagerAdapter(PlanetManagerImplementation* obj) : ManagedServiceAdapter(obj) {
}

Packet* PlanetManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		finalize();
		break;
	case 8:
		initialize();
		break;
	case 9:
		loadRegions();
		break;
	case 10:
		loadPlayerRegions();
		break;
	case 11:
		loadNoBuildAreas();
		break;
	case 12:
		loadShuttles();
		break;
	case 13:
		loadBadgeAreas();
		break;
	case 14:
		loadPerformanceLocations();
		break;
	case 15:
		loadHuntingTargets();
		break;
	case 16:
		loadReconLocations();
		break;
	case 17:
		resp->insertLong(getShuttle(inv->getAsciiParameter(_param0_getShuttle__String_))->_getObjectID());
		break;
	case 18:
		addShuttle(inv->getAsciiParameter(_param0_addShuttle__String_ShuttleCreature_), (ShuttleCreature*) inv->getObjectParameter());
		break;
	case 19:
		dropShuttle(inv->getAsciiParameter(_param0_dropShuttle__String_));
		break;
	case 20:
		resp->insertInt(getTravelFare(inv->getAsciiParameter(_param0_getTravelFare__String_String_), inv->getAsciiParameter(_param1_getTravelFare__String_String_)));
		break;
	case 21:
		sendPlanetTravelPointListResponse((PlayerCreature*) inv->getObjectParameter());
		break;
	case 22:
		resp->insertLong(getStructureManager()->_getObjectID());
		break;
	case 23:
		resp->insertLong(getRegion(inv->getFloatParameter(), inv->getFloatParameter())->_getObjectID());
		break;
	case 24:
		resp->insertSignedInt(getRegionCount());
		break;
	case 25:
		resp->insertSignedInt(getNumberOfCities());
		break;
	case 26:
		increaseNumberOfCities();
		break;
	case 27:
		resp->insertLong(getRegion(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 28:
		addRegion((Region*) inv->getObjectParameter());
		break;
	case 29:
		dropRegion((Region*) inv->getObjectParameter());
		break;
	case 30:
		resp->insertBoolean(hasRegion(inv->getAsciiParameter(_param0_hasRegion__String_)));
		break;
	case 31:
		addPerformanceLocation((SceneObject*) inv->getObjectParameter());
		break;
	case 32:
		addMissionNpc((SceneObject*) inv->getObjectParameter());
		break;
	case 33:
		addHuntingTargetTemplate(inv->getAsciiParameter(_param0_addHuntingTargetTemplate__String_String_int_), inv->getAsciiParameter(_param1_addHuntingTargetTemplate__String_String_int_), inv->getSignedIntParameter());
		break;
	case 34:
		addReconLoc((SceneObject*) inv->getObjectParameter());
		break;
	case 35:
		addInformant((SceneObject*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PlanetManagerAdapter::initializeTransientMembers() {
	((PlanetManagerImplementation*) impl)->initializeTransientMembers();
}

void PlanetManagerAdapter::finalize() {
	((PlanetManagerImplementation*) impl)->finalize();
}

void PlanetManagerAdapter::initialize() {
	((PlanetManagerImplementation*) impl)->initialize();
}

void PlanetManagerAdapter::loadRegions() {
	((PlanetManagerImplementation*) impl)->loadRegions();
}

void PlanetManagerAdapter::loadPlayerRegions() {
	((PlanetManagerImplementation*) impl)->loadPlayerRegions();
}

void PlanetManagerAdapter::loadNoBuildAreas() {
	((PlanetManagerImplementation*) impl)->loadNoBuildAreas();
}

void PlanetManagerAdapter::loadShuttles() {
	((PlanetManagerImplementation*) impl)->loadShuttles();
}

void PlanetManagerAdapter::loadBadgeAreas() {
	((PlanetManagerImplementation*) impl)->loadBadgeAreas();
}

void PlanetManagerAdapter::loadPerformanceLocations() {
	((PlanetManagerImplementation*) impl)->loadPerformanceLocations();
}

void PlanetManagerAdapter::loadHuntingTargets() {
	((PlanetManagerImplementation*) impl)->loadHuntingTargets();
}

void PlanetManagerAdapter::loadReconLocations() {
	((PlanetManagerImplementation*) impl)->loadReconLocations();
}

ShuttleCreature* PlanetManagerAdapter::getShuttle(const String& arrivalPoint) {
	return ((PlanetManagerImplementation*) impl)->getShuttle(arrivalPoint);
}

void PlanetManagerAdapter::addShuttle(const String& city, ShuttleCreature* shuttle) {
	((PlanetManagerImplementation*) impl)->addShuttle(city, shuttle);
}

void PlanetManagerAdapter::dropShuttle(const String& city) {
	((PlanetManagerImplementation*) impl)->dropShuttle(city);
}

unsigned int PlanetManagerAdapter::getTravelFare(const String& departurePlanet, const String& arrivalPlanet) {
	return ((PlanetManagerImplementation*) impl)->getTravelFare(departurePlanet, arrivalPlanet);
}

void PlanetManagerAdapter::sendPlanetTravelPointListResponse(PlayerCreature* player) {
	((PlanetManagerImplementation*) impl)->sendPlanetTravelPointListResponse(player);
}

StructureManager* PlanetManagerAdapter::getStructureManager() {
	return ((PlanetManagerImplementation*) impl)->getStructureManager();
}

Region* PlanetManagerAdapter::getRegion(float x, float y) {
	return ((PlanetManagerImplementation*) impl)->getRegion(x, y);
}

int PlanetManagerAdapter::getRegionCount() {
	return ((PlanetManagerImplementation*) impl)->getRegionCount();
}

int PlanetManagerAdapter::getNumberOfCities() {
	return ((PlanetManagerImplementation*) impl)->getNumberOfCities();
}

void PlanetManagerAdapter::increaseNumberOfCities() {
	((PlanetManagerImplementation*) impl)->increaseNumberOfCities();
}

Region* PlanetManagerAdapter::getRegion(int index) {
	return ((PlanetManagerImplementation*) impl)->getRegion(index);
}

void PlanetManagerAdapter::addRegion(Region* region) {
	((PlanetManagerImplementation*) impl)->addRegion(region);
}

void PlanetManagerAdapter::dropRegion(Region* region) {
	((PlanetManagerImplementation*) impl)->dropRegion(region);
}

bool PlanetManagerAdapter::hasRegion(const String& name) {
	return ((PlanetManagerImplementation*) impl)->hasRegion(name);
}

void PlanetManagerAdapter::addPerformanceLocation(SceneObject* obj) {
	((PlanetManagerImplementation*) impl)->addPerformanceLocation(obj);
}

void PlanetManagerAdapter::addMissionNpc(SceneObject* npc) {
	((PlanetManagerImplementation*) impl)->addMissionNpc(npc);
}

void PlanetManagerAdapter::addHuntingTargetTemplate(const String& temp1, const String& temp2, int level) {
	((PlanetManagerImplementation*) impl)->addHuntingTargetTemplate(temp1, temp2, level);
}

void PlanetManagerAdapter::addReconLoc(SceneObject* obj) {
	((PlanetManagerImplementation*) impl)->addReconLoc(obj);
}

void PlanetManagerAdapter::addInformant(SceneObject* obj) {
	((PlanetManagerImplementation*) impl)->addInformant(obj);
}

/*
 *	PlanetManagerHelper
 */

PlanetManagerHelper* PlanetManagerHelper::staticInitializer = PlanetManagerHelper::instance();

PlanetManagerHelper::PlanetManagerHelper() {
	className = "PlanetManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PlanetManagerHelper::finalizeHelper() {
	PlanetManagerHelper::finalize();
}

DistributedObject* PlanetManagerHelper::instantiateObject() {
	return new PlanetManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* PlanetManagerHelper::instantiateServant() {
	return new PlanetManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlanetManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlanetManagerAdapter((PlanetManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

