/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/IMAP-Structs.h>
#import <IMAP/MFIMAPOperation.h>


@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPOperation {
	CFArrayRef messageIds;	// 28 = 0x1c
	CFArrayRef internalDates;	// 32 = 0x20
}
- (void)serializeIntoData:(id)data;	// 0x11f11
- (unsigned char)_magic;	// 0x102bd
- (void)_deserializeOpSpecificValuesFromData:(id)data cursor:(unsigned *)cursor;	// 0x12411
- (void)dealloc;	// 0x123b5
- (BOOL)getMessageId:(id *)anId andInternalDate:(id *)date forDestinationUid:(unsigned)destinationUid;	// 0x12299
- (void)setMessageId:(id)anId andInternalDate:(id)date forMessageWithSourceUid:(unsigned)sourceUid;	// 0x120c5
- (void)expungeTemporaryUid:(unsigned)uid;	// 0x11fb5
- (unsigned)approximateSize;	// 0x11f69
@end