/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtCore.h"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qmetatype.sip"
#include <qmetatype.h>
#line 39 "sipQtCoreQMetaType.cpp"



extern "C" {static PyObject *meth_QMetaType_type(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_type(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "s", &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QMetaType::type(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_type, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMetaType_typeName(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_typeName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            const char *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QMetaType::typeName(a0);
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_typeName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMetaType_isRegistered(PyObject *, PyObject *);}
static PyObject *meth_QMetaType_isRegistered(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QMetaType::isRegistered(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaType, sipName_isRegistered, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMetaType(void *, const sipTypeDef *);}
static void *cast_QMetaType(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMetaType)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMetaType(void *, int);}
static void release_QMetaType(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMetaType *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QMetaType(void *, SIP_SSIZE_T, const void *);}
static void assign_QMetaType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMetaType *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMetaType *>(sipSrc);
}


extern "C" {static void *array_QMetaType(SIP_SSIZE_T);}
static void *array_QMetaType(SIP_SSIZE_T sipNrElem)
{
    return new QMetaType[sipNrElem];
}


extern "C" {static void *copy_QMetaType(const void *, SIP_SSIZE_T);}
static void *copy_QMetaType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMetaType(reinterpret_cast<const QMetaType *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMetaType(sipSimpleWrapper *);}
static void dealloc_QMetaType(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMetaType(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QMetaType(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QMetaType(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMetaType *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMetaType();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QMetaType * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMetaType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMetaType(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QMetaType[] = {
    {SIP_MLNAME_CAST(sipName_isRegistered), meth_QMetaType_isRegistered, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_type), meth_QMetaType_type, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_typeName), meth_QMetaType_typeName, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QMetaType[] = {
    {sipName_Bool, QMetaType::Bool, 127},
    {sipName_Char, QMetaType::Char, 127},
    {sipName_Double, QMetaType::Double, 127},
    {sipName_FirstGuiType, QMetaType::FirstGuiType, 127},
    {sipName_Float, QMetaType::Float, 127},
    {sipName_Int, QMetaType::Int, 127},
    {sipName_LastCoreType, QMetaType::LastCoreType, 127},
    {sipName_Long, QMetaType::Long, 127},
    {sipName_LongLong, QMetaType::LongLong, 127},
    {sipName_QBitArray, QMetaType::QBitArray, 127},
    {sipName_QBitmap, QMetaType::QBitmap, 127},
    {sipName_QBrush, QMetaType::QBrush, 127},
    {sipName_QByteArray, QMetaType::QByteArray, 127},
    {sipName_QChar, QMetaType::QChar, 127},
    {sipName_QColor, QMetaType::QColor, 127},
    {sipName_QCursor, QMetaType::QCursor, 127},
    {sipName_QDate, QMetaType::QDate, 127},
    {sipName_QDateTime, QMetaType::QDateTime, 127},
    {sipName_QEasingCurve, QMetaType::QEasingCurve, 127},
    {sipName_QFont, QMetaType::QFont, 127},
    {sipName_QIcon, QMetaType::QIcon, 127},
    {sipName_QImage, QMetaType::QImage, 127},
    {sipName_QKeySequence, QMetaType::QKeySequence, 127},
    {sipName_QLine, QMetaType::QLine, 127},
    {sipName_QLineF, QMetaType::QLineF, 127},
    {sipName_QLocale, QMetaType::QLocale, 127},
    {sipName_QMatrix, QMetaType::QMatrix, 127},
    {sipName_QMatrix4x4, QMetaType::QMatrix4x4, 127},
    {sipName_QObjectStar, QMetaType::QObjectStar, 127},
    {sipName_QPalette, QMetaType::QPalette, 127},
    {sipName_QPen, QMetaType::QPen, 127},
    {sipName_QPixmap, QMetaType::QPixmap, 127},
    {sipName_QPoint, QMetaType::QPoint, 127},
    {sipName_QPointF, QMetaType::QPointF, 127},
    {sipName_QPolygon, QMetaType::QPolygon, 127},
    {sipName_QQuaternion, QMetaType::QQuaternion, 127},
    {sipName_QRect, QMetaType::QRect, 127},
    {sipName_QRectF, QMetaType::QRectF, 127},
    {sipName_QRegExp, QMetaType::QRegExp, 127},
    {sipName_QRegion, QMetaType::QRegion, 127},
    {sipName_QSize, QMetaType::QSize, 127},
    {sipName_QSizeF, QMetaType::QSizeF, 127},
    {sipName_QSizePolicy, QMetaType::QSizePolicy, 127},
    {sipName_QString, QMetaType::QString, 127},
    {sipName_QStringList, QMetaType::QStringList, 127},
    {sipName_QTextFormat, QMetaType::QTextFormat, 127},
    {sipName_QTextLength, QMetaType::QTextLength, 127},
    {sipName_QTime, QMetaType::QTime, 127},
    {sipName_QTransform, QMetaType::QTransform, 127},
    {sipName_QUrl, QMetaType::QUrl, 127},
    {sipName_QVariant, QMetaType::QVariant, 127},
    {sipName_QVariantHash, QMetaType::QVariantHash, 127},
    {sipName_QVariantList, QMetaType::QVariantList, 127},
    {sipName_QVariantMap, QMetaType::QVariantMap, 127},
    {sipName_QVector2D, QMetaType::QVector2D, 127},
    {sipName_QVector3D, QMetaType::QVector3D, 127},
    {sipName_QVector4D, QMetaType::QVector4D, 127},
    {sipName_QWidgetStar, QMetaType::QWidgetStar, 127},
    {sipName_Short, QMetaType::Short, 127},
    {sipName_UChar, QMetaType::UChar, 127},
    {sipName_UInt, QMetaType::UInt, 127},
    {sipName_ULong, QMetaType::ULong, 127},
    {sipName_ULongLong, QMetaType::ULongLong, 127},
    {sipName_UShort, QMetaType::UShort, 127},
    {sipName_User, QMetaType::User, 127},
    {sipName_Void, QMetaType::Void, 127},
    {sipName_VoidStar, QMetaType::VoidStar, 127},
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QMetaType = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMetaType,
        {0}
    },
    {
        sipNameNr_QMetaType,
        {0, 0, 1},
        3, methods_QMetaType,
        67, enummembers_QMetaType,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QMetaType,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QMetaType,
    assign_QMetaType,
    array_QMetaType,
    copy_QMetaType,
    release_QMetaType,
    cast_QMetaType,
    0,
    0,
    0
},
    0,
    0,
    0
};