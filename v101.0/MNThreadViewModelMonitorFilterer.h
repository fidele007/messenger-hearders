/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
-(id)initWithThreadKey:(id)arg1 targetListener:(id)arg2 ;
-(void)viewModelForThreadSummaryWithKeyWasUpdated:(id)arg1 isDueToViewerAction:(BOOL)arg2 ;
-(void)threadWithKeyWasDeleted:(id)arg1 isDueToViewerAction:(BOOL)arg2 ;
-(void)messageSetForThreadWithKeyWasUpdated:(id)arg1 isDueToIncomingMessageInsert:(BOOL)arg2 ;
-(void)allSecureThreadsWereUpdated;
@end
