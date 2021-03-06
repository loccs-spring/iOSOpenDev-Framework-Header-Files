/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <GameKitServices/GKSessionDelegate.h>


@protocol GKSessionVoiceChatDelegate <GKSessionDelegate>
- (void)session:(id)session didReceiveAudioPacket:(id)packet fromPeerID:(id)peerID;
- (void)session:(id)session didReceiveOOBAudioPacket:(id)packet fromPeerID:(id)peerID;
@end
