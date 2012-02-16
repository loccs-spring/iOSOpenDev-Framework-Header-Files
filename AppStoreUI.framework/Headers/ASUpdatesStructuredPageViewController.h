/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/ASStructuredPageViewController.h>


@interface ASUpdatesStructuredPageViewController : ASStructuredPageViewController {
	BOOL _isUpdatingAll;	// 260 = 0x104
}
- (void)_updateTabBarItemsAnimated:(BOOL)animated;	// 0x4fa9
- (void)_updateNavigationButtons;	// 0x4e85
- (BOOL)_purchaseItems:(id)items;	// 0x4e01
- (int)_numberOfDisplayedUpdates;	// 0x4ddd
- (void)_updateAll:(id)all;	// 0x4cbd
- (void)_tabConfigurationChanged:(id)changed;	// 0x4ca9
- (void)_purchasesChangedNotification:(id)notification;	// 0x4c45
- (float)marginForTableView:(id)tableView;	// 0x4c25
- (void)storePageCleanupBeforeTearDown;	// 0x4bad
- (void)reloadForChangedRowCount:(int)changedRowCount;	// 0x4ad5
- (void)reloadData;	// 0x498d
- (BOOL)purchaseItemAtIndexPath:(id)indexPath;	// 0x48d1
- (id)newTermsAndConditionsFooter;	// 0x48cd
- (id)newNoItemsOverlayLabel;	// 0x4819
- (id)newDataSource;	// 0x47ad
- (id)itemAtIndexPath:(id)indexPath;	// 0x4761
- (BOOL)handleSelectionForIndexPath:(id)indexPath tapCount:(int)count;	// 0x4701
- (void)dealloc;	// 0x4665
- (id)init;	// 0x4579
@end