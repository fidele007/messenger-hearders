/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBLinkedDictionary, NSMutableDictionary;

@interface FBBlockTable : NSObject {

	FBLinkedDictionary* _allBlocks;
	NSMutableDictionary* _blocksByType;
	NSMutableDictionary* _typesByBlockID;

}
-(id)_keyForBlock:(id)arg1 ;
-(id)_blocksForType:(id)arg1 ;
-(id)blockWithID:(id)arg1 ;
-(void)removeBlock:(id)arg1 ;
-(id)blockTypeForBlock:(id)arg1 ;
-(unsigned long long)blockCountForType:(id)arg1 ;
-(id)firstBlockOfType:(id)arg1 ;
-(id)firstBlock;
-(id)blockAfterBlock:(id)arg1 ;
-(void)addBlock:(id)arg1 ofType:(id)arg2 ;
-(id)init;
-(unsigned long long)blockCount;
-(id)lastBlock;
@end

