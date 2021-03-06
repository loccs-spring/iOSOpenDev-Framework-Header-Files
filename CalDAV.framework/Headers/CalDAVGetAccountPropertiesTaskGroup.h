/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/XXUnknownSuperclass.h>

@class NSURL, NSSet, CalDAVServerVersion, NSString;

@interface CalDAVGetAccountPropertiesTaskGroup : XXUnknownSuperclass {
@private
	NSSet *_calendarHomes;	// 76 = 0x4c
	NSSet *_userAddresses;	// 80 = 0x50
	NSSet *_originalUserAddresses;	// 84 = 0x54
	NSURL *_inboxURL;	// 88 = 0x58
	NSURL *_outboxURL;	// 92 = 0x5c
	NSURL *_dropboxURL;	// 96 = 0x60
	NSURL *_notificationURL;	// 100 = 0x64
	NSURL *_delegatePrincipalURL;	// 104 = 0x68
	NSURL *_updatedPrincipalURL;	// 108 = 0x6c
	NSString *_allowedCalendarComponentSet;	// 112 = 0x70
	CalDAVServerVersion *_serverVersion;	// 116 = 0x74
}
@property(readonly, assign) NSSet *calendarHomes;	// G=0x32b9; @synthesize=_calendarHomes
@property(retain) NSURL *delegatePrincipalURL;	// G=0x3531; S=0x350d; @synthesize=_delegatePrincipalURL
@property(readonly, assign) NSURL *inboxURL;	// G=0x32a9; @synthesize=_inboxURL
@property(readonly, assign) NSURL *outboxURL;	// G=0x3299; @synthesize=_outboxURL
@property(readonly, assign) NSURL *dropboxURL;	// G=0x3289; @synthesize=_dropboxURL
@property(readonly, assign) NSURL *notificationURL;	// G=0x3279; @synthesize=_notificationURL
@property(readonly, assign) NSSet *userAddresses;	// G=0x3269; @synthesize=_userAddresses
@property(readonly, assign) NSSet *originalUserAddresses;	// G=0x3259; @synthesize=_originalUserAddresses
@property(readonly, assign) CalDAVServerVersion *serverVersion;	// G=0x3249; @synthesize=_serverVersion
@property(readonly, assign) NSString *allowedCalendarComponentSet;	// G=0x3239; @synthesize=_allowedCalendarComponentSet
@property(readonly, assign) NSURL *updatedPrincipalURL;	// G=0x3229; @synthesize=_updatedPrincipalURL
- (void)dealloc;	// 0x33f9
- (id)description;	// 0x3d4d
- (id)_copyAccountPropertiesPropFindElements;	// 0x3ab5
- (void)startTaskGroup;	// 0x32c9
- (id)homeSet;	// 0x3215
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x3605
- (BOOL)forceOptionsRequest;	// 0x3225
- (void)processPrincipalHeaders:(id)headers;	// 0x3549
// declared property getter: - (id)updatedPrincipalURL;	// 0x3229
// declared property getter: - (id)allowedCalendarComponentSet;	// 0x3239
// declared property getter: - (id)serverVersion;	// 0x3249
// declared property getter: - (id)originalUserAddresses;	// 0x3259
// declared property getter: - (id)userAddresses;	// 0x3269
// declared property getter: - (id)notificationURL;	// 0x3279
// declared property getter: - (id)dropboxURL;	// 0x3289
// declared property getter: - (id)outboxURL;	// 0x3299
// declared property getter: - (id)inboxURL;	// 0x32a9
// declared property getter: - (id)delegatePrincipalURL;	// 0x3531
// declared property setter: - (void)setDelegatePrincipalURL:(id)url;	// 0x350d
// declared property getter: - (id)calendarHomes;	// 0x32b9
@end
