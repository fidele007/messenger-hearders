/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class FBUserSession, NSString, NSArray;

@interface FBSimpleSearchTypeaheadRequest : FBNetworkerRequest {

	FBUserSession* _session;
	NSString* _searchSessionID;
	NSString* _queryString;
	unsigned long long _maxResultCount;
	unsigned long long _filterType;
	NSString* _context;
	unsigned long long _profilePictureSize;
	NSString* _listGraphQLID;
	NSArray* _pageCategories;

}

@property (nonatomic,readonly) FBUserSession * session;                          //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchSessionID;                  //@synthesize searchSessionID=_searchSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString;                      //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,readonly) unsigned long long maxResultCount;                //@synthesize maxResultCount=_maxResultCount - In the implementation block
@property (assign,nonatomic) unsigned long long filterType;                      //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,copy) NSString * context;                                   //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long profilePictureSize;              //@synthesize profilePictureSize=_profilePictureSize - In the implementation block
@property (nonatomic,copy) NSString * listGraphQLID;                             //@synthesize listGraphQLID=_listGraphQLID - In the implementation block
@property (nonatomic,copy) NSArray * pageCategories;                             //@synthesize pageCategories=_pageCategories - In the implementation block
-(unsigned long long)profilePictureSize;
-(id)networkRequest;
-(id)initWithCallbackPerformer:(id)arg1 session:(id)arg2 searchSessionID:(id)arg3 context:(id)arg4 queryString:(id)arg5 maxResultCount:(unsigned long long)arg6 ;
-(void)setProfilePictureSize:(unsigned long long)arg1 ;
-(id)_filterString;
-(id)_pageCategoriesString;
-(NSString *)searchSessionID;
-(NSString *)listGraphQLID;
-(void)setListGraphQLID:(NSString *)arg1 ;
-(NSArray *)pageCategories;
-(void)setPageCategories:(NSArray *)arg1 ;
-(NSString *)context;
-(unsigned long long)filterType;
-(void)setContext:(NSString *)arg1 ;
-(void)setFilterType:(unsigned long long)arg1 ;
-(NSString *)queryString;
-(unsigned long long)maxResultCount;
-(FBUserSession *)session;
@end
