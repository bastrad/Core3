/*
 *	server/zone/objects/installation/InstallationObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "InstallationObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	InstallationObjectStub
 */

InstallationObject::InstallationObject() : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new InstallationObjectImplementation();
	_impl->_setStub(this);
}

InstallationObject::InstallationObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

InstallationObject::~InstallationObject() {
}


void InstallationObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->initializeTransientMembers();
}

void InstallationObject::destroyObjectFromDatabase(bool destroyContainedObjects) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

void InstallationObject::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((InstallationObjectImplementation*) _impl)->fillObjectMenuResponse(menuResponse, player);
}

int InstallationObject::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->handleObjectMenuSelect(player, selectedID);
}

void InstallationObject::handleStructureStatus(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->handleStructureStatus(player);
}

void InstallationObject::handleStructureManageMaintenance(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->handleStructureManageMaintenance(player);
}

void InstallationObject::handleSetObjectName(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->handleSetObjectName(player);
}

void InstallationObject::handleStructureDestroy(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->handleStructureDestroy(player);
}

bool InstallationObject::isOnAdminList(CreatureObject* creature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(creature);

		return method.executeWithBooleanReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->isOnAdminList(creature);
}

void InstallationObject::sendPermissionListTo(PlayerCreature* player, const String& listName) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);
		method.addAsciiParameter(listName);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->sendPermissionListTo(player, listName);
}

void InstallationObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->sendBaselinesTo(player);
}

void InstallationObject::setLotSize(int lotsize) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addSignedIntParameter(lotsize);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setLotSize(lotsize);
}

int InstallationObject::getLotSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithSignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getLotSize();
}

void InstallationObject::setDeedObjectID(unsigned long long deedid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addUnsignedLongParameter(deedid);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setDeedObjectID(deedid);
}

unsigned long long InstallationObject::getDeedObjectID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getDeedObjectID();
}

void InstallationObject::setOwnerObjectID(unsigned long long ownerID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addUnsignedLongParameter(ownerID);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setOwnerObjectID(ownerID);
}

unsigned long long InstallationObject::getOwnerObjectID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getOwnerObjectID();
}

void InstallationObject::setMaintenancePool(unsigned int maintenance) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addUnsignedIntParameter(maintenance);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setMaintenancePool(maintenance);
}

unsigned int InstallationObject::getMaintenancePool() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getMaintenancePool();
}

void InstallationObject::setPowerPool(unsigned int power) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addUnsignedIntParameter(power);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setPowerPool(power);
}

unsigned int InstallationObject::getPowerPool() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getPowerPool();
}

void InstallationObject::addMaintenance(float maint) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addFloatParameter(maint);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->addMaintenance(maint);
}

int InstallationObject::getBasePowerRate() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithSignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getBasePowerRate();
}

void InstallationObject::setBasePowerRate(int powerRate) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addSignedIntParameter(powerRate);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setBasePowerRate(powerRate);
}

void InstallationObject::setBaseMaintenanceRate(int maintenanceRate) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addSignedIntParameter(maintenanceRate);

		method.executeWithVoidReturn();
	} else
		((InstallationObjectImplementation*) _impl)->setBaseMaintenanceRate(maintenanceRate);
}

int InstallationObject::getBaseMaintenanceRate() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithSignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getBaseMaintenanceRate();
}

int InstallationObject::getRedeedCost() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithSignedIntReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->getRedeedCost();
}

bool InstallationObject::isInstallationObject() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithBooleanReturn();
	} else
		return ((InstallationObjectImplementation*) _impl)->isInstallationObject();
}

/*
 *	InstallationObjectImplementation
 */

InstallationObjectImplementation::InstallationObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}

InstallationObjectImplementation::~InstallationObjectImplementation() {
}


void InstallationObjectImplementation::finalize() {
}

void InstallationObjectImplementation::_initializeImplementation() {
	_setClassHelper(InstallationObjectHelper::instance());

	_serializationHelperMethod();
}

void InstallationObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (InstallationObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* InstallationObjectImplementation::_getStub() {
	return _this;
}

InstallationObjectImplementation::operator const InstallationObject*() {
	return _this;
}

void InstallationObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void InstallationObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void InstallationObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void InstallationObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void InstallationObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void InstallationObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void InstallationObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void InstallationObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("InstallationObject");

	addSerializableVariable("structurePermissionList", &structurePermissionList);
	addSerializableVariable("ownerObjectID", &ownerObjectID);
	addSerializableVariable("lotSize", &lotSize);
	addSerializableVariable("deedObjectID", &deedObjectID);
	addSerializableVariable("baseMaintenanceRate", &baseMaintenanceRate);
	addSerializableVariable("basePowerRate", &basePowerRate);
	addSerializableVariable("maintenancePool", &maintenancePool);
	addSerializableVariable("powerPool", &powerPool);
	addSerializableVariable("surplusMaintenance", &surplusMaintenance);
	addSerializableVariable("surplusPower", &surplusPower);
	addSerializableVariable("publicStructure", &publicStructure);
	addSerializableVariable("operatorList", &operatorList);
}

InstallationObjectImplementation::InstallationObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/installation/InstallationObject.idl(81):  		Logger.setLoggingName("InstallationObject");
	Logger::setLoggingName("InstallationObject");
	// server/zone/objects/installation/InstallationObject.idl(83):  		super.staticObject = false;
	TangibleObjectImplementation::staticObject = false;
	// server/zone/objects/installation/InstallationObject.idl(85):  		publicStructure = true;
	publicStructure = true;
	// server/zone/objects/installation/InstallationObject.idl(87):  		lotSize = 0;
	lotSize = 0;
	// server/zone/objects/installation/InstallationObject.idl(89):  		baseMaintenanceRate = 0;
	baseMaintenanceRate = 0;
	// server/zone/objects/installation/InstallationObject.idl(90):  		basePowerRate = 0;
	basePowerRate = 0;
	// server/zone/objects/installation/InstallationObject.idl(91):  		maintenancePool = 0;
	maintenancePool = 0;
	// server/zone/objects/installation/InstallationObject.idl(92):  		powerPool = 0;
	powerPool = 0;
	// server/zone/objects/installation/InstallationObject.idl(93):  		deedObjectID = 0;
	deedObjectID = 0;
	// server/zone/objects/installation/InstallationObject.idl(94):  		surplusMaintenance = 0;
	surplusMaintenance = 0;
	// server/zone/objects/installation/InstallationObject.idl(95):  		surplusPower = 0;
	surplusPower = 0;
	// server/zone/objects/installation/InstallationObject.idl(96):  		operatorList.setNoDuplicateInsertPlan();
	(&operatorList)->setNoDuplicateInsertPlan();
}

void InstallationObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/installation/InstallationObject.idl(100):  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/installation/InstallationObject.idl(102):  		operatorList.setNoDuplicateInsertPlan();
	(&operatorList)->setNoDuplicateInsertPlan();
	// server/zone/objects/installation/InstallationObject.idl(104):  		Logger.setLoggingName("InstallationObject");
	Logger::setLoggingName("InstallationObject");
}

bool InstallationObjectImplementation::isOnAdminList(CreatureObject* creature) {
	// server/zone/objects/installation/InstallationObject.idl(145):  		return structurePermissionList.isOnAdminList(creature.getObjectID());
	return (&structurePermissionList)->isOnAdminList(creature->getObjectID());
}

void InstallationObjectImplementation::sendPermissionListTo(PlayerCreature* player, const String& listName) {
	// server/zone/objects/installation/InstallationObject.idl(149):  		structurePermissionList.sendTo(player, listName);
	(&structurePermissionList)->sendTo(player, listName);
}

void InstallationObjectImplementation::setLotSize(int lotsize) {
	// server/zone/objects/installation/InstallationObject.idl(155):  		lotSize = lotsize;
	lotSize = lotsize;
}

int InstallationObjectImplementation::getLotSize() {
	// server/zone/objects/installation/InstallationObject.idl(159):  		return lotSize;
	return lotSize;
}

void InstallationObjectImplementation::setDeedObjectID(unsigned long long deedid) {
	// server/zone/objects/installation/InstallationObject.idl(163):  		deedObjectID = deedid;
	deedObjectID = deedid;
}

unsigned long long InstallationObjectImplementation::getDeedObjectID() {
	// server/zone/objects/installation/InstallationObject.idl(167):  		return deedObjectID;
	return deedObjectID;
}

void InstallationObjectImplementation::setOwnerObjectID(unsigned long long ownerID) {
	// server/zone/objects/installation/InstallationObject.idl(171):  		ownerObjectID = ownerID;
	ownerObjectID = ownerID;
	// server/zone/objects/installation/InstallationObject.idl(172):  		structurePermissionList.grantPermission(ownerID, StructurePermissionList.OWNER);
	(&structurePermissionList)->grantPermission(ownerID, StructurePermissionList::OWNER);
}

unsigned long long InstallationObjectImplementation::getOwnerObjectID() {
	// server/zone/objects/installation/InstallationObject.idl(176):  		return ownerObjectID;
	return ownerObjectID;
}

void InstallationObjectImplementation::setMaintenancePool(unsigned int maintenance) {
	// server/zone/objects/installation/InstallationObject.idl(180):  		maintenancePool = maintenance;
	maintenancePool = maintenance;
}

unsigned int InstallationObjectImplementation::getMaintenancePool() {
	// server/zone/objects/installation/InstallationObject.idl(184):  		return maintenancePool;
	return maintenancePool;
}

void InstallationObjectImplementation::setPowerPool(unsigned int power) {
	// server/zone/objects/installation/InstallationObject.idl(188):  		powerPool = power;
	powerPool = power;
}

unsigned int InstallationObjectImplementation::getPowerPool() {
	// server/zone/objects/installation/InstallationObject.idl(192):  		return powerPool;
	return powerPool;
}

void InstallationObjectImplementation::addMaintenance(float maint) {
	// server/zone/objects/installation/InstallationObject.idl(196):  		surplusMaintenance = surplusMaintenance + maint;
	surplusMaintenance = surplusMaintenance + maint;
}

int InstallationObjectImplementation::getBasePowerRate() {
	// server/zone/objects/installation/InstallationObject.idl(205):  		return basePowerRate;
	return basePowerRate;
}

void InstallationObjectImplementation::setBasePowerRate(int powerRate) {
	// server/zone/objects/installation/InstallationObject.idl(213):  		basePowerRate = powerRate;
	basePowerRate = powerRate;
}

void InstallationObjectImplementation::setBaseMaintenanceRate(int maintenanceRate) {
	// server/zone/objects/installation/InstallationObject.idl(221):  		baseMaintenanceRate = maintenanceRate;
	baseMaintenanceRate = maintenanceRate;
}

int InstallationObjectImplementation::getBaseMaintenanceRate() {
	// server/zone/objects/installation/InstallationObject.idl(230):  		return baseMaintenanceRate;
	return baseMaintenanceRate;
}

int InstallationObjectImplementation::getRedeedCost() {
	// server/zone/objects/installation/InstallationObject.idl(238):  		return baseMaintenanceRate * 50;
	return baseMaintenanceRate * 50;
}

bool InstallationObjectImplementation::isInstallationObject() {
	// server/zone/objects/installation/InstallationObject.idl(242):  		return true;
	return true;
}

/*
 *	InstallationObjectAdapter
 */

InstallationObjectAdapter::InstallationObjectAdapter(InstallationObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* InstallationObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		destroyObjectFromDatabase(inv->getBooleanParameter());
		break;
	case 8:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 9:
		handleStructureStatus((PlayerCreature*) inv->getObjectParameter());
		break;
	case 10:
		handleStructureManageMaintenance((PlayerCreature*) inv->getObjectParameter());
		break;
	case 11:
		handleSetObjectName((PlayerCreature*) inv->getObjectParameter());
		break;
	case 12:
		handleStructureDestroy((PlayerCreature*) inv->getObjectParameter());
		break;
	case 13:
		resp->insertBoolean(isOnAdminList((CreatureObject*) inv->getObjectParameter()));
		break;
	case 14:
		sendPermissionListTo((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendPermissionListTo__PlayerCreature_String_));
		break;
	case 15:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 16:
		setLotSize(inv->getSignedIntParameter());
		break;
	case 17:
		resp->insertSignedInt(getLotSize());
		break;
	case 18:
		setDeedObjectID(inv->getUnsignedLongParameter());
		break;
	case 19:
		resp->insertLong(getDeedObjectID());
		break;
	case 20:
		setOwnerObjectID(inv->getUnsignedLongParameter());
		break;
	case 21:
		resp->insertLong(getOwnerObjectID());
		break;
	case 22:
		setMaintenancePool(inv->getUnsignedIntParameter());
		break;
	case 23:
		resp->insertInt(getMaintenancePool());
		break;
	case 24:
		setPowerPool(inv->getUnsignedIntParameter());
		break;
	case 25:
		resp->insertInt(getPowerPool());
		break;
	case 26:
		addMaintenance(inv->getFloatParameter());
		break;
	case 27:
		resp->insertSignedInt(getBasePowerRate());
		break;
	case 28:
		setBasePowerRate(inv->getSignedIntParameter());
		break;
	case 29:
		setBaseMaintenanceRate(inv->getSignedIntParameter());
		break;
	case 30:
		resp->insertSignedInt(getBaseMaintenanceRate());
		break;
	case 31:
		resp->insertSignedInt(getRedeedCost());
		break;
	case 32:
		resp->insertBoolean(isInstallationObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

void InstallationObjectAdapter::initializeTransientMembers() {
	((InstallationObjectImplementation*) impl)->initializeTransientMembers();
}

void InstallationObjectAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	((InstallationObjectImplementation*) impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

int InstallationObjectAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((InstallationObjectImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void InstallationObjectAdapter::handleStructureStatus(PlayerCreature* player) {
	((InstallationObjectImplementation*) impl)->handleStructureStatus(player);
}

void InstallationObjectAdapter::handleStructureManageMaintenance(PlayerCreature* player) {
	((InstallationObjectImplementation*) impl)->handleStructureManageMaintenance(player);
}

void InstallationObjectAdapter::handleSetObjectName(PlayerCreature* player) {
	((InstallationObjectImplementation*) impl)->handleSetObjectName(player);
}

void InstallationObjectAdapter::handleStructureDestroy(PlayerCreature* player) {
	((InstallationObjectImplementation*) impl)->handleStructureDestroy(player);
}

bool InstallationObjectAdapter::isOnAdminList(CreatureObject* creature) {
	return ((InstallationObjectImplementation*) impl)->isOnAdminList(creature);
}

void InstallationObjectAdapter::sendPermissionListTo(PlayerCreature* player, const String& listName) {
	((InstallationObjectImplementation*) impl)->sendPermissionListTo(player, listName);
}

void InstallationObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((InstallationObjectImplementation*) impl)->sendBaselinesTo(player);
}

void InstallationObjectAdapter::setLotSize(int lotsize) {
	((InstallationObjectImplementation*) impl)->setLotSize(lotsize);
}

int InstallationObjectAdapter::getLotSize() {
	return ((InstallationObjectImplementation*) impl)->getLotSize();
}

void InstallationObjectAdapter::setDeedObjectID(unsigned long long deedid) {
	((InstallationObjectImplementation*) impl)->setDeedObjectID(deedid);
}

unsigned long long InstallationObjectAdapter::getDeedObjectID() {
	return ((InstallationObjectImplementation*) impl)->getDeedObjectID();
}

void InstallationObjectAdapter::setOwnerObjectID(unsigned long long ownerID) {
	((InstallationObjectImplementation*) impl)->setOwnerObjectID(ownerID);
}

unsigned long long InstallationObjectAdapter::getOwnerObjectID() {
	return ((InstallationObjectImplementation*) impl)->getOwnerObjectID();
}

void InstallationObjectAdapter::setMaintenancePool(unsigned int maintenance) {
	((InstallationObjectImplementation*) impl)->setMaintenancePool(maintenance);
}

unsigned int InstallationObjectAdapter::getMaintenancePool() {
	return ((InstallationObjectImplementation*) impl)->getMaintenancePool();
}

void InstallationObjectAdapter::setPowerPool(unsigned int power) {
	((InstallationObjectImplementation*) impl)->setPowerPool(power);
}

unsigned int InstallationObjectAdapter::getPowerPool() {
	return ((InstallationObjectImplementation*) impl)->getPowerPool();
}

void InstallationObjectAdapter::addMaintenance(float maint) {
	((InstallationObjectImplementation*) impl)->addMaintenance(maint);
}

int InstallationObjectAdapter::getBasePowerRate() {
	return ((InstallationObjectImplementation*) impl)->getBasePowerRate();
}

void InstallationObjectAdapter::setBasePowerRate(int powerRate) {
	((InstallationObjectImplementation*) impl)->setBasePowerRate(powerRate);
}

void InstallationObjectAdapter::setBaseMaintenanceRate(int maintenanceRate) {
	((InstallationObjectImplementation*) impl)->setBaseMaintenanceRate(maintenanceRate);
}

int InstallationObjectAdapter::getBaseMaintenanceRate() {
	return ((InstallationObjectImplementation*) impl)->getBaseMaintenanceRate();
}

int InstallationObjectAdapter::getRedeedCost() {
	return ((InstallationObjectImplementation*) impl)->getRedeedCost();
}

bool InstallationObjectAdapter::isInstallationObject() {
	return ((InstallationObjectImplementation*) impl)->isInstallationObject();
}

/*
 *	InstallationObjectHelper
 */

InstallationObjectHelper* InstallationObjectHelper::staticInitializer = InstallationObjectHelper::instance();

InstallationObjectHelper::InstallationObjectHelper() {
	className = "InstallationObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void InstallationObjectHelper::finalizeHelper() {
	InstallationObjectHelper::finalize();
}

DistributedObject* InstallationObjectHelper::instantiateObject() {
	return new InstallationObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* InstallationObjectHelper::instantiateServant() {
	return new InstallationObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* InstallationObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new InstallationObjectAdapter((InstallationObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

