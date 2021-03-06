/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSWorkerContext_h
#define JSWorkerContext_h

#if ENABLE(WORKERS)

#include "JSWorkerContextBase.h"

namespace WebCore {

class WorkerContext;

class JSWorkerContext : public JSWorkerContextBase {
    typedef JSWorkerContextBase Base;
public:
    JSWorkerContext(NonNullPassRefPtr<JSC::Structure>, PassRefPtr<WorkerContext>);
    virtual ~JSWorkerContext();
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    bool getOwnPropertySlotDelegate(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    bool getOwnPropertyDescriptorDelegate(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }

    virtual void markChildren(JSC::MarkStack&);


    // Custom attributes
    JSC::JSValue messageChannel(JSC::ExecState*) const;
    JSC::JSValue eventSource(JSC::ExecState*) const;
    JSC::JSValue xmlHttpRequest(JSC::ExecState*) const;

    // Custom functions
    JSC::JSValue importScripts(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue setTimeout(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue setInterval(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue addEventListener(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue removeEventListener(JSC::ExecState*, const JSC::ArgList&);
protected:
    static const unsigned StructureFlags = JSC::OverridesMarkChildren | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSWorkerContextPrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    void* operator new(size_t, JSC::JSGlobalData*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
    JSWorkerContextPrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesMarkChildren | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::JSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionClose(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionImportScripts(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionSetTimeout(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionClearTimeout(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionSetInterval(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionClearInterval(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionAddEventListener(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionRemoveEventListener(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionDispatchEvent(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
// Attributes

JSC::JSValue jsWorkerContextSelf(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWorkerContextSelf(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerContextLocation(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWorkerContextLocation(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerContextOnerror(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWorkerContextOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerContextNavigator(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWorkerContextNavigator(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerContextMessageEventConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWorkerContextMessageEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerContextWorkerLocationConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWorkerContextWorkerLocationConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerContextMessageChannelConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWorkerContextMessageChannelConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerContextEventSourceConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWorkerContextEventSourceConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWorkerContextXMLHttpRequestConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSWorkerContextXMLHttpRequestConstructor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);

} // namespace WebCore

#endif // ENABLE(WORKERS)

#endif
