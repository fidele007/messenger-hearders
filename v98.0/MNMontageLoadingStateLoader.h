/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSingleViewModelLoading.h>

@protocol OS_dispatch_queue, MNMontageLoadingStateQuerying;
@class NSObject, MNViewModelElementKey, NSString;

@interface MNMontageLoadingStateLoader : NSObject <MNSingleViewModelLoading> {

	NSObject*<OS_dispatch_queue> _queue;
	MNViewModelElementKey* _viewModelElementKey;
	id<MNMontageLoadingStateQuerying> _loadingStateQuerier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(id)initWithQueue:(id)arg1 viewModelElementKey:(id)arg2 loadingStateQuerier:(id)arg3 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end
