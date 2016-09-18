/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPresenceUpdating.h>

@protocol OS_dispatch_queue, MNPresenceCacheListener;
@class NSObject, NSDictionary, NSString;

@interface MNPresenceCache : NSObject <MNPresenceUpdating> {

	NSObject*<OS_dispatch_queue> _updateQueue;
	id<MNPresenceCacheListener> _listener;
	NSDictionary* _personIdToPresenceMap;

}

@property (copy) NSDictionary * personIdToPresenceMap;              //@synthesize personIdToPresenceMap=_personIdToPresenceMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updatePresence:(id)arg1 shouldClearExisting:(BOOL)arg2 ;
-(id)onlineUserIds;
-(void)setPersonIdToPresenceMap:(NSDictionary *)arg1 ;
-(NSDictionary *)personIdToPresenceMap;
-(id)allTrackedPresenceValues;
-(id)allUserIds;
-(void)configureWithUpdateQueue:(id)arg1 listener:(id)arg2 ;
-(id)presenceForPersonWithId:(id)arg1 ;
@end

