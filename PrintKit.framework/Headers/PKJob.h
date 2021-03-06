/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */



@class NSData, NSString, PKPrintSettings, NSDate;

@interface PKJob : NSObject {
@private
	int number;	// 4 = 0x4
	int mediaProgress;	// 8 = 0x8
	int mediaSheets;	// 12 = 0xc
	int mediaSheetsCompleted;	// 16 = 0x10
	NSString *printerDisplayName;	// 20 = 0x14
	int printerKind;	// 24 = 0x18
	NSString *printerLocation;	// 28 = 0x1c
	PKPrintSettings *settings;	// 32 = 0x20
	int state;	// 36 = 0x24
	NSDate *timeAtCompleted;	// 40 = 0x28
	NSDate *timeAtCreation;	// 44 = 0x2c
	NSDate *timeAtProcessing;	// 48 = 0x30
@protected
	NSData *thumbnailImage;	// 52 = 0x34
}
@property(assign, nonatomic) int number;	// G=0xcd5c; S=0xcd70; @synthesize
@property(assign, nonatomic) int mediaProgress;	// G=0xcd34; S=0xcd48; @synthesize
@property(assign, nonatomic) int mediaSheets;	// G=0xcd0c; S=0xcd20; @synthesize
@property(assign, nonatomic) int mediaSheetsCompleted;	// G=0xcce4; S=0xccf8; @synthesize
@property(retain, nonatomic) NSString *printerDisplayName;	// G=0xccd0; S=0xd5a8; @synthesize
@property(assign, nonatomic) int printerKind;	// G=0xcca8; S=0xccbc; @synthesize
@property(retain, nonatomic) NSString *printerLocation;	// G=0xcc94; S=0xd574; @synthesize
@property(retain, nonatomic) PKPrintSettings *settings;	// G=0xcc80; S=0xd540; @synthesize
@property(assign, nonatomic) int state;	// G=0xcc58; S=0xcc6c; @synthesize
@property(retain, nonatomic) NSDate *timeAtCompleted;	// G=0xcc44; S=0xd50c; @synthesize
@property(retain, nonatomic) NSDate *timeAtCreation;	// G=0xcc30; S=0xd4d8; @synthesize
@property(retain, nonatomic) NSDate *timeAtProcessing;	// G=0xcc1c; S=0xd4a4; @synthesize
@property(retain, nonatomic) NSData *thumbnailImage;	// G=0xcc08; S=0xd470; @synthesize
+ (id)currentJob;	// 0xda14
+ (id)jobs;	// 0xe2a8
- (int)cancel;	// 0xcd84
- (int)update;	// 0xcffc
// declared property getter: - (id)thumbnailImage;	// 0xcc08
// declared property setter: - (void)setThumbnailImage:(id)image;	// 0xd470
// declared property getter: - (id)timeAtProcessing;	// 0xcc1c
// declared property setter: - (void)setTimeAtProcessing:(id)processing;	// 0xd4a4
// declared property getter: - (id)timeAtCreation;	// 0xcc30
// declared property setter: - (void)setTimeAtCreation:(id)creation;	// 0xd4d8
// declared property getter: - (id)timeAtCompleted;	// 0xcc44
// declared property setter: - (void)setTimeAtCompleted:(id)completed;	// 0xd50c
// declared property getter: - (int)state;	// 0xcc58
// declared property setter: - (void)setState:(int)state;	// 0xcc6c
// declared property getter: - (id)settings;	// 0xcc80
// declared property setter: - (void)setSettings:(id)settings;	// 0xd540
// declared property getter: - (id)printerLocation;	// 0xcc94
// declared property setter: - (void)setPrinterLocation:(id)location;	// 0xd574
// declared property getter: - (int)printerKind;	// 0xcca8
// declared property setter: - (void)setPrinterKind:(int)kind;	// 0xccbc
// declared property getter: - (id)printerDisplayName;	// 0xccd0
// declared property setter: - (void)setPrinterDisplayName:(id)name;	// 0xd5a8
// declared property getter: - (int)mediaSheetsCompleted;	// 0xcce4
// declared property setter: - (void)setMediaSheetsCompleted:(int)completed;	// 0xccf8
// declared property getter: - (int)mediaSheets;	// 0xcd0c
// declared property setter: - (void)setMediaSheets:(int)sheets;	// 0xcd20
// declared property getter: - (int)mediaProgress;	// 0xcd34
// declared property setter: - (void)setMediaProgress:(int)progress;	// 0xcd48
// declared property getter: - (int)number;	// 0xcd5c
// declared property setter: - (void)setNumber:(int)number;	// 0xcd70
@end
