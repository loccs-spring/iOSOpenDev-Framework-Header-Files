/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSCoding.h>
#import <StoreServices/NSCopying.h>
#import <StoreServices/XXUnknownSuperclass.h>

@class NSArray, NSString, NSData;

@interface SSPlayInfoRequestContext : XXUnknownSuperclass <SSCoding, NSCopying> {
@private
	NSString *_playerGUID;	// 4 = 0x4
	NSData *_sic;	// 8 = 0x8
	NSArray *_sinfs;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *sinfs;	// G=0x2f68d; S=0x2f69d; @synthesize=_sinfs
@property(copy, nonatomic) NSData *SICData;	// G=0x2f659; S=0x2f669; @synthesize=_sic
@property(copy, nonatomic) NSString *playerGUID;	// G=0x2f625; S=0x2f635; @synthesize=_playerGUID
// declared property setter: - (void)setSinfs:(id)sinfs;	// 0x2f69d
// declared property getter: - (id)sinfs;	// 0x2f68d
// declared property setter: - (void)setSICData:(id)data;	// 0x2f669
// declared property getter: - (id)SICData;	// 0x2f659
// declared property setter: - (void)setPlayerGUID:(id)guid;	// 0x2f635
// declared property getter: - (id)playerGUID;	// 0x2f625
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x2f5e9
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x2f51d
- (void *)copyXPCEncoding;	// 0x2f4e9
- (id)copyPropertyListEncoding;	// 0x2f445
- (id)copyWithZone:(NSZone *)zone;	// 0x2f3a1
- (void)dealloc;	// 0x2f32d
@end