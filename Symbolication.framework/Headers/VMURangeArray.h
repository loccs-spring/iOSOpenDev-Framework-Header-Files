/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/NSCopying.h>
#import <Foundation/NSObject.h>


@interface VMURangeArray : NSObject <NSCopying> {
	unsigned _count;	// 4 = 0x4
	VMURange *_ranges;	// 8 = 0x8
	unsigned _max;	// 12 = 0xc
	BOOL _sorted;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x334cc; converted property
@property(readonly, assign) VMURange *ranges;	// G=0x334b8; converted property
- (id)init;	// 0x335a8
- (id)initWithRanges:(const VMURange *)ranges count:(unsigned)count;	// 0x34220
- (void)dealloc;	// 0x341c0
- (id)copyWithZone:(NSZone *)zone;	// 0x34148
- (void)setCapacity:(unsigned)capacity;	// 0x340f0
- (void)sort;	// 0x34080
- (void)addRange:(VMURange)range;	// 0x33f28
- (void)addRanges:(id)ranges;	// 0x33ea8
- (VMURange)rangeAtIndex:(unsigned)index;	// 0x32eec
- (unsigned)indexForLocation:(unsigned long long)location;	// 0x32f40
- (VMURange)rangeForLocation:(unsigned long long)location;	// 0x33e54
- (void)insertRange:(VMURange)range atIndex:(unsigned)index;	// 0x33e20
- (void)removeRangeAtIndex:(unsigned)index;	// 0x33e18
- (void)removeAllRanges;	// 0x330ac
- (BOOL)intersectsLocation:(unsigned long long)location;	// 0x330c4
- (BOOL)intersectsRange:(VMURange)range;	// 0x33c88
- (VMURange)subrangeNotExcludedBySelfForRange:(VMURange)range;	// 0x33af0
- (VMURange)largestSubrangeNotExcludedBySelfForRange:(VMURange)range andLargerThan:(unsigned long long)than startIndex:(unsigned *)index;	// 0x33728
- (VMURange)range;	// 0x33224
- (VMURange)largestRange;	// 0x33384
- (unsigned long long)sumLengths;	// 0x3344c
// converted property getter: - (VMURange *)ranges;	// 0x334b8
// converted property getter: - (unsigned)count;	// 0x334cc
- (id)description;	// 0x33658
@end
