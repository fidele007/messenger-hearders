/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMediaItemUploadFlowSchedulingLimiter : NSObject {

	long long _numOfItemsInUploadQueue;
	long long _numOfItemsInProcessingStep;
	long long _uploadItemsLimit;
	long long _itemsInProcessingStepLimit;
	long long _currentNetworkPenalty;
	int _priority;

}
-(id)initWithPriorityStatus:(int)arg1 ;
-(void)releaseResourceForProcessingQueue;
-(void)itemUploadDidSuceeded;
-(void)releaseResourceForUploadingQueue;
-(void)itemUploadDidFail;
-(void)setupSchedulingLimitsWith:(int)arg1 ;
-(unsigned long long)numOfItemsToSchedule;
-(void)didScheduleItem;
-(unsigned long long)numOfItemsToUpload;
-(void)didAddItemToUploadQueue;
-(id)description;
@end

