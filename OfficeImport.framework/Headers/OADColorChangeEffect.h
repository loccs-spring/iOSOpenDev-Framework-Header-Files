/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADColorChangeEffect : OADBlipEffect {
@private
	OADColor *mFromColor;	// 8 = 0x8
	OADColor *mToColor;	// 12 = 0xc
}
@property(retain) id fromColor;	// G=0x29d789; S=0x14d8b9; converted property
@property(retain) id toColor;	// G=0x29d799; S=0x14d8f9; converted property
- (id)init;	// 0x14d8a5
- (id)copyWithZone:(NSZone *)zone;	// 0x29dd45
- (void)dealloc;	// 0x14e375
// converted property getter: - (id)fromColor;	// 0x29d789
// converted property setter: - (void)setFromColor:(id)color;	// 0x14d8b9
// converted property getter: - (id)toColor;	// 0x29d799
// converted property setter: - (void)setToColor:(id)color;	// 0x14d8f9
- (void)setStyleColor:(id)color;	// 0x29df61
- (unsigned)hash;	// 0x29df01
- (BOOL)isEqual:(id)equal;	// 0x29de11
@end
