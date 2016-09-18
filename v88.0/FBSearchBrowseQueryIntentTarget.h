/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, NSArray;

@interface FBSearchBrowseQueryIntentTarget : FBIntentTarget {

	NSString* _title;
	NSString* _queryFunction;
	NSString* _resultType;
	NSString* _typeaheadSessionID;
	NSString* _candidateSessionID;
	NSString* _source;
	NSArray* _tabs;
	unsigned long long _selectedTabIndex;

}

@property (nonatomic,readonly) FBMemModelObject*<FBAvatarProtocol> scopedSearchScopeEntity; 
@property (nonatomic,copy,readonly) NSString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryFunction;                                            //@synthesize queryFunction=_queryFunction - In the implementation block
@property (nonatomic,copy,readonly) NSString * resultType;                                               //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeaheadSessionID;                                       //@synthesize typeaheadSessionID=_typeaheadSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * candidateSessionID;                                       //@synthesize candidateSessionID=_candidateSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                                                   //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tabs;                                                      //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedTabIndex;                                      //@synthesize selectedTabIndex=_selectedTabIndex - In the implementation block
+(id)browseQueryResultWithTitle:(id)arg1 queryFunction:(id)arg2 resultType:(id)arg3 typeaheadSessionID:(id)arg4 candidateSessionID:(id)arg5 source:(id)arg6 ;
+(id)browseQueryResultWithTitle:(id)arg1 queryFunction:(id)arg2 resultType:(id)arg3 typeaheadSessionID:(id)arg4 candidateSessionID:(id)arg5 source:(id)arg6 scopedSearchScopeEntity:(id)arg7 ;
+(id)browseQueryResultWithTitle:(id)arg1 tabs:(id)arg2 selectedTabIndex:(unsigned long long)arg3 source:(id)arg4 ;
-(id)fallbackURLs;
-(unsigned long long)selectedTabIndex;
-(NSString *)typeaheadSessionID;
-(FBMemModelObject*<FBAvatarProtocol>)scopedSearchScopeEntity;
-(NSString *)queryFunction;
-(NSString *)candidateSessionID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)source;
-(NSString *)title;
-(NSString *)resultType;
-(NSArray *)tabs;
@end

