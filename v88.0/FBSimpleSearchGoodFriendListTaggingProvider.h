/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSimpleSearchTaggingProviderProtocol.h>

@class NSString, FBTaggableCollection, FBUserSession, NSArray, NSSet;

@interface FBSimpleSearchGoodFriendListTaggingProvider : NSObject <FBSimpleSearchTaggingProviderProtocol> {

	BOOL _canTagSelf;
	FBTaggableCollection* _collection;
	/*^block*/id _completionHandler;
	NSString* _authorID;
	NSString* _authorGraphQLType;
	NSString* _targetID;
	FBUserSession* _session;
	BOOL _fetchingResults;
	NSArray* _avatarCollections;
	NSSet* _excludedIDs;
	NSString* _loggingSessionID;
	NSString* _authorType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * avatarCollections;                                    //@synthesize avatarCollections=_avatarCollections - In the implementation block
@property (nonatomic,readonly) BOOL canTagSelf;                                            //@synthesize canTagSelf=_canTagSelf - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSSet * excludedIDs;                                            //@synthesize excludedIDs=_excludedIDs - In the implementation block
@property (getter=isFetchingResults,nonatomic,readonly) BOOL fetchingResults;              //@synthesize fetchingResults=_fetchingResults - In the implementation block
@property (nonatomic,copy) NSString * loggingSessionID;                                    //@synthesize loggingSessionID=_loggingSessionID - In the implementation block
@property (nonatomic,copy) NSString * authorType;                                          //@synthesize authorType=_authorType - In the implementation block
-(BOOL)isFetchingResults;
-(BOOL)shouldCreateTaggableUserCollectionForTargetType:(id)arg1 ;
-(void)setAvatarCollections:(NSArray *)arg1 ;
-(id)initWithAuthorID:(id)arg1 authorGraphQLType:(id)arg2 canTagSelf:(BOOL)arg3 session:(id)arg4 ;
-(void)setLoggingSessionID:(NSString *)arg1 ;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 explicitMention:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 errorHandler:(/*^block*/id)arg6 ;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)avatarCollections;
-(BOOL)canTagSelf;
-(NSSet *)excludedIDs;
-(void)setExcludedIDs:(NSSet *)arg1 ;
-(NSString *)loggingSessionID;
-(void)_loadTaggableCollectionForFriendList:(id)arg1 ;
-(void)_notifyCompletionHandlerIfNeeded;
-(NSString *)authorType;
-(void)setAuthorType:(NSString *)arg1 ;
-(FBUserSession *)session;
@end

