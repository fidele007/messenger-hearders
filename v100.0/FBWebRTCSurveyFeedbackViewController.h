/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBWebRTCSurveyFeedbackViewControllerDelegate;
@class FBWebRTCCallSurvey;

@interface FBWebRTCSurveyFeedbackViewController : UIViewController {

	id<FBWebRTCSurveyFeedbackViewControllerDelegate> _delegate;
	FBWebRTCCallSurvey* _survey;

}

@property (nonatomic,retain) FBWebRTCCallSurvey * survey;                                                   //@synthesize survey=_survey - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCSurveyFeedbackViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(FBWebRTCCallSurvey *)survey;
-(void)didPressSend;
-(void)onTextChange;
-(id)initWithSurvey:(id)arg1 ;
-(void)setSurvey:(FBWebRTCCallSurvey *)arg1 ;
-(void)setDelegate:(id<FBWebRTCSurveyFeedbackViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCSurveyFeedbackViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

