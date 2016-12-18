/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(NSMutableArray *)allResults;
-(void)setAllResults:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)indexedResultKey;
-(void)setIndexedResultKey:(NSMutableDictionary *)arg1 ;
@end

