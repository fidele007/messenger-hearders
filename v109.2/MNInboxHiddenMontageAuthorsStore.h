/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInboxUnitUpdateListening.h>

@protocol OS_dispatch_queue;
@class MNUserSettings, MNInboxUnitsStore, NSObject, MNInboxHiddenMontageAuthorsStoreListenerAnnouncer, NSString;

@interface MNInboxHiddenMontageAuthorsStore : NSObject <MNInboxUnitUpdateListening> {

	MNUserSettings* _userSettings;
	MNInboxUnitsStore* _inboxUnitStore;
	NSObject*<OS_dispatch_queue> _queue;
	MNInboxHiddenMontageAuthorsStoreListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)hiddenMontageAuthorIds;
-(void)hideMontageWithUserId:(id)arg1 ;
-(void)inboxUnitsDidUpdate:(id)arg1 isFreshData:(BOOL)arg2 ;
-(void)_updateHiddenMontageAuthorIds:(id)arg1 ;
-(id)initWithUserSettings:(id)arg1 inboxUnitsStore:(id)arg2 queue:(id)arg3 ;
-(void)unhideMontageWithUserId:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

