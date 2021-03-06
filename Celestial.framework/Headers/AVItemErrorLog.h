/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/XXUnknownSuperclass.h>
#import <Celestial/NSCopying.h>

@class NSArray, AVItemErrorLogInternal;

@interface AVItemErrorLog : XXUnknownSuperclass <NSCopying> {
@private
	AVItemErrorLogInternal *_playerItemErrorLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0xa5255; 
- (id)init;	// 0xa51b1
- (id)initWithLogArray:(id)logArray;	// 0xa5075
- (id)description;	// 0xa5529
- (id)copyWithZone:(NSZone *)zone;	// 0xa50d5
- (void)finalize;	// 0xa54e5
- (void)dealloc;	// 0xa5475
- (id)extendedLogData;	// 0xa53e9
- (unsigned)extendedLogDataStringEncoding;	// 0xa5071
// declared property getter: - (id)events;	// 0xa5255
@end
