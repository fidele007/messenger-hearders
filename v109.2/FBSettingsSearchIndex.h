/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSMutableArray, NSMutableDictionary;

@interface FBSettingsSearchIndex : NSObject {

	NSArray* _cachedPreviousResult;
	NSString* _cachedPreviousSearchText;
	NSMutableArray* _allResults;
	NSMutableDictionary* _indexedResultKey;

}

@property (nonatomic,retain) NSMutableArray * allResults;                         //@synthesize allResults=_allResults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * indexedResultKey;              //@synthesize indexedResultKey=_indexedResultKey - In the implementation block
-(id)initWithSettingsSchema:(id)arg1 ;
-(void)addSearchResultActions:(id)arg1 ;
-(id)searchResultActionsForSearchText:(id)arg1 ;
-(void)_performIndexingWithSchema:(id)arg1 results:(id)arg2 indexedResultKey:(id)arg3 searchResultIndexPaths:(id)arg4 ;
-(void)addSubSearchIndexableDataSource:(id)arg1 fromParentSearchResultKey:(id)arg2 ;
-(NSMutableDictionary *)indexedResultKey;
-(void)setIndexedResultKey:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)allResults;
-(void)setAllResults:(NSMutableArray *)arg1 ;
@end

