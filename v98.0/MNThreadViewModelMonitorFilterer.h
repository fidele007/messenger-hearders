/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadViewModelUpdateMonitorListening.h>

@protocol MNThreadViewModelUpdateMonitorListening;
@class FBMThreadKey, NSString;

@interface MNThreadViewModelMonitorFilterer : NSObject <MNThreadViewModelUpdateMonitorListening> {

	FBMThreadKey* _threadKey;
	id<MNThreadViewModelUpdateMonitorListening> _targetListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageSetForThreadWithKeyWasUpdated:(id)arg1 isDueToIncomingMessageInsert:(BOOL)arg2 ;
-(void)viewModelForThreadSummaryWithKeyWasUpdated:(id)arg1 isDueToViewerAction:(BOOL)arg2 ;
-(void)threadWithKeyWasDeleted:(id)arg1 isDueToViewerAction:(BOOL)arg2 ;
-(void)allSecureThreadsWereUpdated;
-(id)initWithThreadKey:(id)arg1 targetListener:(id)arg2 ;
@end

