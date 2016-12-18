/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNFriendListModelControllerDelegate.h>
#import <Messenger/MNOnlineStatusListener.h>
#import <Messenger/MNInboxTopActiveNowContactSubscribing.h>
#import <Messenger/MNInboxTopActiveNowContactStoring.h>

@protocol MNFriendListModelController;
@class NSArray, MNUserSortRankPolicy, MNInboxTopActiveNowContactSubscriberListeningAnnouncer, MNOnlineStatusManager, NSString;

@interface MNInboxTopActiveNowContactSubscriber : NSObject <MNFriendListModelControllerDelegate, MNOnlineStatusListener, MNInboxTopActiveNowContactSubscribing, MNInboxTopActiveNowContactStoring> {

	MNUserSortRankPolicy* _userSortRankPolicy;
	id<MNFriendListModelController> _friendListModelController;
	MNInboxTopActiveNowContactSubscriberListeningAnnouncer* _announcer;
	MNOnlineStatusManager* _onlineStatusManager;
	NSArray* _topActiveNowUserIds;
	NSArray* _topActiveNowContacts;

}

@property (copy) NSArray * topActiveNowContacts;                    //@synthesize topActiveNowContacts=_topActiveNowContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)friendListModelController:(id)arg1 didLoadConversationPeople:(id)arg2 ;
-(void)friendListModelControllerDidStartLoading:(id)arg1 ;
-(void)friendListModelControllerdidFinishLoading:(id)arg1 ;
-(id)initWithUserSortRankPolicy:(id)arg1 friendListModelController:(id)arg2 onlineStatusManager:(id)arg3 ;
-(void)startSubscribingToTopActiveNowContacts;
-(void)_updateTopActiveNowContacts;
-(NSArray *)topActiveNowContacts;
-(void)setTopActiveNowContacts:(NSArray *)arg1 ;
-(void)changedOnlineStatus:(BOOL)arg1 ;
-(void)stop;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

