/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMutableSortedSet, NSArray;

@interface FBMagicStoryCollectionCache : NSObject {

	FBMutableSortedSet* _sortedCollections;
	unsigned long long _maxItemCount;

}

@property (nonatomic,copy,readonly) NSArray * collections; 
-(void)removeAllCollections;
-(BOOL)addCollection:(id)arg1 ;
-(id)initWithComparator:(/*^block*/id)arg1 maxItemCount:(unsigned long long)arg2 ;
-(NSArray *)collections;
@end

