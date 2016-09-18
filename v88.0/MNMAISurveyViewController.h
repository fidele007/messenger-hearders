/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNMAISentimentViewDelegate.h>
#import <Messenger/MNMAIFeedbackViewDelegate.h>

@protocol MNMAISurveyViewControllerDelegate;
@class UIView, NSString, FBMSyncedThreadKey, MNMAIUserActionSender, MNMAISurveyCopyExperimentContext, MNMAISentimentView, MNMAISurveyCompletedView, MNMAISurveyFeedbackViewController;

@interface MNMAISurveyViewController : UIViewController <MNMAISentimentViewDelegate, MNMAIFeedbackViewDelegate> {

	UIView* _currentView;
	NSString* _intentID;
	FBMSyncedThreadKey* _threadKey;
	MNMAIUserActionSender* _actionSender;
	MNMAISurveyCopyExperimentContext* _surveyCopyContext;
	MNMAISentimentView* _sentimentView;
	MNMAISurveyCompletedView* _surveyCompletedView;
	MNMAISurveyFeedbackViewController* _feedbackViewController;
	unsigned long long _chosenSentiment;
	NSString* _feedback;
	BOOL _isTransitioning;
	id<MNMAISurveyViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMAISurveyViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTitle:(id)arg1 intentID:(id)arg2 threadKey:(id)arg3 mAIActionSender:(id)arg4 userSession:(id)arg5 ;
-(void)_sendSurveyResultsAndDismissWithRequireSuccess:(BOOL)arg1 ;
-(void)_transitionToViewIfPossible:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissSurveyViewAnimated:(BOOL)arg1 ;
-(void)_updateLoadingView:(BOOL)arg1 ;
-(void)_commenceSurveyCompletionFlow;
-(void)_dismissSurveyView;
-(void)_displaySurveyCompletedViewAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_completionMessageForSentiment:(unsigned long long)arg1 ;
-(void)sentimentView:(id)arg1 ratingDidChange:(unsigned long long)arg2 ;
-(void)sentimentViewDidPressNotDone:(id)arg1 ;
-(void)sentimentViewDidPressSubmit:(id)arg1 ;
-(void)sentimentViewDidPressDismiss:(id)arg1 ;
-(void)feedbackViewDidPressSubmit:(id)arg1 ;
-(void)feedbackViewDidPressDismiss:(id)arg1 ;
-(void)setDelegate:(id<MNMAISurveyViewControllerDelegate>)arg1 ;
-(id<MNMAISurveyViewControllerDelegate>)delegate;
-(void)viewDidLoad;
@end

