/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNEmojiFontPolicyListening.h>
#import <Messenger/MNFrequentlyUsedEmojisStoring.h>
#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol OS_dispatch_queue;
@class NSObject, MNFrequentlyUsedEmojisStore, MNNonDiscardingBlobStore, NSString;

@interface MNFrequentlyUsedEmojisStoreService : NSObject <MNEmojiFontPolicyListening, MNFrequentlyUsedEmojisStoring, MNServiceControllable, FBViewerContextClassProvidable> {

	NSObject*<OS_dispatch_queue> _queue;
	MNFrequentlyUsedEmojisStore* _frequentlyUsedEmojisStore;
	MNNonDiscardingBlobStore* _blobStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)shouldUseMessengerEmojiFontValueDidUpdate:(BOOL)arg1 ;
-(void)incrementUsageCounterForEmoji:(id)arg1 ;
-(id)frequentlyUsedEmojis;
-(void)applyDefaultFrequentlyUsedEmojis:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
