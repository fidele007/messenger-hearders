/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCancelable;
@class FBComponentCollectionViewDataSource, FBComponentTableViewDataSource;

@interface FBComponentDataSourceItemViewStateRecorder : NSObject {

	FBComponentCollectionViewDataSource* _componentCollectionViewDataSource;
	FBComponentTableViewDataSource* _componentTableViewDataSource;
	/*function pointer*/void* _itemViewStateIdentifierFactory;
	id<FBCancelable> _cancelableToken;

}
-(id)recordItemViewStates;
-(void)_scheduleRetryAttemptWithNumberOfRetriesRemaining:(long long)arg1 retryInterval:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)recordItemViewStatesWithNumberOfRetries:(long long)arg1 retryInterval:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithComponentCollectionViewDataSource:(id)arg1 itemViewStateIdentifierFactory:(/*function pointer*/void*)arg2 ;
-(id)initWithComponentTableViewDataSource:(id)arg1 itemViewStateIdentifierFactory:(/*function pointer*/void*)arg2 ;
@end

