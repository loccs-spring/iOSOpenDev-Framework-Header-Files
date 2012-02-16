/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface WebDefaultUIKitDelegate : XXUnknownSuperclass {
}
+ (id)sharedUIKitDelegate;	// 0xecd1
- (CGPoint)contentsPointForWebView:(id)webView;	// 0x3fdf9
- (CGRect)documentVisibleRectForWebView:(id)webView;	// 0x3fe11
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x3fe2d
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x3fe31
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x3fe35
- (void)webView:(id)view saveStateToHistoryItem:(id)historyItem forFrame:(id)frame;	// 0x3fe39
- (void)webView:(id)view restoreStateFromHistoryItem:(id)historyItem forFrame:(id)frame force:(BOOL)force;	// 0x3fe3d
- (void)webView:(id)view didReceiveViewportArguments:(id)arguments forFrame:(id)frame;	// 0x3fe41
- (void)webView:(id)view needsScrollNotifications:(id)notifications forFrame:(id)frame;	// 0x3fe45
- (void)webView:(id)view didObserveDeferredContentChange:(int)change forFrame:(id)frame;	// 0x3fe49
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x3fe4d
- (BOOL)webView:(id)view shouldScrollToPoint:(CGPoint)point forFrame:(id)frame;	// 0x3fe51
- (void)webViewDidSimulateClick:(id)webView;	// 0x3fe55
- (void)webViewWillSimulateClick:(id)webView;	// 0x3fe59
- (void)webViewDidNotSimulateClick:(id)webView;	// 0x3fe5d
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x3fe61
- (void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;	// 0x3fe65
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x3fe69
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x3fe6d
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x2e0fd
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x3fe71
- (void)webView:(id)view elementDidFocusNode:(id)element;	// 0x2e5e1
- (void)webView:(id)view elementDidBlurNode:(id)element;	// 0x33d69
- (void)webView:(id)view formStateDidFocusNode:(id)formState;	// 0x2e5dd
- (void)webView:(id)view formStateDidBlurNode:(id)formState;	// 0x33d65
- (void)webView:(id)view didReceiveDocTypeForFrame:(id)frame;	// 0x3fe75
- (id)webView:(id)view plugInViewWithArguments:(id)arguments fromPlugInPackage:(id)package;	// 0x3fe79
- (void)webView:(id)view willShowFullScreenForPlugInView:(id)view2;	// 0x3fe7d
- (void)webView:(id)view didHideFullScreenForPlugInView:(id)view2;	// 0x3fe81
- (void)webView:(id)view didReceiveMessage:(id)message;	// 0x3fe85
- (void)addInputString:(id)string fromVariantKey:(BOOL)variantKey;	// 0x3fe89
- (void)deleteFromInput;	// 0x3fe8d
- (void)_webthread_webView:(id)view attachRootLayer:(id)layer;	// 0x3fe91
- (void)webViewDidCommitCompositingLayerChanges:(id)webView;	// 0x3fe95
- (void)webView:(id)view didCreateOrUpdateScrollingLayer:(id)layer withContentsLayer:(id)contentsLayer scrollSize:(id)size forNode:(id)node;	// 0x3fe99
- (void)webView:(id)view willRemoveScrollingLayer:(id)layer withContentsLayer:(id)contentsLayer forNode:(id)node;	// 0x3fe9d
- (void)revealedSelectionByScrollingWebFrame:(id)frame;	// 0x3fea1
- (void)webViewDidLayout:(id)webView;	// 0x3fea5
- (void)webViewDidStartOverflowScroll:(id)webView;	// 0x3fea9
- (void)webViewDidEndOverflowScroll:(id)webView;	// 0x3fead
- (id)checkSpellingOfString:(id)string;	// 0x3feb1
- (void)writeDataToPasteboard:(id)pasteboard;	// 0x3feb5
- (id)readDataFromPasteboard:(id)pasteboard withIndex:(int)index;	// 0x3feb9
- (int)getPasteboardItemsCount;	// 0x3febd
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x3fec1
- (BOOL)hasRichlyEditableSelection;	// 0x3fec5
- (BOOL)performsTwoStepPaste:(id)paste;	// 0x3fec9
- (int)getPasteboardChangeCount;	// 0x3fecd
- (BOOL)isUnperturbedDictationResultMarker:(id)marker;	// 0x3fed1
- (void)webView:(id)view willAddPlugInView:(id)view2;	// 0x3fed5
- (void)webViewDidDrawTiles:(id)webView;	// 0x3fed9
@end