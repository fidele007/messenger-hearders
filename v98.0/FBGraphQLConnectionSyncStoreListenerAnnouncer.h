/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBGraphQLConnectionSyncStoreListener.h>

@class NSString;

@interface FBGraphQLConnectionSyncStoreListenerAnnouncer : FBAnnouncerBase <FBGraphQLConnectionSyncStoreListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionSyncStore:(id)arg1 didUpdateNodes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didAddNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didUpdateNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStoreDidReachEnd:(id)arg1 ;
-(void)connectionSyncStoreDidReachStart:(id)arg1 ;
-(void)connectionSyncStoreDidChangeContent:(id)arg1 ;
-(void)connectionSyncStoreDidReplaceCache:(id)arg1 ;
-(void)connectionSyncStore:(id)arg1 willUseFirstCachedResponse:(BOOL)arg2 ;
-(void)connectionSyncStoreDidStartRequest:(id)arg1 ;
-(void)connectionSyncStoreDidFinishRequest:(id)arg1 error:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 requestProvider:(id)arg2 didReceiveResponse:(id)arg3 fromCache:(BOOL)arg4 ;
-(void)connectionSyncStoreWillPerformRequest:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
