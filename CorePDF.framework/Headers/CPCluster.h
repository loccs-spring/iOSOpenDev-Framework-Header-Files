/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPCluster.h>
#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>



@interface CPCluster : NSObject <CPDisposable> {
	XXStruct_lVmCAC *profile;	// 4 = 0x4
	unsigned xCount;	// 8 = 0x8
	double *x;	// 12 = 0xc
	double *dx;	// 16 = 0x10
	unsigned *dxOrderIndex;	// 20 = 0x14
	unsigned interClusterMinIndex;	// 24 = 0x18
	double *ddx;	// 28 = 0x1c
	unsigned *ddxOrderIndex;	// 32 = 0x20
	unsigned interLevelMinIndex;	// 36 = 0x24
	unsigned minClusterSize;	// 40 = 0x28
	double maxClusterSpread;	// 44 = 0x2c
	double minInterClusterDiff;	// 52 = 0x34
	double minInterLevel2ndDiff;	// 60 = 0x3c
	unsigned clusterCount;	// 68 = 0x44
	XXStruct_VnwizD *xStats;	// 72 = 0x48
	unsigned levels;	// 76 = 0x4c
	XXStruct_VnwizD *dxStats;	// 80 = 0x50
	BOOL ownData;	// 84 = 0x54
	BOOL ownDifferences;	// 85 = 0x55
}
@property(readonly, assign) unsigned clusterCount;	// G=0x37689; converted property
@property(readonly, assign) unsigned levels;	// G=0x3747d; converted property
+ (unsigned *)createOrderIndexFor:(double *)aFor ofSize:(unsigned)size;	// 0x37871
- (id)init;	// 0x374d9
- (id)initWithProfile:(const XXStruct_lVmCAC *)profile;	// 0x3780d
- (void)dispose;	// 0x39479
- (void)finalize;	// 0x39439
- (void)dealloc;	// 0x393f9
- (void)computeDifferencesFromData;	// 0x39365
- (void)computeDataFromDifferences;	// 0x392bd
- (void)splitSecondDifferences;	// 0x38f65
- (void)assembleDifferenceStats;	// 0x38d81
- (BOOL)joinLevelsFrom:(unsigned)from to:(unsigned)to;	// 0x38c69
- (BOOL)joinClosestLevelPairFrom:(unsigned)from to:(unsigned)to;	// 0x374f5
- (BOOL)splitLevelAtIndex:(unsigned)index betweenValue:(double)value andValue:(double)value3;	// 0x38931
- (BOOL)coalesceFrom:(unsigned)from to:(unsigned)to;	// 0x385a9
- (void)analyzeDifferences;	// 0x383c5
- (void)assembleDataStats;	// 0x38171
- (void)setMinimumClusterSize:(unsigned)size;	// 0x37431
- (void)setMaximumClusterSpread:(double)spread;	// 0x37441
- (void)setMinimumRecognizedInterClusterDifference:(double)difference;	// 0x37455
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)difference;	// 0x37469
- (void)assembleDensityDifferenceStats;	// 0x37f5d
- (void)analyzeDensities;	// 0x37ba1
- (void)findClusters:(double *)clusters count:(unsigned)count;	// 0x375b9
- (void)findClustersFromDifferences:(double *)differences count:(unsigned)count;	// 0x37609
- (void)findDensityClusters:(double *)clusters count:(unsigned)count;	// 0x37639
- (BOOL)applyDifferenceHints:(XXStruct_VnwizD *)hints count:(unsigned)count;	// 0x378b1
// converted property getter: - (unsigned)clusterCount;	// 0x37689
// converted property getter: - (unsigned)levels;	// 0x3747d
- (XXStruct_VnwizD)clusterStatisticsAtIndex:(unsigned)index;	// 0x3771d
- (XXStruct_VnwizD)differenceClusterStatisticsAtIndex:(unsigned)index;	// 0x3748d
- (XXStruct_VnwizD)largestClusterStatistics;	// 0x3777d
@end

@interface CPCluster (CPAdditions)
+ (void)clusterTextLine:(id)line;	// 0x39dc9
+ (void)reclusterTextLine:(id)line fromWordIndex:(unsigned)wordIndex count:(unsigned *)count;	// 0x39fd9
- (void)tryLevel0SplitBetween:(double)between and:(double)anAnd usingHints:(XXStruct_VnwizD *)hints;	// 0x39585
- (void)findClustersFromCharacterSequence:(id)characterSequence withSpaceHint:(BOOL)spaceHint;	// 0x397e9
- (void)makeWords:(XXStruct_NaTu4D *)words count:(unsigned)count fromCharacterSequence:(id)characterSequence charOffset:(unsigned)offset;	// 0x39cb1
@end