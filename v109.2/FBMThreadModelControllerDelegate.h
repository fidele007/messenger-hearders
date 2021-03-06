/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMThreadModelControllerDelegate <NSObject>
@required
-(void)threadModelController:(id)arg1 willFetchWithOptions:(unsigned long long)arg2;
-(void)threadModelControllerDidFinishFetch:(id)arg1;
-(void)threadModelControllerDidFinishDeltaRequest:(id)arg1;
-(void)threadModelControllerDidFailFetch:(id)arg1 error:(id)arg2;
-(void)threadModelControllerDidFinishProcessingSyncProtocolDeltas:(id)arg1;
-(void)threadModelControllerDidFinishFetchAdditionalInformation:(id)arg1;
-(void)threadModelControllerDidFailToFetchAdditionalInformation:(id)arg1;
-(void)threadModelController:(id)arg1 willDeleteBatchThreadsWithThreadKeys:(id)arg2;
-(void)threadModelController:(id)arg1 didFinishDeleteBatchWithSuccessfulKeys:(id)arg2 failedKeys:(id)arg3;
-(void)threadModelController:(id)arg1 didFailToDeleteBatchThreadsWithThreadKeys:(id)arg2 error:(id)arg3;
-(void)threadModelController:(id)arg1 willIgnoreBatchThreadsWithThreadKeys:(id)arg2;
-(void)threadModelController:(id)arg1 didFinishIgnoreBatchWithSuccessfulKeys:(id)arg2 failedKeys:(id)arg3;
-(void)threadModelController:(id)arg1 didFailToIgnoreBatchThreadsWithThreadKeys:(id)arg2 error:(id)arg3;
-(void)threadModelController:(id)arg1 willUpdateThreadWithKey:(id)arg2 update:(id)arg3;
-(void)threadModelController:(id)arg1 didUpdateThreadWithKey:(id)arg2 update:(id)arg3;
-(void)threadModelController:(id)arg1 didFailToUpdateThreadWithKey:(id)arg2 update:(id)arg3 error:(id)arg4;

@end

