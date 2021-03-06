/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Messenger/FBWebRTCSurveyFeedbackViewControllerDelegate.h>
#import <Messenger/FBWebRTCSurveyOptionsViewControllerDelegate.h>

@protocol FBWebRTCSurveyViewControllerDelegate;
@class FBWebRTCCallSurvey, NSString;

@interface FBWebRTCSurveyViewController : UITableViewController <FBWebRTCSurveyFeedbackViewControllerDelegate, FBWebRTCSurveyOptionsViewControllerDelegate> {

	id<FBWebRTCSurveyViewControllerDelegate> _delegate;
	FBWebRTCCallSurvey* _survey;

}

@property (nonatomic,retain) FBWebRTCCallSurvey * survey;                                           //@synthesize survey=_survey - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCSurveyViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBWebRTCCallSurvey *)survey;
-(void)didPressSend;
-(id)_getSurveyOptionAtIndexPath:(id)arg1 ;
-(void)surveyOptionsViewController:(id)arg1 didRequestCloseAnimated:(BOOL)arg2 ;
-(id)initWithSurvey:(id)arg1 ;
-(void)setSurvey:(FBWebRTCCallSurvey *)arg1 ;
-(void)didPressCancel;
-(unsigned long long)_additionalFeedbackRowNumber;
-(void)_openAdditionalFeedbackVC;
-(void)surveyFeedbackViewController:(id)arg1 didRequestCloseAnimated:(BOOL)arg2 ;
-(void)setDelegate:(id<FBWebRTCSurveyViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBWebRTCSurveyViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

