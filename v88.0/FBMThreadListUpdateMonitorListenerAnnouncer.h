/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBMThreadListUpdateMonitorListener.h>

@class NSString;

@interface FBMThreadListUpdateMonitorListenerAnnouncer : FBAnnouncerBase <FBMThreadListUpdateMonitorListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)threadListNeedsReload;
-(void)threadListDidChangeRowsWithLocalThreadKeys:(id)arg1 ;
-(void)threadListWillUpdateThreadWithLocalThreadKey:(id)arg1 action:(long long)arg2 ;
-(void)threadListFailedToUpdateThreadWithLocalThreadKey:(id)arg1 action:(long long)arg2 error:(id)arg3 ;
-(void)threadListWillUpdateBatchWithLocalThreadKeys:(id)arg1 action:(long long)arg2 ;
-(void)threadListFailedToUpdateBatchWithLocalThreadKeys:(id)arg1 action:(long long)arg2 error:(id)arg3 ;
-(void)threadListWillDeleteAllThreads:(long long)arg1 ;
-(void)threadListFailedToDeleteAllThreads:(long long)arg1 error:(id)arg2 ;
-(void)threadListFetchWillStartWithFetchType:(unsigned long long)arg1 ;
-(void)threadListFetchDidSucceedWithType:(unsigned long long)arg1 ;
-(void)threadListFetchDidFailWithType:(unsigned long long)arg1 error:(id)arg2 ;
-(void)threadListAdditionalInformationUpdated;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

