/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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

