/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNFriendListModelControllerDelegate.h>
#import <Messenger/MNSuggestedContactsRetriever.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNFriendListModelController, MNSuggestedContactsRetrieverDelegate;
@class MNUserSortRankPolicy, NSString;

@interface MNNonMessengerContactsRetriever : NSObject <MNFriendListModelControllerDelegate, MNSuggestedContactsRetriever, FBClassProvidable> {

	MNUserSortRankPolicy* _userSortRankPolicy;
	id<MNFriendListModelController> _friendListModelController;
	BOOL _shouldUseInviteEligibilitySorting;
	id<MNSuggestedContactsRetrieverDelegate> _delegate;

}

@property (assign,nonatomic) BOOL shouldUseInviteEligibilitySorting;                                //@synthesize shouldUseInviteEligibilitySorting=_shouldUseInviteEligibilitySorting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSuggestedContactsRetrieverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)friendListModelController:(id)arg1 didLoadConversationPeople:(id)arg2 ;
-(void)startRetrievingSuggestedContacts;
-(void)stopRetrievingSuggestedContacts;
-(void)setShouldUseInviteEligibilitySorting:(BOOL)arg1 ;
-(id)initWithUserSortRankPolicy:(id)arg1 userProvider:(id)arg2 ;
-(BOOL)shouldUseInviteEligibilitySorting;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(void)dealloc;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
@end

