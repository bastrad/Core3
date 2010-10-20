/*
 *	server/zone/objects/tangible/wearables/PsgArmorObject.cpp generated by engine3 IDL compiler 0.61
 */

#include "PsgArmorObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	PsgArmorObjectStub
 */

PsgArmorObject::PsgArmorObject() : WearableObject(DummyConstructorParameter::instance()) {
	PsgArmorObjectImplementation* _implementation = new PsgArmorObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

PsgArmorObject::PsgArmorObject(DummyConstructorParameter* param) : WearableObject(param) {
}

PsgArmorObject::~PsgArmorObject() {
}


void PsgArmorObject::initializeTransientMembers() {
	PsgArmorObjectImplementation* _implementation = (PsgArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

bool PsgArmorObject::isPsgArmorObject() {
	PsgArmorObjectImplementation* _implementation = (PsgArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isPsgArmorObject();
}

void PsgArmorObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	PsgArmorObjectImplementation* _implementation = (PsgArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void PsgArmorObject::updateCraftingValues(ManufactureSchematic* schematic) {
	PsgArmorObjectImplementation* _implementation = (PsgArmorObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(schematic);

		method.executeWithVoidReturn();
	} else
		_implementation->updateCraftingValues(schematic);
}

DistributedObjectServant* PsgArmorObject::_getImplementation() {
	return _impl;}

void PsgArmorObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	PsgArmorObjectImplementation
 */

PsgArmorObjectImplementation::PsgArmorObjectImplementation(DummyConstructorParameter* param) : WearableObjectImplementation(param) {
	_initializeImplementation();
}


PsgArmorObjectImplementation::~PsgArmorObjectImplementation() {
}


void PsgArmorObjectImplementation::finalize() {
}

void PsgArmorObjectImplementation::_initializeImplementation() {
	_setClassHelper(PsgArmorObjectHelper::instance());

	_serializationHelperMethod();
}

void PsgArmorObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (PsgArmorObject*) stub;
	WearableObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PsgArmorObjectImplementation::_getStub() {
	return _this;
}

PsgArmorObjectImplementation::operator const PsgArmorObject*() {
	return _this;
}

void PsgArmorObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PsgArmorObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PsgArmorObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PsgArmorObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PsgArmorObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PsgArmorObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PsgArmorObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PsgArmorObjectImplementation::_serializationHelperMethod() {
	WearableObjectImplementation::_serializationHelperMethod();

	_setClassName("PsgArmorObject");

}

PsgArmorObjectImplementation::PsgArmorObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/wearables/PsgArmorObject.idl(54):  		Logger.setLoggingName("PsgArmorObject");
	Logger::setLoggingName("PsgArmorObject");
}

bool PsgArmorObjectImplementation::isPsgArmorObject() {
	// server/zone/objects/tangible/wearables/PsgArmorObject.idl(60):  		return true;
	return true;
}

/*
 *	PsgArmorObjectAdapter
 */

PsgArmorObjectAdapter::PsgArmorObjectAdapter(PsgArmorObjectImplementation* obj) : WearableObjectAdapter(obj) {
}

Packet* PsgArmorObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertBoolean(isPsgArmorObject());
		break;
	case 8:
		updateCraftingValues((ManufactureSchematic*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PsgArmorObjectAdapter::initializeTransientMembers() {
	((PsgArmorObjectImplementation*) impl)->initializeTransientMembers();
}

bool PsgArmorObjectAdapter::isPsgArmorObject() {
	return ((PsgArmorObjectImplementation*) impl)->isPsgArmorObject();
}

void PsgArmorObjectAdapter::updateCraftingValues(ManufactureSchematic* schematic) {
	((PsgArmorObjectImplementation*) impl)->updateCraftingValues(schematic);
}

/*
 *	PsgArmorObjectHelper
 */

PsgArmorObjectHelper* PsgArmorObjectHelper::staticInitializer = PsgArmorObjectHelper::instance();

PsgArmorObjectHelper::PsgArmorObjectHelper() {
	className = "PsgArmorObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PsgArmorObjectHelper::finalizeHelper() {
	PsgArmorObjectHelper::finalize();
}

DistributedObject* PsgArmorObjectHelper::instantiateObject() {
	return new PsgArmorObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* PsgArmorObjectHelper::instantiateServant() {
	return new PsgArmorObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PsgArmorObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PsgArmorObjectAdapter((PsgArmorObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

