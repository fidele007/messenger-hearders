/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLConnectionChunkInterface.h>

@class NSArray, FBGraphQLConnectionStoreLocation, NSString;

@interface FBGraphQLConnectionStoreChunk : NSObject <FBGraphQLConnectionChunkInterface> {

	NSArray* _edges;
	vector<SubPageInfo, std::__1::allocator<SubPageInfo> >* _underlyingPageInfo;
	FBGraphQLConnectionStoreLocation* _beforeLocation;
	FBGraphQLConnectionStoreLocation* _afterLocation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)chunkWithEdges:(id)arg1 pageInfo:(id)arg2 ;
-(id)afterLocation;
-(id)beforeLocation;
-(id)chunkWithUpdatedEdges:(id)arg1 ;
-(id)beforeConnectionLocation;
-(id)afterConnectionLocation;
-(void)enumeratePagesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithEdges:(id)arg1 underlyingSubPageInfo:(vector<SubPageInfo, std::__1::allocator<SubPageInfo> >*)arg2 beforeLocation:(id)arg3 afterLocation:(id)arg4 ;
-(id)chunkByAddingEdges:(id)arg1 atIndexes:(id)arg2 ;
-(id)chunkByRemovingEdgesAtIndexes:(id)arg1 ;
-(id)chunkWithUpdatedBeforeLocation:(id)arg1 ;
-(id)chunkWithUpdatedAfterLocation:(id)arg1 ;
-(id)chunkWithUpdatedHasPreviousPage:(BOOL)arg1 startCursor:(id)arg2 ;
-(id)chunkByPrependingEdges:(id)arg1 withPageInfo:(id)arg2 ;
-(id)chunkWithUpdatedHasNextPage:(BOOL)arg1 endCursor:(id)arg2 ;
-(id)chunkByAppendingEdges:(id)arg1 withPageInfo:(id)arg2 ;
-(id)chunkByAppendingChunk:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)edges;
@end
