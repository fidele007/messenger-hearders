/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBContactSyncSnapshot : NSObject {

	NSMutableDictionary* _allHashes;

}
+(id)retrieveSnapshotWithContentsOfFile:(id)arg1 ;
-(id)getAllHashes;
-(id)initWithHashes:(id)arg1 ;
-(void)setHash:(id)arg1 withRecordId:(unsigned long long)arg2 ;
-(id)getHashWithRecordId:(unsigned long long)arg1 ;
-(void)enumerateSnapshotItemsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
@end
