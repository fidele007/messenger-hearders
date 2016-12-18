/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMThreadListUpdateMonitorListener <NSObject>
@required
-(void)threadListNeedsReload;
-(void)threadListDidChangeRowsWithLocalThreadKeys:(id)arg1;
-(void)threadListWillUpdateThreadWithLocalThreadKey:(id)arg1 action:(long long)arg2;
-(void)threadListFailedToUpdateThreadWithLocalThreadKey:(id)arg1 action:(long long)arg2 error:(id)arg3;
-(void)threadListWillUpdateBatchWithLocalThreadKeys:(id)arg1 action:(long long)arg2;
-(void)threadListFailedToUpdateBatchWithLocalThreadKeys:(id)arg1 action:(long long)arg2 error:(id)arg3;
-(void)threadListWillDeleteAllThreads:(long long)arg1;
-(void)threadListFailedToDeleteAllThreads:(long long)arg1 error:(id)arg2;
-(void)threadListFetchWillStartWithFetchType:(unsigned long long)arg1;
-(void)threadListFetchDidSucceedWithType:(unsigned long long)arg1;
-(void)threadListFetchDidFailWithType:(unsigned long long)arg1 error:(id)arg2;
-(void)threadListAdditionalInformationUpdated;

@end

