/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPersonSyncTerribleNetworkerRequestOperation.h>

@protocol FBFullSyncOperationDelegate;
@class FBContactsFetchContext;

@interface FBGraphQLFullSyncOperation : FBPersonSyncTerribleNetworkerRequestOperation {

	FBContactsFetchContext* _previousContext;
	id<FBFullSyncOperationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFullSyncOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithNetworker:(id)arg1 previousContext:(id)arg2 ;
-(void)requestSucceededWithResponse:(id)arg1 ;
-(void)requestFailedWithError:(id)arg1 ;
-(BOOL)_shouldMakeFavoritesRequest;
-(id)_syncRequest;
-(id)_favoritesRequest;
-(id)_parseResponse:(id)arg1 error:(id*)arg2 ;
-(void)setDelegate:(id<FBFullSyncOperationDelegate>)arg1 ;
-(id<FBFullSyncOperationDelegate>)delegate;
-(id)request;
@end

