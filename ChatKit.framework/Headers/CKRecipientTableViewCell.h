/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/XXUnknownSuperclass.h>

@class UIImageView;

@interface CKRecipientTableViewCell : XXUnknownSuperclass {
	UIImageView *_availableIcon;	// 252 = 0xfc
	BOOL _recipientAvailable;	// 256 = 0x100
}
@property(assign, nonatomic, getter=isRecipientAvailable) BOOL recipientAvailable;	// G=0x7a53d; S=0x7a761; @synthesize=_recipientAvailable
+ (id)cellForRecipient:(id)recipient;	// 0x7a67d
+ (id)availableImage;	// 0x7a62d
+ (id)highlightedAvailableImage;	// 0x7a5dd
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x7a54d
// declared property setter: - (void)setRecipientAvailable:(BOOL)available;	// 0x7a761
- (void)dealloc;	// 0x7a715
// declared property getter: - (BOOL)isRecipientAvailable;	// 0x7a53d
@end