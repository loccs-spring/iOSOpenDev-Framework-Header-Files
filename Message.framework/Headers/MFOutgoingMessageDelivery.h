/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/XXUnknownSuperclass.h>

@class DeliveryAccount, NSDictionary, NSArray, Message, MailAccount, NSString, MutableMessageHeaders, MFMailDelivery, PlainTextDocument;
@protocol MFDeliveryDelegate;

@interface MFOutgoingMessageDelivery : XXUnknownSuperclass {
	Message *_message;	// 4 = 0x4
	MutableMessageHeaders *_headers;	// 8 = 0x8
	NSArray *_mixedContent;	// 12 = 0xc
	BOOL _textPartsAreHTML;	// 16 = 0x10
	NSString *_htmlBody;	// 20 = 0x14
	PlainTextDocument *_plainTextAlternative;	// 24 = 0x18
	NSArray *_otherHTMLAndAttachments;	// 28 = 0x1c
	id<MFDeliveryDelegate> _delegate;	// 32 = 0x20
	MailAccount *_archiveAccount;	// 36 = 0x24
	DeliveryAccount *_deliveryAccount;	// 40 = 0x28
	NSDictionary *_compositionSpecification;	// 44 = 0x2c
	MFMailDelivery *_currentDeliveryObject;	// 48 = 0x30
}
@property(retain, nonatomic) NSDictionary *compositionSpecification;	// G=0x6ba05; S=0x6c4e1; @synthesize=_compositionSpecification
@property(retain) id account;	// G=0x6bc35; S=0x6bb01; converted property
@property(readonly, retain) Message *message;	// G=0x6bd09; converted property
+ (id)newWithMessage:(id)message;	// 0x6bad5
+ (id)newWithHeaders:(id)headers mixedContent:(id)content textPartsAreHTML:(BOOL)html;	// 0x6ba9d
+ (id)newWithHeaders:(id)headers HTML:(id)html plainTextAlternative:(id)alternative other:(id)other;	// 0x6ba6d
- (id)initWithMessage:(id)message;	// 0x6ba15
- (id)initWithHeaders:(id)headers mixedContent:(id)content textPartsAreHTML:(BOOL)html;	// 0x6c9fd
- (id)initWithHeaders:(id)headers HTML:(id)html plainTextAlternative:(id)alternative other:(id)other;	// 0x6c949
- (void)dealloc;	// 0x6c849
- (id)_currentDeliveryObject;	// 0x6c549
// declared property setter: - (void)setCompositionSpecification:(id)specification;	// 0x6c4e1
- (id)originalHeaders;	// 0x6c4a9
- (int)_deliverSynchronouslyWithCurrentSettings:(BOOL)currentSettings;	// 0x6c30d
- (int)deliverSynchronously;	// 0x6bf05
- (int)deliveryStatus;	// 0x6becd
// converted property getter: - (id)message;	// 0x6bd09
- (id)_deliveryAccountForInitializers;	// 0x6bc75
// converted property getter: - (id)account;	// 0x6bc35
- (void)setDelegate:(id)delegate;	// 0x6b9f5
- (void)setArchiveAccount:(id)account;	// 0x6bbc1
// converted property setter: - (void)setAccount:(id)account;	// 0x6bb01
// declared property getter: - (id)compositionSpecification;	// 0x6ba05
@end
