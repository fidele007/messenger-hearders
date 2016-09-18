/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPersonSyncTerribleNetworkerRequestOperation.h>

@protocol FBFullSyncOperationDelegate;
@class FBContactsFetchContext;

@interface FBFQLFullSyncOperation : FBPersonSyncTerribleNetworkerRequestOperation {

	id<FBFullSyncOperationDelegate> _delegate;
	FBContactsFetchContext* _previousContext;

}

@property (assign,nonatomic,__weak) id<FBFullSyncOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBContactsFetchContext * previousContext;                     //@synthesize previousContext=_previousContext - In the implementation block
-(id)_syncEventsForResponse:(id)arg1 ;
-(void)requestSucceededWithResponse:(id)arg1 ;
-(void)requestFailedWithError:(id)arg1 ;
-(FBContactsFetchContext *)previousContext;
-(void)setPreviousContext:(FBContactsFetchContext *)arg1 ;
-(void)setDelegate:(id<FBFullSyncOperationDelegate>)arg1 ;
-(id<FBFullSyncOperationDelegate>)delegate;
-(id)request;
@end

