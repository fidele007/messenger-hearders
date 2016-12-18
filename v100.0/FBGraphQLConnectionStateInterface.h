/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLConnectionStateInterface <NSObject>
@required
-(id)headConnectionLocation;
-(id)tailConnectionLocation;
-(id)edgesInChunkAtIndex:(unsigned long long)arg1;
-(id)edgesAtIndexPaths:(id)arg1;
-(id)edgesInAllChunks;
-(unsigned long long)numberOfChunks;
-(void)enumerateEdgesUsingBlock:(/*^block*/id)arg1;
-(void)enumerateEdgesInChunk:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2;
-(id)initialConnectionLocation;
-(id)connectionChunkAtIndex:(unsigned long long)arg1;
-(void)enumerateConnectionChunksUsingBlock:(/*^block*/id)arg1;
-(id)connectionStateByRemovingChunksAtIndexes:(id)arg1;
-(void)enumerateEdgesAtIndexPaths:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end

