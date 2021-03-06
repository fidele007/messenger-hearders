/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNCaptionPreviewViewControllerConfiguration;

@interface MNForwardMessageViewControllerConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowGroupButton;
	BOOL _shouldShowSingleTapButtonIfPossible;
	BOOL _isActionButtonCancelable;
	MNCaptionPreviewViewControllerConfiguration* _captionPreviewViewControllerConfiguration;
	double _cancelableTimeWindow;

}

@property (nonatomic,readonly) BOOL shouldShowGroupButton;                                                                                //@synthesize shouldShowGroupButton=_shouldShowGroupButton - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSingleTapButtonIfPossible;                                                                  //@synthesize shouldShowSingleTapButtonIfPossible=_shouldShowSingleTapButtonIfPossible - In the implementation block
@property (nonatomic,copy,readonly) MNCaptionPreviewViewControllerConfiguration * captionPreviewViewControllerConfiguration;              //@synthesize captionPreviewViewControllerConfiguration=_captionPreviewViewControllerConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL isActionButtonCancelable;                                                                             //@synthesize isActionButtonCancelable=_isActionButtonCancelable - In the implementation block
@property (nonatomic,readonly) double cancelableTimeWindow;                                                                               //@synthesize cancelableTimeWindow=_cancelableTimeWindow - In the implementation block
-(id)initWithShouldShowGroupButton:(BOOL)arg1 shouldShowSingleTapButtonIfPossible:(BOOL)arg2 captionPreviewViewControllerConfiguration:(id)arg3 isActionButtonCancelable:(BOOL)arg4 cancelableTimeWindow:(double)arg5 ;
-(BOOL)shouldShowGroupButton;
-(BOOL)shouldShowSingleTapButtonIfPossible;
-(MNCaptionPreviewViewControllerConfiguration *)captionPreviewViewControllerConfiguration;
-(BOOL)isActionButtonCancelable;
-(double)cancelableTimeWindow;
@end

