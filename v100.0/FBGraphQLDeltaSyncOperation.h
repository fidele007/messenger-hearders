/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPersonSyncTerribleNetworkerRequestOperation.h>

@protocol FBDeltaSyncOperationDelegate;
@class FBContactsFetchContext;

@interface FBGraphQLDeltaSyncOperation : FBPersonSyncTerribleNetworkerRequestOperation {

	FBContactsFetchContext* _previousContext;
	id<FBDeltaSyncOperationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBDeltaSyncOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithNetworker:(id)arg1 previousContext:(id)arg2 ;
-(void)requestSucceededWithResponse:(id)arg1 ;
-(void)requestFailedWithError:(id)arg1 ;
-(void)setDelegate:(id<FBDeltaSyncOperationDelegate>)arg1 ;
-(id<FBDeltaSyncOperationDelegate>)delegate;
-(id)request;
@end
