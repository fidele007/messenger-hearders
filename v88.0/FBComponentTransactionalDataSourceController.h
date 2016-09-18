/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBComponentTransactionalDataSourceOutputHandlerDelegate.h>
#import <Messenger/CKComponentSuspendable.h>

@protocol FBComponentTransactionalDataSourceControllerDelegate;
@class CKTransactionalComponentDataSourceConfiguration, CKTransactionalComponentDataSource, FBComponentTransactionalDataSourceOutputHandler, FBComponentTransactionalDataSourceListener, CKTransactionalComponentDataSourceState, NSString;

@interface FBComponentTransactionalDataSourceController : NSObject <FBComponentTransactionalDataSourceOutputHandlerDelegate, CKComponentSuspendable> {

	CKTransactionalComponentDataSourceConfiguration* _transactionalDataSourceConfiguration;
	CKTransactionalComponentDataSource* _transactionalDataSource;
	FBComponentTransactionalDataSourceOutputHandler* _outputHandler;
	FBComponentTransactionalDataSourceListener* _transactionalDataSourceListener;
	BOOL _firstChangesetReceived;
	unsigned long long _updateMode;
	CKTransactionalComponentDataSourceState* _dataSourceState;
	id<FBComponentTransactionalDataSourceControllerDelegate> _delegate;

}

@property (nonatomic,readonly) CKTransactionalComponentDataSourceState * dataSourceState;                           //@synthesize dataSourceState=_dataSourceState - In the implementation block
@property (nonatomic,readonly) BOOL isComputingChanges; 
@property (assign,nonatomic,__weak) id<FBComponentTransactionalDataSourceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,readonly) BOOL hasPendingChanges; 
-(id)initWithComponentProvider:(Class)arg1 context:(id)arg2 constrainedSize:(const CKSizeRange*)arg3 ;
-(BOOL)isComputingChanges;
-(void)updateContext:(id)arg1 constrainedSize:(CKSizeRange)arg2 ;
-(void)setSynchronouslyPrepareChangesets_DO_NOT_USE:(BOOL)arg1 ;
-(void)addPreparationQueueListener:(id)arg1 ;
-(void)removePreparationQueueListener:(id)arg1 ;
-(CKTransactionalComponentDataSourceState *)dataSourceState;
-(void)applyChangeset:(id)arg1 constrainedSize:(CKSizeRange)arg2 userInfo:(id)arg3 ;
-(void)resetSuspensionState;
-(void)emitChanges:(id)arg1 state:(id)arg2 previousState:(id)arg3 finalIndexPathsForUpdatedItems:(id)arg4 ;
-(id)transactionalDataSource;
-(void)addTransactionalDataSourceListener:(id)arg1 ;
-(void)removeTransactionalDataSourceListener:(id)arg1 ;
-(void)setDelegate:(id<FBComponentTransactionalDataSourceControllerDelegate>)arg1 ;
-(void)reload;
-(id<FBComponentTransactionalDataSourceControllerDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)hasPendingChanges;
@end

