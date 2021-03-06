/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMState.h>

@class EDSheet, EDWorkbook;

__attribute__((visibility("hidden")))
@interface EMState : CMState {
@private
	EDWorkbook *_workbook;	// 40 = 0x28
	EDSheet *_currentSheet;	// 44 = 0x2c
}
@property(retain) EDWorkbook *workbook;	// G=0xf8ce1; S=0xe7835; @synthesize=_workbook
@property(assign) EDSheet *currentSheet;	// G=0xfaa1d; S=0xf7a61; @synthesize=_currentSheet
- (void)dealloc;	// 0x110e9d
// declared property getter: - (id)currentSheet;	// 0xfaa1d
// declared property setter: - (void)setCurrentSheet:(id)sheet;	// 0xf7a61
// declared property getter: - (id)workbook;	// 0xf8ce1
// declared property setter: - (void)setWorkbook:(id)workbook;	// 0xe7835
@end
