/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPlatformActionOperation.h>

@class NSArray;

@interface FBPlatformActionFetchFriendsOperation : FBPlatformActionOperation {

	NSArray* _friendFBIDs;
	NSArray* _friends;

}

@property (nonatomic,copy,readonly) NSArray * friendFBIDs;              //@synthesize friendFBIDs=_friendFBIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * friends;                  //@synthesize friends=_friends - In the implementation block
-(id)initWithAction:(id)arg1 friendFBIDs:(id)arg2 ;
-(id)defaultErrorMessage;
-(NSArray *)friendFBIDs;
-(void)_addPeopleInFriendsCollection:(id)arg1 withIDs:(id)arg2 toTaggedPeople:(id*)arg3 withUnmatchedIDs:(id*)arg4 ;
-(void)_resolveFriendIds:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_resolveFriendsWithCompletion:(/*^block*/id)arg1 ;
-(id)_processFriendsQueryResponse:(id)arg1 ;
-(void)_resolveAppScopedUserIDs:(id)arg1 completeBlock:(/*^block*/id)arg2 ;
-(void)_resolveTaggableUserIDs:(id)arg1 completeBlock:(/*^block*/id)arg2 ;
-(NSArray *)friends;
-(void)process;
@end

