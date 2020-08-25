// Generated by Apple Swift version 5.2.4 (swiftlang-1103.0.32.9 clang-1103.0.32.53)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SSLCommerzSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC13SSLCommerzSDK21AdditionalInformation")
@interface AdditionalInformation : NSObject
@property (nonatomic, copy) NSString * _Nullable paramA;
@property (nonatomic, copy) NSString * _Nullable paramB;
@property (nonatomic, copy) NSString * _Nullable paramC;
@property (nonatomic, copy) NSString * _Nullable paramD;
- (nonnull instancetype)initWithParamA:(NSString * _Nullable)paramA paramB:(NSString * _Nullable)paramB paramC:(NSString * _Nullable)paramC paramD:(NSString * _Nullable)paramD OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13SSLCommerzSDK8CartItem")
@interface CartItem : NSObject
@property (nonatomic, copy) NSString * _Nonnull product;
@property (nonatomic, copy) NSString * _Nonnull quantity;
@property (nonatomic, copy) NSString * _Nonnull amount;
- (nonnull instancetype)initWithProduct:(NSString * _Nonnull)product quantity:(NSString * _Nonnull)quantity amount:(NSString * _Nonnull)amount OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13SSLCommerzSDK19CustomerInformation")
@interface CustomerInformation : NSObject
@property (nonatomic, copy) NSString * _Nonnull customerName;
@property (nonatomic, copy) NSString * _Nonnull customerEmail;
@property (nonatomic, copy) NSString * _Nonnull customerAddressOne;
@property (nonatomic, copy) NSString * _Nullable customerAddressTwo;
@property (nonatomic, copy) NSString * _Nonnull customerCity;
@property (nonatomic, copy) NSString * _Nullable customerState;
@property (nonatomic, copy) NSString * _Nonnull customerPostCode;
@property (nonatomic, copy) NSString * _Nonnull customerCountry;
@property (nonatomic, copy) NSString * _Nonnull customerPhone;
@property (nonatomic, copy) NSString * _Nullable customerFax;
- (nonnull instancetype)initWithCustomerName:(NSString * _Nonnull)customerName customerEmail:(NSString * _Nonnull)customerEmail customerAddressOne:(NSString * _Nonnull)customerAddressOne customerCity:(NSString * _Nonnull)customerCity customerPostCode:(NSString * _Nonnull)customerPostCode customerCountry:(NSString * _Nonnull)customerCountry customerPhone:(NSString * _Nonnull)customerPhone OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum EMIOptions : NSInteger;
@class NSNumber;

SWIFT_CLASS("_TtC13SSLCommerzSDK14EMIInformation")
@interface EMIInformation : NSObject
@property (nonatomic) enum EMIOptions emiOption;
@property (nonatomic, strong) NSNumber * _Nullable emiMaximumInstallmentOption;
@property (nonatomic, strong) NSNumber * _Nullable emiSelectedInstallmentOption;
- (nonnull instancetype)initWithEmiOption:(enum EMIOptions)emiOption OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, EMIOptions, open) {
  EMIOptionsHasEMI = 1,
  EMIOptionsNoEMI = 0,
};


SWIFT_CLASS("_TtC13SSLCommerzSDK22IntegrationInformation")
@interface IntegrationInformation : NSObject
@property (nonatomic, copy) NSString * _Nonnull storeID;
@property (nonatomic, copy) NSString * _Nonnull storePassword;
@property (nonatomic) double totalAmount;
@property (nonatomic, copy) NSString * _Nonnull currency;
@property (nonatomic, copy) NSString * _Nonnull transactionId;
@property (nonatomic, copy) NSString * _Nonnull productCategory;
@property (nonatomic, copy) NSString * _Nullable ipnURL;
@property (nonatomic, copy) NSString * _Nullable multiCardName;
@property (nonatomic, copy) NSString * _Nullable allowedBIN;
- (nonnull instancetype)initWithStoreID:(NSString * _Nonnull)storeID storePassword:(NSString * _Nonnull)storePassword totalAmount:(double)totalAmount currency:(NSString * _Nonnull)currency transactionId:(NSString * _Nonnull)transactionId productCategory:(NSString * _Nonnull)productCategory OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class ProductProfile;

SWIFT_CLASS("_TtC13SSLCommerzSDK18ProductInformation")
@interface ProductInformation : NSObject
@property (nonatomic, copy) NSString * _Nonnull productName;
@property (nonatomic, copy) NSString * _Nonnull productCategory;
@property (nonatomic, strong) ProductProfile * _Nonnull productProfile;
@property (nonatomic, copy) NSArray<CartItem *> * _Nullable cart;
@property (nonatomic, strong) NSNumber * _Nullable productAmount;
@property (nonatomic, strong) NSNumber * _Nullable vat;
@property (nonatomic, strong) NSNumber * _Nullable discountAmount;
@property (nonatomic, strong) NSNumber * _Nullable convenienceFee;
- (nonnull instancetype)initWithProductName:(NSString * _Nonnull)productName productCategory:(NSString * _Nonnull)productCategory productProfile:(ProductProfile * _Nonnull)productProfile OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13SSLCommerzSDK14ProductProfile")
@interface ProductProfile : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull productProfile;
@property (nonatomic, readonly, copy) NSString * _Nullable hoursTillDeparture;
@property (nonatomic, readonly, copy) NSString * _Nullable flightType;
@property (nonatomic, readonly, copy) NSString * _Nullable pnr;
@property (nonatomic, readonly, copy) NSString * _Nullable journeyFromTo;
@property (nonatomic, readonly, copy) NSString * _Nullable thirdPartyBooking;
@property (nonatomic, readonly, copy) NSString * _Nullable hotelName;
@property (nonatomic, readonly, copy) NSString * _Nullable lengthOfStay;
@property (nonatomic, readonly, copy) NSString * _Nullable checkInTime;
@property (nonatomic, readonly, copy) NSString * _Nullable hotelCity;
@property (nonatomic, readonly, copy) NSString * _Nullable productType;
@property (nonatomic, readonly, copy) NSString * _Nullable topupNumber;
@property (nonatomic, readonly, copy) NSString * _Nullable countryTopup;
- (nonnull instancetype)initWithProductProfile:(NSString * _Nonnull)productProfile OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithProductProfile:(NSString * _Nonnull)productProfile hoursTillDeparture:(NSString * _Nonnull)hoursTillDeparture flightType:(NSString * _Nonnull)flightType pnr:(NSString * _Nonnull)pnr journeyFromTo:(NSString * _Nonnull)journeyFromTo thirdPartyBooking:(NSString * _Nonnull)thirdPartyBooking OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithProductProfile:(NSString * _Nonnull)productProfile hotelName:(NSString * _Nonnull)hotelName lengthOfStay:(NSString * _Nonnull)lengthOfStay checkInTime:(NSString * _Nonnull)checkInTime hotelCity:(NSString * _Nonnull)hotelCity OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithProductProfile:(NSString * _Nonnull)productProfile productType:(NSString * _Nonnull)productType topupNumber:(NSString * _Nonnull)topupNumber countryTopup:(NSString * _Nonnull)countryTopup OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class ShipmentInformation;
@protocol SSLCommerzDelegate;
@class UIViewController;

SWIFT_CLASS("_TtC13SSLCommerzSDK10SSLCommerz")
@interface SSLCommerz : NSObject
@property (nonatomic, strong) IntegrationInformation * _Nonnull integrationInformation;
@property (nonatomic, strong) EMIInformation * _Nullable emiInformation;
@property (nonatomic, strong) CustomerInformation * _Nullable customerInformation;
@property (nonatomic, strong) ShipmentInformation * _Nullable shipmentInformation;
@property (nonatomic, strong) ProductInformation * _Nullable productInformation;
@property (nonatomic, strong) AdditionalInformation * _Nullable additionalInformation;
@property (nonatomic, strong) id <SSLCommerzDelegate> _Nullable delegate;
- (nonnull instancetype)initWithIntegrationInformation:(IntegrationInformation * _Nonnull)integrationInformation OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithIntegrationInformation:(IntegrationInformation * _Nonnull)integrationInformation emiInformation:(EMIInformation * _Nullable)emiInformation customerInformation:(CustomerInformation * _Nullable)customerInformation shipmentInformation:(ShipmentInformation * _Nullable)shipmentInformation productInformation:(ProductInformation * _Nullable)productInformation additionalInformation:(AdditionalInformation * _Nullable)additionalInformation OBJC_DESIGNATED_INITIALIZER;
- (void)startIn:(UIViewController * _Nonnull)viewController shouldRunInTestMode:(BOOL)isTestMode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class TransactionDetails;

SWIFT_PROTOCOL("_TtP13SSLCommerzSDK18SSLCommerzDelegate_")
@protocol SSLCommerzDelegate
- (void)transactionCompletedWithTransactionData:(TransactionDetails * _Nullable)transactionData;
@end


SWIFT_CLASS("_TtC13SSLCommerzSDK19ShipmentInformation")
@interface ShipmentInformation : NSObject
@property (nonatomic, copy) NSString * _Nonnull shippingMethod;
@property (nonatomic) NSInteger numberOfItem;
@property (nonatomic, copy) NSString * _Nullable shippingName;
@property (nonatomic, copy) NSString * _Nullable shippingAddressOne;
@property (nonatomic, copy) NSString * _Nullable shippingAddressTwo;
@property (nonatomic, copy) NSString * _Nullable shippingCity;
@property (nonatomic, copy) NSString * _Nullable shippingState;
@property (nonatomic, copy) NSString * _Nullable shippingPostCode;
@property (nonatomic, copy) NSString * _Nullable shippingCountry;
- (nonnull instancetype)initWithShippingMethod:(NSString * _Nonnull)shippingMethod numberOfItem:(NSInteger)numberOfItem OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithShippingMethod:(NSString * _Nonnull)shippingMethod numberOfItem:(NSInteger)numberOfItem shippingName:(NSString * _Nonnull)shippingName shippingAddressOne:(NSString * _Nonnull)shippingAddressOne shippingAddressTwo:(NSString * _Nonnull)shippingAddressTwo shippingCity:(NSString * _Nonnull)shippingCity shippingPostCode:(NSString * _Nonnull)shippingPostCode shippingCountry:(NSString * _Nonnull)shippingCountry OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13SSLCommerzSDK18TransactionDetails")
@interface TransactionDetails : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable status;
@property (nonatomic, readonly, copy) NSString * _Nullable sessionkey;
@property (nonatomic, readonly, copy) NSString * _Nullable tran_date;
@property (nonatomic, readonly, copy) NSString * _Nullable tran_id;
@property (nonatomic, readonly, copy) NSString * _Nullable val_id;
@property (nonatomic, readonly, copy) NSString * _Nullable amount;
@property (nonatomic, readonly, copy) NSString * _Nullable store_amount;
@property (nonatomic, readonly, copy) NSString * _Nullable bank_tran_id;
@property (nonatomic, readonly, copy) NSString * _Nullable card_type;
@property (nonatomic, readonly, copy) NSString * _Nullable card_no;
@property (nonatomic, readonly, copy) NSString * _Nullable card_issuer;
@property (nonatomic, readonly, copy) NSString * _Nullable card_brand;
@property (nonatomic, readonly, copy) NSString * _Nullable card_issuer_country;
@property (nonatomic, readonly, copy) NSString * _Nullable card_issuer_country_code;
@property (nonatomic, readonly, copy) NSString * _Nullable currency_type;
@property (nonatomic, readonly, copy) NSString * _Nullable currency_amount;
@property (nonatomic, readonly, copy) NSString * _Nullable currency_rate;
@property (nonatomic, readonly, copy) NSString * _Nullable base_fair;
@property (nonatomic, readonly, copy) NSString * _Nullable value_a;
@property (nonatomic, readonly, copy) NSString * _Nullable value_b;
@property (nonatomic, readonly, copy) NSString * _Nullable value_c;
@property (nonatomic, readonly, copy) NSString * _Nullable value_d;
@property (nonatomic, readonly, copy) NSString * _Nullable risk_title;
@property (nonatomic, readonly, copy) NSString * _Nullable risk_level;
@property (nonatomic, readonly, copy) NSString * _Nullable apiConnect;
@property (nonatomic, readonly, copy) NSString * _Nullable validated_on;
@property (nonatomic, readonly, copy) NSString * _Nullable gw_version;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end














@interface UINavigationController (SWIFT_EXTENSION(SSLCommerzSDK))
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@end











#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
