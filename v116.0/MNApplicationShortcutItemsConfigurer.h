/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNFriendListModelControllerDelegate.h>
#import <FBSharedFramework/MNServiceControllable.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol MNFriendListModelController;
@class FBUserSession, FBMobileConfigContextManager, MNUserSortRankPolicy, MNApplicationShortcutOptionalItemsConfiguration, NSArray, NSString;

@interface MNApplicationShortcutItemsConfigurer : NSObject <MNFriendListModelControllerDelegate, MNServiceControllable, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	id<MNFriendListModelController> _topContactsFetcher;
	FBMobileConfigContextManager* _configManager;
	MNUserSortRankPolicy* _userSortRankPolicy;
	MNApplicationShortcutOptionalItemsConfiguration* _optionalItemsConfiguration;
	NSArray* _topContacts;

}

@property (nonatomic,copy) NSArray * topContacts;                   //@synthesize topContacts=_topContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateApplicationShortcuts;
-(id)_applicationShortcutItems;
-(BOOL)_shouldShowCameraShortcut;
-(BOOL)_shouldShowMessengerCodeShortcut;
-(BOOL)_shouldShowPaymentsItem;
-(void)setTopContacts:(NSArray *)arg1 ;
-(NSArray *)topContacts;
-(void)handleIdle;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)friendListModelController:(id)arg1 didLoadConversationPeople:(id)arg2 ;
-(void)friendListModelControllerDidStartLoading:(id)arg1 ;
-(void)friendListModelControllerdidFinishLoading:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
@end

