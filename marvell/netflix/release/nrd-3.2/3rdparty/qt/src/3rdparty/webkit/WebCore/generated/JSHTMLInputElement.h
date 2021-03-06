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

#ifndef JSHTMLInputElement_h
#define JSHTMLInputElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLInputElement;

class JSHTMLInputElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLInputElement(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<HTMLInputElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue type(JSC::ExecState*) const;
    JSC::JSValue selectionStart(JSC::ExecState*) const;
    void setSelectionStart(JSC::ExecState*, JSC::JSValue);
    JSC::JSValue selectionEnd(JSC::ExecState*) const;
    void setSelectionEnd(JSC::ExecState*, JSC::JSValue);

    // Custom functions
    JSC::JSValue setSelectionRange(JSC::ExecState*, const JSC::ArgList&);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSHTMLInputElementPrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
    JSHTMLInputElementPrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionStepUp(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionStepDown(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionCheckValidity(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionSetCustomValidity(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionSelect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionClick(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsHTMLInputElementPrototypeFunctionSetSelectionRange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
// Attributes

JSC::JSValue jsHTMLInputElementDefaultValue(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementDefaultValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementDefaultChecked(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementDefaultChecked(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementForm(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLInputElementFormNoValidate(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementFormNoValidate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementValidity(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLInputElementAccept(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementAccept(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementAccessKey(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementAccessKey(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementAlign(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementAlt(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementAlt(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementChecked(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementChecked(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementDisabled(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementDisabled(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementAutofocus(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementAutofocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementMax(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementMax(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementMaxLength(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementMaxLength(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementMin(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementMin(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementMultiple(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementMultiple(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementPattern(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementPattern(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementPlaceholder(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementPlaceholder(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementReadOnly(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementReadOnly(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementRequired(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementRequired(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementSize(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementSize(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementSrc(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementStep(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementStep(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementType(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementType(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementUseMap(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementUseMap(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementValue(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementValueAsDate(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementValueAsDate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementValueAsNumber(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementValueAsNumber(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementWillValidate(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLInputElementValidationMessage(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLInputElementIndeterminate(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementIndeterminate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementSelectionStart(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementSelectionStart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementSelectionEnd(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSHTMLInputElementSelectionEnd(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLInputElementFiles(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsHTMLInputElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
