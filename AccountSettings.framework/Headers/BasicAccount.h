/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import <AccountSettings/AccountFullAccountProtocol.h>
#import <AccountSettings/BasicAccount.h>


@class NSMutableDictionary, NSDictionary;
@protocol AccountRefreshProtocol;

@interface BasicAccount : NSObject <AccountFullAccountProtocol> {
	NSDictionary *_originalProperties;	// 4 = 0x4
	NSMutableDictionary *_properties;	// 8 = 0x8
	id<AccountFullAccountProtocol> _fullAccount;	// 12 = 0xc
	id<AccountRefreshProtocol> _syncAccount;	// 16 = 0x10
	BasicAccount *_parentAccount;	// 20 = 0x14
}
@property(retain, nonatomic) NSDictionary *originalProperties;	// G=0xe8d; S=0x23a1; @synthesize=_originalProperties
@property(retain) BasicAccount *parentAccount;	// G=0xe75; S=0x10a5; converted property
@property(retain) id accountClass;	// G=0x1105; S=0x1125; converted property
@property(readonly, retain) NSMutableDictionary *properties;	// G=0xe65; converted property
+ (BOOL)isMultitaskingEnabled;	// 0x2359
+ (void)initialize;	// 0x1c0d
+ (id)accountWithType:(id)type class:(id)aClass;	// 0x1695
+ (id)accountWithProperties:(id)properties;	// 0x16d5
+ (id)allSupportedDataclasses;	// 0x1721
+ (id)supportedDataclassesForAccountType:(id)accountType;	// 0x1865
+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)singleStoreDataclass;	// 0x189d
+ (id)userActionsToEnableDataclass:(id)enableDataclass forAccountType:(id)accountType;	// 0x1941
+ (id)userActionsToDisableDataclass:(id)disableDataclass forAccountType:(id)accountType;	// 0x19b1
+ (id)deleteAccountActionsForAccountType:(id)accountType;	// 0x1a21
+ (BOOL)showRemindersSeparatelyForAccountType:(id)accountType;	// 0x1a59
+ (BOOL)multipleStoresSupportedByDataclass:(id)dataclass;	// 0x1ba9
+ (BOOL)displayToggleForDataclass:(id)dataclass;	// 0x1b45
+ (BOOL)userConfirmationIsRequiredByDataclass:(id)dataclass;	// 0x1ae1
- (id)initWithProperties:(id)properties;	// 0x27c1
- (id)init;	// 0xe9d
- (void)dealloc;	// 0x2725
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0xf29
- (void)removeAccountPropertyForKey:(id)key;	// 0xfa5
- (id)accountPropertyForKey:(id)key;	// 0xfc9
// converted property getter: - (id)properties;	// 0xe65
- (id)propertiesToSave;	// 0x1029
- (id)type;	// 0x1039
- (id)identifier;	// 0x1059
- (id)parentAccountIdentifier;	// 0x1079
// converted property getter: - (id)parentAccount;	// 0xe75
// converted property setter: - (void)setParentAccount:(id)account;	// 0x10a5
- (id)syncStoreIdentifier;	// 0x10e5
// converted property getter: - (id)accountClass;	// 0x1105
// converted property setter: - (void)setAccountClass:(id)aClass;	// 0x1125
- (id)displayName;	// 0x1185
- (id)typeString;	// 0x11a5
- (id)shortTypeString;	// 0x11c5
- (id)supportedDataclasses;	// 0x11e5
- (id)provisionedDataclasses;	// 0x1259
- (id)enabledDataclasses;	// 0x134d
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x1445
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x1471
- (void)setEnabledForDataclasses:(id)dataclasses;	// 0x2655
- (id)fullAccountUsingLoader:(id)loader;	// 0x23ed
- (id)defaultContainerIdentifierForDataclass:(id)dataclass;	// 0x157d
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x15a9
- (BOOL)refreshContainerListForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x15e1
- (BOOL)refreshContainersForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x1611
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass;	// 0x1641
- (BOOL)refreshContainerListForDataclass:(id)dataclass;	// 0x1665
- (BOOL)refreshContainersForDataclass:(id)dataclass;	// 0x167d
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0xe85
// declared property setter: - (void)setOriginalProperties:(id)properties;	// 0x23a1
// declared property getter: - (id)originalProperties;	// 0xe8d
@end

@interface BasicAccount (Private)
+ (id)createNewAccountUID;	// 0x37e9
+ (id)_accountCreationMap;	// 0x30e5
- (void)_forcedSetAccountProperty:(id)property forKey:(id)key;	// 0x2ec1
- (void)_forcedSetEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x2eed
- (void)setDisplayName:(id)name;	// 0x2fd1
- (void)setFullAccount:(id)account;	// 0x3049
- (id)_creatorClassNameForAccountType:(id)accountType creatorType:(id)type loader:(id)loader;	// 0x3375
- (id)fullAccountCreatorClassNameForAccountType:(id)accountType loader:(id)loader;	// 0x3091
- (id)syncAccountCreatorClassNameForAccountType:(id)accountType;	// 0x30b9
@end

@interface BasicAccount (Internal)
+ (BOOL)_isValidAccountType:(id)type;	// 0x2d41
+ (id)_creatorsInfo;	// 0x2d89
+ (id)_dataclassesProperties;	// 0x2e25
- (id)_initWithType:(id)type class:(id)aClass;	// 0x29b9
- (id)_cachedSyncAccount;	// 0x32b5
- (id)_orderedDataclasses:(id)dataclasses;	// 0x312d
- (id)_profileRestrictedDataclasses;	// 0x2bf1
@end
