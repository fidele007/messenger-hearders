/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSuggestedContactsRetriever.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNFriendListModelControllerDelegate.h>

@protocol MNFriendListModelController, MNSuggestedContactsRetrieverDelegate;
@class MNUserSortRankPolicy, MNSuggestedContactsStringConfig, NSString;

@interface MNTopContactsRetriever : NSObject <MNSuggestedContactsRetriever, FBClassProvidable, MNFriendListModelControllerDelegate> {

	id<MNFriendListModelController> _friendListModelController;
	MNUserSortRankPolicy* _userSortRankPolicy;
	MNSuggestedContactsStringConfig* _stringConfig;
	id<MNSuggestedContactsRetrieverDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSuggestedContactsRetrieverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)friendListModelController:(id)arg1 didLoadConversationPeople:(id)arg2 ;
-(void)startRetrievingSuggestedContacts;
-(void)stopRetrievingSuggestedContacts;
-(id)initWithUserSortRankPolicy:(id)arg1 friendListModelController:(id)arg2 suggestedContactsStringConfig:(id)arg3 ;
-(void)setDelegate:(id<MNSuggestedContactsRetrieverDelegate>)arg1 ;
-(void)dealloc;
-(id<MNSuggestedContactsRetrieverDelegate>)delegate;
@end

