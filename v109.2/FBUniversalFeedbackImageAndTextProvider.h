/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:45 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUniversalFeedbackImageAndTextProvider <NSObject>
@required
-(long long)countOfFeedbackLevels;
-(id)localizedRatingQuestion;
-(id)accessibilityLabelForFeedbackButtonWithFeedbackLevel:(long long)arg1;
-(id)localizedFeedbackQuestionForFeedbackLevel:(long long)arg1;
-(id)localizedFeedbackPlaceholderText;
-(id)feedbackTextfieldAttributes;
-(id)localizedSubmitFeedbackButtonTitle;
-(id)localizedFeedbackThankyouText;
-(id)defaultButtonImageForFeedbackLevel:(long long)arg1;
-(id)pressedButtonImageForFeedbackLevel:(long long)arg1;
-(CGSize*)feedbackButtonSize;
-(BOOL)isFollowUpQuestionNeeded;
-(UIEdgeInsets*)viewEdgeInsets;
-(double)gapBetweenButtons;

@end

