/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSimpleSearchDataSourceDelegate.h>
#import <Messenger/FBSimpleSearchTaggingProviderProtocol.h>

@class NSString, FBSimpleSearchGroupTaggingDataSource, NSArray, NSSet, FBUserSession;

@interface FBSimpleSearchGroupTaggingProvider : NSObject <FBSimpleSearchDataSourceDelegate, FBSimpleSearchTaggingProviderProtocol> {

	NSString* _query;
	FBSimpleSearchGroupTaggingDataSource* _dataSource;
	/*^block*/id _completionHandler;
	/*^block*/id _errorHandler;
	BOOL _canTagSelf;
	BOOL _fetchingResults;
	NSArray* _avatarCollections;
	NSSet* _excludedIDs;
	NSString* _loggingSessionID;
	FBUserSession* _session;
	NSString* _authorType;
	NSString* _groupID;

}

@property (nonatomic,copy) NSString * authorType;                                          //@synthesize authorType=_authorType - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                             //@synthesize groupID=_groupID - In the implementation block
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
-(BOOL)isFetchingResults;
-(BOOL)shouldCreateTaggableUserCollectionForTargetType:(id)arg1 ;
-(void)setAvatarCollections:(NSArray *)arg1 ;
-(void)setCanTagSelf:(BOOL)arg1 ;
-(void)setLoggingSessionID:(NSString *)arg1 ;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 explicitMention:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 errorHandler:(/*^block*/id)arg6 ;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)avatarCollections;
-(BOOL)canTagSelf;
-(NSSet *)excludedIDs;
-(void)setExcludedIDs:(NSSet *)arg1 ;
-(NSString *)loggingSessionID;
-(BOOL)isFetchingGroupMembers;
-(void)simpleSearchDataSource:(id)arg1 didUpdateSuggestions:(id)arg2 isLoading:(BOOL)arg3 ;
-(void)simpleSearchDataSource:(id)arg1 didFailUpdateWithError:(id)arg2 ;
-(id)initWithCollections:(id)arg1 canTagSelf:(BOOL)arg2 session:(id)arg3 scenePath:(id)arg4 ;
-(NSString *)authorType;
-(void)setAuthorType:(NSString *)arg1 ;
-(FBUserSession *)session;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
@end

