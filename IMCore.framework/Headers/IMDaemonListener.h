/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */



@class NSDictionary, NSMutableArray, NSData, NSProtocolChecker, NSArray, NSDate, NSString, NSMutableDictionary;

@interface IMDaemonListener : NSObject {
	NSMutableDictionary *_properties;	// 4 = 0x4
	NSMutableDictionary *_persistentProperties;	// 8 = 0x8
	NSMutableArray *_deferredChatMessages;	// 12 = 0xc
	NSMutableArray *_handlers;	// 16 = 0x10
	NSProtocolChecker *_protocol;	// 20 = 0x14
	NSMutableDictionary *_services;	// 24 = 0x18
	NSDate *_myIdleSince;	// 28 = 0x1c
	NSData *_myPicture;	// 32 = 0x20
	NSMutableDictionary *_contexts;	// 36 = 0x24
	NSString *_myStatusMessage;	// 40 = 0x28
	NSString *_myNowPlayingString;	// 44 = 0x2c
	unsigned _myStatus;	// 48 = 0x30
	unsigned long long _vcCapabilities;	// 52 = 0x34
	BOOL _setupComplete;	// 60 = 0x3c
	BOOL _postedSetupComplete;	// 61 = 0x3d
	BOOL _holdingChatMessages;	// 62 = 0x3e
	BOOL _hidingDisconnect;	// 63 = 0x3f
	BOOL _hasPendingProcessChange;	// 64 = 0x40
}
@property(assign, nonatomic, setter=_setHidingDisconnect:) BOOL _hidingDisconnect;	// G=0x26585; S=0x26595; @synthesize
@property(readonly, assign, nonatomic) NSMutableDictionary *_contexts;	// G=0x26575; @synthesize
@property(readonly, assign, nonatomic) BOOL isHoldingChatMessages;	// G=0x12449; 
@property(readonly, assign, nonatomic) BOOL shouldHoldChatMessages;	// G=0x1428d; @synthesize=_holdingChatMessages
@property(readonly, assign, nonatomic) unsigned long long vcCapabilities;	// G=0x265c5; @synthesize=_vcCapabilities
@property(readonly, assign, nonatomic) unsigned long myIdleTime;	// G=0x3451; 
@property(readonly, assign, nonatomic) NSString *myStatusMessage;	// G=0x265b5; @synthesize=_myStatusMessage
@property(readonly, assign, nonatomic) unsigned myStatus;	// G=0x146e5; 
@property(readonly, assign, nonatomic) NSArray *allServices;	// G=0xcead; 
@property(readonly, assign, nonatomic) NSArray *handlers;	// G=0x265a5; @synthesize=_handlers
@property(readonly, assign, nonatomic) BOOL hasPostedSetupComplete;	// G=0x265dd; @synthesize=_postedSetupComplete
@property(readonly, assign, nonatomic) BOOL isSetupComplete;	// G=0x28b5; @synthesize=_setupComplete
@property(readonly, assign, nonatomic) NSDictionary *persistentProperties;	// G=0x265fd; @synthesize=_persistentProperties
@property(readonly, assign, nonatomic) NSDictionary *properties;	// G=0x265ed; @synthesize=_properties
// declared property getter: - (id)persistentProperties;	// 0x265fd
// declared property getter: - (id)properties;	// 0x265ed
// declared property getter: - (BOOL)hasPostedSetupComplete;	// 0x265dd
// declared property getter: - (BOOL)shouldHoldChatMessages;	// 0x1428d
// declared property getter: - (unsigned long long)vcCapabilities;	// 0x265c5
// declared property getter: - (id)myStatusMessage;	// 0x265b5
// declared property getter: - (BOOL)isSetupComplete;	// 0x28b5
// declared property getter: - (id)handlers;	// 0x265a5
// declared property setter: - (void)_setHidingDisconnect:(BOOL)disconnect;	// 0x26595
// declared property getter: - (BOOL)_hidingDisconnect;	// 0x26585
// declared property getter: - (id)_contexts;	// 0x26575
- (void)forwardInvocation:(id)invocation;	// 0x262c9
- (id)methodSignatureForSelector:(SEL)selector;	// 0x262a9
- (void)databaseUpdated:(id)updated;	// 0x25e95
- (void)_deferredSetup:(id)setup;	// 0x259e1
- (void)setupComplete:(BOOL)complete info:(id)info;	// 0x24fa9
- (void)account:(id)account defaults:(id)defaults blockList:(id)list allowList:(id)list4 blockingMode:(unsigned)mode blockIdleStatus:(BOOL)status status:(id)status7 capabilities:(unsigned long long)capabilities serviceLoginStatus:(unsigned)status9 loginStatusMessage:(id)message;	// 0x24f09
- (void)service:(id)service properties:(id)properties defaults:(id)defaults defaultAccountSettings:(id)settings allAccounts:(id)accounts activeAccounts:(id)accounts6;	// 0x4a61
- (void)services:(id)services properties:(id)properties persistentProperties:(id)properties3;	// 0x24819
- (void)account:(id)account status:(id)status capabilities:(unsigned long long)capabilities serviceLoginStatus:(unsigned)status4 loginStatusMessage:(id)message;	// 0x8c71
- (void)persistentProperty:(id)property changedTo:(id)to from:(id)from;	// 0x245dd
- (void)_cacheValue:(id)value forPersistentProperty:(id)persistentProperty;	// 0x24599
- (id)valueOfPersistentProperty:(id)persistentProperty;	// 0xd4e9
- (void)property:(id)property changedTo:(id)to from:(id)from;	// 0x2435d
- (void)_cacheValue:(id)value forProperty:(id)property;	// 0x24319
- (id)valueOfProperty:(id)property;	// 0x242f9
- (id)_stampForContext:(id)context;	// 0x242d9
- (void)_setStamp:(id)stamp forContext:(id)context;	// 0x24215
- (void)account:(id)account postedError:(id)error;	// 0x23fa5
- (void)account:(id)account blockIdleStatusChanged:(BOOL)changed;	// 0x89b5
- (void)account:(id)account blockingModeChanged:(unsigned)changed;	// 0x86fd
- (void)account:(id)account allowListChanged:(id)changed;	// 0x832d
- (void)account:(id)account blockListChanged:(id)changed;	// 0x756d
- (void)account:(id)account handleSubscriptionRequestFrom:(id)from withMessage:(id)message;	// 0x23d3d
- (void)account:(id)account groupsChanged:(id)changed error:(id)error;	// 0xdbb9
- (void)fileTransfer:(id)transfer updatedWithCurrentBytes:(unsigned long long)currentBytes totalBytes:(unsigned long long)bytes averageTransferRate:(unsigned long long)rate;	// 0x23c95
- (void)fileTransfer:(id)transfer updatedWithProperties:(id)properties;	// 0x16909
- (void)fileTransfer:(id)transfer createdWithProperties:(id)properties;	// 0x23c19
- (void)standaloneFileTransferRegistered:(id)registered;	// 0x23ba1
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties messageReceived:(id)received;	// 0x2379d
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties invitationReceived:(id)received;	// 0x23399
- (void)account:(id)account buddyInfo:(id)info commandDelivered:(id)delivered properties:(id)properties;	// 0x23345
- (void)account:(id)account buddyInfo:(id)info commandReceived:(id)received properties:(id)properties;	// 0x232f1
- (void)account:(id)account buddyInfo:(id)info dataReceived:(id)received;	// 0x232a1
- (void)account:(id)account buddyProperties:(id)properties buddyPictures:(id)pictures;	// 0xed0d
- (void)account:(id)account buddyPictureChanged:(id)changed imageData:(id)data imageHash:(id)hash;	// 0x11459
- (void)account:(id)account buddyPropertiesChanged:(id)changed;	// 0xf7fd
- (void)vcCapabilitiesChanged:(unsigned long long)changed;	// 0xc7d9
- (void)account:(id)account capabilitiesChanged:(unsigned long long)changed;	// 0x3e15
- (void)account:(id)account statusChanged:(id)changed;	// 0xd949
- (void)account:(id)account loginStatusChanged:(unsigned)changed message:(id)message reason:(unsigned)reason properties:(id)properties;	// 0x39fd
- (void)accountRemoved:(id)removed;	// 0x2322d
- (void)accountAdded:(id)added defaults:(id)defaults service:(id)service;	// 0x157cd
- (void)account:(id)account defaultsChanged:(id)changed;	// 0x96cd
- (void)activeAccountsChanged:(id)changed forService:(id)service;	// 0x14825
- (void)defaultsChanged:(id)changed forService:(id)service;	// 0x1285d
- (void)releaseHeldChatMessages;	// 0x12379
- (void)holdChatMessages;	// 0x2881
// declared property getter: - (BOOL)isHoldingChatMessages;	// 0x12449
- (void)_deferNotification:(id)notification;	// 0x231c9
- (void)_processDeferredInvitationDictionary:(id)dictionary;	// 0x230ad
// declared property getter: - (unsigned long)myIdleTime;	// 0x3451
// declared property getter: - (unsigned)myStatus;	// 0x146e5
- (void)_processMyStatusChanged;	// 0x3dc5
- (void)_reallyProcessMyStatusChanged;	// 0x793d
- (id)serviceWithName:(id)name;	// 0x57a5
// declared property getter: - (id)allServices;	// 0xcead
- (void)removeHandler:(id)handler;	// 0x23051
- (void)addHandler:(id)handler;	// 0x21cd
- (void)_noteDisconnected;	// 0x23031
- (void)dealloc;	// 0x22f31
- (id)init;	// 0x20c1
@end