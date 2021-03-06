/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/iPodUI-Structs.h>



@protocol IUAlbumGridRowCellDelegate <NSObject>
@optional
- (BOOL)albumGridCell:(id)cell shouldShowTitleAtIndex:(unsigned)index;
- (void)albumGridRowCell:(id)cell deleteAlbumAtIndex:(unsigned)index;
- (void)albumGridRowCell:(id)cell artWasLoadedAtIndex:(unsigned)index imageSubRect:(CGRect)rect;
- (id)newGridImageViewForAlbumGridRowCell:(id)albumGridRowCell;
- (void)albumGridRowCell:(id)cell longTouchInAlbumWithIndex:(unsigned)index;
- (void)albumGridRowCell:(id)cell touchesEndedInAlbumWithIndex:(unsigned)index;
- (void)albumGridRowCell:(id)cell touchesCancelledInAlbumWithIndex:(unsigned)index;
- (void)albumGridRowCell:(id)cell touchesBeganInAlbumWithIndex:(unsigned)index;
@end
