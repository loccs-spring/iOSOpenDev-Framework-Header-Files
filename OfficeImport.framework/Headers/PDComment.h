/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDComment : XXUnknownSuperclass {
@private
	CGPoint mPosition;	// 4 = 0x4
	NSString *mText;	// 12 = 0xc
	unsigned mAuthorId;	// 16 = 0x10
	NSString *mDate;	// 20 = 0x14
	unsigned mIndex;	// 24 = 0x18
}
@property(assign) CGPoint position;	// G=0x21918d; S=0x2191a5; converted property
@property(retain) id text;	// G=0x2191b9; S=0x2192a9; converted property
@property(assign) unsigned authorId;	// G=0x2191c9; S=0x2191d9; converted property
@property(retain) id date;	// G=0x2191e9; S=0x219269; converted property
@property(assign) unsigned index;	// G=0x2191f9; S=0x219209; converted property
- (id)init;	// 0x219219
- (void)dealloc;	// 0x2192ed
// converted property getter: - (CGPoint)position;	// 0x21918d
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x2191a5
// converted property getter: - (id)text;	// 0x2191b9
// converted property setter: - (void)setText:(id)text;	// 0x2192a9
// converted property getter: - (unsigned)authorId;	// 0x2191c9
// converted property setter: - (void)setAuthorId:(unsigned)anId;	// 0x2191d9
// converted property getter: - (id)date;	// 0x2191e9
// converted property setter: - (void)setDate:(id)date;	// 0x219269
// converted property getter: - (unsigned)index;	// 0x2191f9
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x219209
@end