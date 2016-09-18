/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserInfoPhoneNumberFetchRunning.h>

@class NSOperationQueue, FBSyncStore, NSString;

@interface MNSyncEngineUserInfoPhoneNumberFetchRunner : NSObject <MNUserInfoPhoneNumberFetchRunning> {

	NSOperationQueue* _operationQueue;
	FBSyncStore* _syncStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performFetchOperationCompletion:(id)arg1 onMainQueueWithCallback:(/*^block*/id)arg2 ;
-(void)_onFetchOperationCompleted:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)fetchPhoneNumbersWithUserId:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithSyncStore:(id)arg1 ;
@end
