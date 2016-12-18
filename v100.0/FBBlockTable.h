/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(id)blockTypeForBlock:(id)arg1 ;
-(void)addBlock:(id)arg1 ofType:(id)arg2 ;
-(void)removeBlock:(id)arg1 ;
-(id)blockWithID:(id)arg1 ;
-(id)firstBlock;
-(id)firstBlockOfType:(id)arg1 ;
-(id)blockAfterBlock:(id)arg1 ;
-(unsigned long long)blockCountForType:(id)arg1 ;
-(id)init;
-(unsigned long long)blockCount;
-(id)lastBlock;
@end
