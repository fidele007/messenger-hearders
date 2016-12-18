/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPersonSyncTerribleNetworkerRequestOperation.h>

@protocol FBSingleUserSyncOperationDelegate;
@class NSString;

@interface FBGraphQLSingleUserSyncOperation : FBPersonSyncTerribleNetworkerRequestOperation {

	NSString* _userId;
	id<FBSingleUserSyncOperationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSingleUserSyncOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)requestSucceededWithResponse:(id)arg1 ;
-(void)requestFailedWithError:(id)arg1 ;
-(id)initWithNetworker:(id)arg1 userId:(id)arg2 ;
-(void)setDelegate:(id<FBSingleUserSyncOperationDelegate>)arg1 ;
-(id<FBSingleUserSyncOperationDelegate>)delegate;
-(id)request;
@end

