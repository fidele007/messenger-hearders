/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStreamResponseHandler.h>

@protocol FBGraphQLConnectionInterface;
@class FBGraphQLConnectionInsertionLocation, FBGraphQLConsistentLookasideCache;

@interface FBMemFriendingPossibilitiesStreamResponseHandler : FBStreamResponseHandler {

	id<FBGraphQLConnectionInterface> _connection;
	FBGraphQLConnectionInsertionLocation* _insertionLocation;
	FBGraphQLConsistentLookasideCache* _consistentLookasideCache;

}
-(void)processResponse:(id)arg1 forRequest:(id)arg2 inDownloadRequest:(id)arg3 isLastResponse:(BOOL)arg4 responseUUID:(id)arg5 status:(id)arg6 ;
-(void)processCancelledRequest:(id)arg1 status:(id)arg2 ;
-(void)processFailedRequest:(id)arg1 error:(id)arg2 status:(id)arg3 ;
-(id)processResponse:(id)arg1 forQuery:(id)arg2 ;
-(id)_parseFriendingPossibilitiesSequenceFromResponse:(id)arg1 query:(id)arg2 error:(id*)arg3 ;
-(id)initWithTargetID:(id)arg1 loadType:(unsigned long long)arg2 parser:(id)arg3 connection:(id)arg4 consistentLookasideCache:(id)arg5 analytics:(id)arg6 insertionLocation:(id)arg7 ;
@end

