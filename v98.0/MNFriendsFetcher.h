/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNFriendListModelControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNFriendsFetching.h>

@protocol MNFriendListModelController, MNAuthenticationManager, MNFriendsFetcherDelegate;
@class MNUserSortRankPolicy, NSString;

@interface MNFriendsFetcher : NSObject <MNFriendListModelControllerDelegate, FBClassProvidable, MNFriendsFetching> {

	id<MNFriendListModelController> _friendListModelController;
	id<MNAuthenticationManager> _authManager;
	MNUserSortRankPolicy* _userSortRankPolicy;
	id<MNFriendsFetcherDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNFriendsFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)friendListModelController:(id)arg1 didLoadConversationPeople:(id)arg2 ;
-(void)friendListModelControllerDidStartLoading:(id)arg1 ;
-(void)friendListModelControllerdidFinishLoading:(id)arg1 ;
-(id)initWithUserProvider:(id)arg1 userSortRankPolicy:(id)arg2 authManager:(id)arg3 ;
-(void)setDelegate:(id<MNFriendsFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNFriendsFetcherDelegate>)delegate;
-(void)stop;
-(void)start;
@end

