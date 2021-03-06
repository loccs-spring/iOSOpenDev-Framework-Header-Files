/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/iPodUI-Structs.h>
#import <iPodUI/IUArrayCellConfiguration.h>

@class MPMediaEntity, UIImage, MPImageCacheRequest, MPImageCache;

@interface IUMediaEntityCellConfiguration : IUArrayCellConfiguration {
	MPImageCache *_artworkImageCache;	// 80 = 0x50
	MPImageCacheRequest *_artworkImageRequest;	// 84 = 0x54
	UIImage *_artwork;	// 88 = 0x58
	MPMediaEntity *_entity;	// 92 = 0x5c
	BOOL _isGenius;	// 96 = 0x60
}
@property(readonly, assign, nonatomic) BOOL displaysArtworkFromReprentativeItem;	// G=0x2e209; 
@property(readonly, assign, nonatomic) CGSize artworkSize;	// G=0x2e1f1; 
@property(readonly, assign, nonatomic) MPMediaEntity *entity;	// G=0x2e261; @synthesize=_entity
@property(retain, nonatomic) UIImage *artwork;	// G=0x2e251; S=0x2df05; @synthesize=_artwork
@property(assign, nonatomic) BOOL isGenius;	// G=0x2e271; S=0x2e161; @synthesize=_isGenius
// declared property getter: - (BOOL)isGenius;	// 0x2e271
// declared property getter: - (id)entity;	// 0x2e261
// declared property getter: - (id)artwork;	// 0x2e251
// declared property getter: - (BOOL)displaysArtworkFromReprentativeItem;	// 0x2e209
// declared property getter: - (CGSize)artworkSize;	// 0x2e1f1
- (void)reloadStrings;	// 0x2e1ed
- (void)reloadImages;	// 0x2e1e9
- (id)mediaItem;	// 0x2e195
// declared property setter: - (void)setIsGenius:(BOOL)genius;	// 0x2e161
- (void)setArtworkImageRequest:(id)request artworkLoadCompletionHandler:(id)handler;	// 0x2dfdd
- (id)newImageRequestWithMediaEntity:(id)mediaEntity;	// 0x2df5d
// declared property setter: - (void)setArtwork:(id)artwork;	// 0x2df05
- (void)configureForEntity:(id)entity query:(id)query entityIndex:(unsigned)index entityCount:(unsigned)count;	// 0x2dead
- (void)reloadData;	// 0x2dd85
- (id)downloadableAsset;	// 0x2dd75
- (id)description;	// 0x2dd0d
- (void)dealloc;	// 0x2dc71
@end
