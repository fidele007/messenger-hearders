/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, NSArray;

@interface FBSearchBrowseQueryIntentTarget : FBIntentTarget {

	BOOL _popToTypeahead;
	NSString* _title;
	NSString* _queryFunction;
	NSString* _displayStyle;
	NSString* _typeaheadSessionID;
	NSString* _candidateSessionID;
	NSString* _source;
	NSArray* _filters;
	NSArray* _preloadedStoryIDs;
	NSArray* _tabs;
	unsigned long long _selectedTabIndex;

}

@property (nonatomic,readonly) FBMemModelObject*<FBAvatarProtocol> scopedSearchScopeEntity; 
@property (nonatomic,copy,readonly) NSString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryFunction;                                            //@synthesize queryFunction=_queryFunction - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayStyle;                                             //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeaheadSessionID;                                       //@synthesize typeaheadSessionID=_typeaheadSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * candidateSessionID;                                       //@synthesize candidateSessionID=_candidateSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                                                   //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filters;                                                   //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preloadedStoryIDs;                                         //@synthesize preloadedStoryIDs=_preloadedStoryIDs - In the implementation block
@property (nonatomic,readonly) BOOL popToTypeahead;                                                      //@synthesize popToTypeahead=_popToTypeahead - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tabs;                                                      //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedTabIndex;                                      //@synthesize selectedTabIndex=_selectedTabIndex - In the implementation block
+(id)browseQueryResultWithTitle:(id)arg1 queryFunction:(id)arg2 displayStyle:(id)arg3 typeaheadSessionID:(id)arg4 candidateSessionID:(id)arg5 source:(id)arg6 ;
+(id)browseQueryResultWithTitle:(id)arg1 queryFunction:(id)arg2 displayStyle:(id)arg3 typeaheadSessionID:(id)arg4 candidateSessionID:(id)arg5 source:(id)arg6 scopedSearchScopeEntity:(id)arg7 ;
+(id)browseQueryResultWithTitle:(id)arg1 queryFunction:(id)arg2 displayStyle:(id)arg3 source:(id)arg4 filters:(id)arg5 preloadedStoryIDs:(id)arg6 popToTypeahead:(BOOL)arg7 ;
+(id)browseQueryResultWithTitle:(id)arg1 tabs:(id)arg2 selectedTabIndex:(unsigned long long)arg3 source:(id)arg4 ;
-(id)fallbackURLs;
-(unsigned long long)selectedTabIndex;
-(NSString *)typeaheadSessionID;
-(FBMemModelObject*<FBAvatarProtocol>)scopedSearchScopeEntity;
-(NSString *)queryFunction;
-(NSString *)candidateSessionID;
-(NSArray *)preloadedStoryIDs;
-(BOOL)popToTypeahead;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)source;
-(NSString *)title;
-(NSArray *)filters;
-(NSString *)displayStyle;
-(NSArray *)tabs;
@end
