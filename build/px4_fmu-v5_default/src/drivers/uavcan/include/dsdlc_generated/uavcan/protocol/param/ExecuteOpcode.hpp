/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/lws/Firmware/src/drivers/uavcan/libuavcan/dsdl/uavcan/protocol/param/10.ExecuteOpcode.uavcan
 */

#ifndef UAVCAN_PROTOCOL_PARAM_EXECUTEOPCODE_HPP_INCLUDED
#define UAVCAN_PROTOCOL_PARAM_EXECUTEOPCODE_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Service to control the node configuration.
#

#
# SAVE operation instructs the remote node to save the current configuration parameters into a non-volatile
# storage. The node may require a restart in order for some changes to take effect.
#
# ERASE operation instructs the remote node to clear its configuration storage and reinitialize the parameters
# with their default values. The node may require a restart in order for some changes to take effect.
#
# Other opcodes may be added in the future (for example, an opcode for switching between multiple configurations).
#
uint8 OPCODE_SAVE  = 0  # Save all parameters to non-volatile storage.
uint8 OPCODE_ERASE = 1  # Clear the non-volatile storage; some changes may take effect only after reboot.
uint8 opcode

#
# Reserved, keep zero.
#
int48 argument

---

#
# If 'ok' (the field below) is true, this value is not used and must be kept zero.
# If 'ok' is false, this value may contain error code. Error code constants may be defined in the future.
#
int48 argument

#
# True if the operation has been performed successfully, false otherwise.
#
bool ok
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.param.ExecuteOpcode
saturated uint8 opcode
saturated int48 argument
---
saturated int48 argument
saturated bool ok
******************************************************************************/

#undef opcode
#undef argument
#undef OPCODE_SAVE
#undef OPCODE_ERASE
#undef argument
#undef ok

namespace uavcan
{
namespace protocol
{
namespace param
{

struct UAVCAN_EXPORT ExecuteOpcode_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > OPCODE_SAVE;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > OPCODE_ERASE;
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > opcode;
            typedef ::uavcan::IntegerSpec< 48, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > argument;
        };

        enum
        {
            MinBitLen
                = FieldTypes::opcode::MinBitLen
                + FieldTypes::argument::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::opcode::MaxBitLen
                + FieldTypes::argument::MaxBitLen
        };

        // Constants
        static const typename ::uavcan::StorageType< typename ConstantTypes::OPCODE_SAVE >::Type OPCODE_SAVE; // 0
        static const typename ::uavcan::StorageType< typename ConstantTypes::OPCODE_ERASE >::Type OPCODE_ERASE; // 1

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::opcode >::Type opcode;
        typename ::uavcan::StorageType< typename FieldTypes::argument >::Type argument;

        Request_()
            : opcode()
            , argument()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<56 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 48, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > argument;
            typedef ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ok;
        };

        enum
        {
            MinBitLen
                = FieldTypes::argument::MinBitLen
                + FieldTypes::ok::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::argument::MaxBitLen
                + FieldTypes::ok::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::argument >::Type argument;
        typename ::uavcan::StorageType< typename FieldTypes::ok >::Type ok;

        Response_()
            : argument()
            , ok()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<49 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 10 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.param.ExecuteOpcode";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    ExecuteOpcode_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool ExecuteOpcode_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        opcode == rhs.opcode &&
        argument == rhs.argument;
}

template <int _tmpl>
bool ExecuteOpcode_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(opcode, rhs.opcode) &&
        ::uavcan::areClose(argument, rhs.argument);
}

template <int _tmpl>
int ExecuteOpcode_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::opcode::encode(self.opcode, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::argument::encode(self.argument, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int ExecuteOpcode_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::opcode::decode(self.opcode, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::argument::decode(self.argument, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool ExecuteOpcode_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        argument == rhs.argument &&
        ok == rhs.ok;
}

template <int _tmpl>
bool ExecuteOpcode_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(argument, rhs.argument) &&
        ::uavcan::areClose(ok, rhs.ok);
}

template <int _tmpl>
int ExecuteOpcode_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::argument::encode(self.argument, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ok::encode(self.ok, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int ExecuteOpcode_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::argument::decode(self.argument, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ok::decode(self.ok, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature ExecuteOpcode_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x3B131AC5EB69D2CDULL);

    Request::FieldTypes::opcode::extendDataTypeSignature(signature);
    Request::FieldTypes::argument::extendDataTypeSignature(signature);

    Response::FieldTypes::argument::extendDataTypeSignature(signature);
    Response::FieldTypes::ok::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename ExecuteOpcode_::Request_<_tmpl>::ConstantTypes::OPCODE_SAVE >::Type
    ExecuteOpcode_::Request_<_tmpl>::OPCODE_SAVE = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename ExecuteOpcode_::Request_<_tmpl>::ConstantTypes::OPCODE_ERASE >::Type
    ExecuteOpcode_::Request_<_tmpl>::OPCODE_ERASE = 1U; // 1

/*
 * Final typedef
 */
typedef ExecuteOpcode_ ExecuteOpcode;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::param::ExecuteOpcode > _uavcan_gdtr_registrator_ExecuteOpcode;

}

} // Namespace param
} // Namespace protocol
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::param::ExecuteOpcode::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::param::ExecuteOpcode::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::param::ExecuteOpcode::Request >::stream(Stream& s, ::uavcan::protocol::param::ExecuteOpcode::Request::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "opcode: ";
    YamlStreamer< ::uavcan::protocol::param::ExecuteOpcode::Request::FieldTypes::opcode >::stream(s, obj.opcode, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "argument: ";
    YamlStreamer< ::uavcan::protocol::param::ExecuteOpcode::Request::FieldTypes::argument >::stream(s, obj.argument, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::param::ExecuteOpcode::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::param::ExecuteOpcode::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::param::ExecuteOpcode::Response >::stream(Stream& s, ::uavcan::protocol::param::ExecuteOpcode::Response::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "argument: ";
    YamlStreamer< ::uavcan::protocol::param::ExecuteOpcode::Response::FieldTypes::argument >::stream(s, obj.argument, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "ok: ";
    YamlStreamer< ::uavcan::protocol::param::ExecuteOpcode::Response::FieldTypes::ok >::stream(s, obj.ok, level + 1);
}

}

namespace uavcan
{
namespace protocol
{
namespace param
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::param::ExecuteOpcode::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::param::ExecuteOpcode::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::param::ExecuteOpcode::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::param::ExecuteOpcode::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace param
} // Namespace protocol
} // Namespace uavcan

#endif // UAVCAN_PROTOCOL_PARAM_EXECUTEOPCODE_HPP_INCLUDED