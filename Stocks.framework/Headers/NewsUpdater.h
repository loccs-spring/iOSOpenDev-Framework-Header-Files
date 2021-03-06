/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Stocks/XMLHTTPRequest.h>
#import <Stocks/Stocks-Structs.h>

@class StockNewsItemCollection, Stock;
@protocol NewsUpdaterDelegate;

@interface NewsUpdater : XMLHTTPRequest {
	id<NewsUpdaterDelegate> _delegate;	// 144 = 0x90
	BOOL _firstLoad;	// 148 = 0x94
	double _lastResponseTimestamp;	// 152 = 0x98
	StockNewsItemCollection *_lastNewsItemCollection;	// 160 = 0xa0
	Stock *_stock;	// 164 = 0xa4
}
@property(assign, nonatomic) id<NewsUpdaterDelegate> delegate;	// G=0x10099; S=0x100a9; @synthesize=_delegate
+ (id)sharedNewsUpdater;	// 0x108e5
+ (id)_newsItemCollectionCache;	// 0x1092d
- (id)init;	// 0x119b9
- (BOOL)shouldReloadOnResume;	// 0x11949
- (void)clearNewsCacheOnDisk;	// 0x1079d
- (void)loadNewsCacheFromDiskForSymbol:(id)symbol;	// 0x117d5
- (BOOL)fetchNewsForStock:(id)stock;	// 0x11181
- (void)saveLastResponse;	// 0x107f1
- (int)parseData:(id)data;	// 0x10c71
- (void)failWithError:(id)error;	// 0x10a85
- (void)didParseData;	// 0x10891
- (void)resetLocale;	// 0x10975
// declared property getter: - (id)delegate;	// 0x10099
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x100a9
@end
