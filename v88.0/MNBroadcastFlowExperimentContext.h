/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNBroadcastFlowExperimentContext : FBExperimentContext {

	BOOL _shouldShowGroupButton;
	BOOL _shouldShowSingleTapButton;
	BOOL _shouldShowCustomMessageView;
	BOOL _isActionButtonCancelable;
	long long _broadcastFlowSuggestedRecipientsRetrieverType;
	double _cancelableTimeWindow;

}

@property (nonatomic,readonly) BOOL shouldShowGroupButton;                                           //@synthesize shouldShowGroupButton=_shouldShowGroupButton - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSingleTapButton;                                       //@synthesize shouldShowSingleTapButton=_shouldShowSingleTapButton - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCustomMessageView;                                     //@synthesize shouldShowCustomMessageView=_shouldShowCustomMessageView - In the implementation block
@property (nonatomic,readonly) long long broadcastFlowSuggestedRecipientsRetrieverType;              //@synthesize broadcastFlowSuggestedRecipientsRetrieverType=_broadcastFlowSuggestedRecipientsRetrieverType - In the implementation block
@property (nonatomic,readonly) BOOL isActionButtonCancelable;                                        //@synthesize isActionButtonCancelable=_isActionButtonCancelable - In the implementation block
@property (nonatomic,readonly) double cancelableTimeWindow;                                          //@synthesize cancelableTimeWindow=_cancelableTimeWindow - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)shouldShowCustomMessageView;
-(BOOL)shouldShowGroupButton;
-(BOOL)shouldShowSingleTapButton;
-(BOOL)isActionButtonCancelable;
-(double)cancelableTimeWindow;
-(long long)broadcastFlowSuggestedRecipientsRetrieverType;
@end

