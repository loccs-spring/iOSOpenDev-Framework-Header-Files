/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {
	NSString *_previousSyncToken;	// 128 = 0x80
	NSString *_nextSyncToken;	// 132 = 0x84
	BOOL _moreToSync;	// 136 = 0x88
	BOOL _wasInvalidSyncToken;	// 137 = 0x89
}
@property(readonly, assign) BOOL wasInvalidSyncToken;	// G=0x2d721; @synthesize=_wasInvalidSyncToken
@property(readonly, assign) BOOL moreToSync;	// G=0x2d711; @synthesize=_moreToSync
@property(readonly, assign) NSString *nextSyncToken;	// G=0x2d701; @synthesize=_nextSyncToken
// declared property getter: - (BOOL)wasInvalidSyncToken;	// 0x2d721
// declared property getter: - (BOOL)moreToSync;	// 0x2d711
// declared property getter: - (id)nextSyncToken;	// 0x2d701
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x2d4ed
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x2d435
- (id)notFoundHREFs;	// 0x2d2d9
- (id)requestBody;	// 0x2d0b9
- (id)httpMethod;	// 0x2d0ad
- (id)description;	// 0x2d001
- (void)dealloc;	// 0x2cfa1
- (id)initWithPropertiesToFind:(id)find atURL:(id)url withDepth:(int)depth previousSyncToken:(id)token;	// 0x2cefd
@end
