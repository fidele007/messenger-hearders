/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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

