/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSectionedDataSourceReading.h>
#import <Messenger/FBSectionedDataSourceWriting.h>

@protocol CKComponentSizeRangeProviding, FBSectionedDataSourceTransformerUpdateHandler;
@class CKComponentDataSource, FBComponentTransactionalDataSourceController, UIView, NSString;

@interface FBSectionedDataSourceTransformer : NSObject <FBSectionedDataSourceReading, FBSectionedDataSourceWriting> {

	CKComponentDataSource* _legacyComponentDataSource;
	FBComponentTransactionalDataSourceController* _transactionalComponentDataSource;
	/*^block*/id _readTransform;
	id<CKComponentSizeRangeProviding> _constraintProvider;
	UIView* _constraintProvidingView;
	BOOL _useTransactionalDataSource;
	id<FBSectionedDataSourceTransformerUpdateHandler> _updateHandler;

}

@property (nonatomic,retain) UIView * constraintProvidingView;                                                    //@synthesize constraintProvidingView=_constraintProvidingView - In the implementation block
@property (assign,nonatomic,__weak) id<FBSectionedDataSourceTransformerUpdateHandler> updateHandler;              //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(long long)numberOfObjectsInSection:(long long)arg1 ;
-(unsigned long long)enqueueChangeset:(const Changeset*)arg1 userInfo:(id)arg2 ;
-(void)enqueueReload;
-(unsigned long long)enqueueChangeset:(const Changeset*)arg1 mode:(unsigned long long)arg2 size:(CGSize)arg3 userInfo:(id)arg4 ;
-(void)enumerateObjectsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithLegacyComponentDataSource:(id)arg1 constraintProvider:(id)arg2 readTransform:(/*^block*/id)arg3 ;
-(id)initWithTransactionalComponentDataSource:(id)arg1 constraintProvider:(id)arg2 readTransform:(/*^block*/id)arg3 ;
-(Changeset*)mapChangeset:(const Changeset*)arg1 ;
-(unsigned long long)enqueueChangeset:(const Changeset*)arg1 mode:(unsigned long long)arg2 ;
-(UIView *)constraintProvidingView;
-(void)setConstraintProvidingView:(UIView *)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(long long)numberOfSections;
-(pair<id<NSObject>, NSIndexPath *>)firstObjectPassingTest:(/*^block*/id)arg1 ;
-(void)setUpdateHandler:(id<FBSectionedDataSourceTransformerUpdateHandler>)arg1 ;
-(id<FBSectionedDataSourceTransformerUpdateHandler>)updateHandler;
@end
