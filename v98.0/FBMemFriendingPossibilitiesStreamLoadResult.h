/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStreamLoadResult.h>

@class FBMemFriendingPossibilitiesConnection;

@interface FBMemFriendingPossibilitiesStreamLoadResult : FBStreamLoadResult {

	FBMemFriendingPossibilitiesConnection* _connectionPage;

}

@property (nonatomic,readonly) FBMemFriendingPossibilitiesConnection * connectionPage;              //@synthesize connectionPage=_connectionPage - In the implementation block
-(FBMemFriendingPossibilitiesConnection *)connectionPage;
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasNextPage:(BOOL)arg3 connectionPage:(id)arg4 ;
@end
