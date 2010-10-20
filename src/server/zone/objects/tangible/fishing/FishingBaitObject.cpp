/*
 *	server/zone/objects/tangible/fishing/FishingBaitObject.cpp generated by engine3 IDL compiler 0.61
 */

#include "FishingBaitObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	FishingBaitObjectStub
 */

FishingBaitObject::FishingBaitObject() : TangibleObject(DummyConstructorParameter::instance()) {
	FishingBaitObjectImplementation* _implementation = new FishingBaitObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

FishingBaitObject::FishingBaitObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

FishingBaitObject::~FishingBaitObject() {
}


void FishingBaitObject::initializeTransientMembers() {
	FishingBaitObjectImplementation* _implementation = (FishingBaitObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

int FishingBaitObject::getFreshness() {
	FishingBaitObjectImplementation* _implementation = (FishingBaitObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getFreshness();
}

void FishingBaitObject::setFreshness(int value) {
	FishingBaitObjectImplementation* _implementation = (FishingBaitObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setFreshness(value);
}

void FishingBaitObject::lessFresh() {
	FishingBaitObjectImplementation* _implementation = (FishingBaitObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		_implementation->lessFresh();
}

int FishingBaitObject::getUseCount() {
	FishingBaitObjectImplementation* _implementation = (FishingBaitObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getUseCount();
}

void FishingBaitObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	FishingBaitObjectImplementation* _implementation = (FishingBaitObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(msg);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->fillAttributeList(msg, object);
}

DistributedObjectServant* FishingBaitObject::_getImplementation() {
	return _impl;}

void FishingBaitObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	FishingBaitObjectImplementation
 */

FishingBaitObjectImplementation::FishingBaitObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


FishingBaitObjectImplementation::~FishingBaitObjectImplementation() {
}


void FishingBaitObjectImplementation::finalize() {
}

void FishingBaitObjectImplementation::_initializeImplementation() {
	_setClassHelper(FishingBaitObjectHelper::instance());

	_serializationHelperMethod();
}

void FishingBaitObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (FishingBaitObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FishingBaitObjectImplementation::_getStub() {
	return _this;
}

FishingBaitObjectImplementation::operator const FishingBaitObject*() {
	return _this;
}

void FishingBaitObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void FishingBaitObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void FishingBaitObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void FishingBaitObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void FishingBaitObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void FishingBaitObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void FishingBaitObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void FishingBaitObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("FishingBaitObject");

	addSerializableVariable("freshness", &freshness);
}

FishingBaitObjectImplementation::FishingBaitObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(58):  		Logger.setLoggingName("FishingBaitObject");
	Logger::setLoggingName("FishingBaitObject");
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(59):  		freshness = 0;
	freshness = 0;
}

void FishingBaitObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(63):  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(65):  		Logger.setLoggingName("FishingBaitObject");
	Logger::setLoggingName("FishingBaitObject");
}

int FishingBaitObjectImplementation::getFreshness() {
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(69):  		return freshness;
	return freshness;
}

void FishingBaitObjectImplementation::setFreshness(int value) {
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(73):  	}
	if ((value > -1) && (value < 10))	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(74):  			freshness = value;
	freshness = value;
}

void FishingBaitObjectImplementation::lessFresh() {
	// server/zone/objects/tangible/fishing/FishingBaitObject.idl(78):  		freshness += 1;
	freshness += 1;
}

/*
 *	FishingBaitObjectAdapter
 */

FishingBaitObjectAdapter::FishingBaitObjectAdapter(FishingBaitObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* FishingBaitObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertSignedInt(getFreshness());
		break;
	case 8:
		setFreshness(inv->getSignedIntParameter());
		break;
	case 9:
		lessFresh();
		break;
	case 10:
		resp->insertSignedInt(getUseCount());
		break;
	case 11:
		fillAttributeList((AttributeListMessage*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void FishingBaitObjectAdapter::initializeTransientMembers() {
	((FishingBaitObjectImplementation*) impl)->initializeTransientMembers();
}

int FishingBaitObjectAdapter::getFreshness() {
	return ((FishingBaitObjectImplementation*) impl)->getFreshness();
}

void FishingBaitObjectAdapter::setFreshness(int value) {
	((FishingBaitObjectImplementation*) impl)->setFreshness(value);
}

void FishingBaitObjectAdapter::lessFresh() {
	((FishingBaitObjectImplementation*) impl)->lessFresh();
}

int FishingBaitObjectAdapter::getUseCount() {
	return ((FishingBaitObjectImplementation*) impl)->getUseCount();
}

void FishingBaitObjectAdapter::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	((FishingBaitObjectImplementation*) impl)->fillAttributeList(msg, object);
}

/*
 *	FishingBaitObjectHelper
 */

FishingBaitObjectHelper* FishingBaitObjectHelper::staticInitializer = FishingBaitObjectHelper::instance();

FishingBaitObjectHelper::FishingBaitObjectHelper() {
	className = "FishingBaitObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void FishingBaitObjectHelper::finalizeHelper() {
	FishingBaitObjectHelper::finalize();
}

DistributedObject* FishingBaitObjectHelper::instantiateObject() {
	return new FishingBaitObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* FishingBaitObjectHelper::instantiateServant() {
	return new FishingBaitObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* FishingBaitObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FishingBaitObjectAdapter((FishingBaitObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

