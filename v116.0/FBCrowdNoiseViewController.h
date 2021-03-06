/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBCrowdNoiseModelDelegate.h>

@protocol FBCrowdNoiseStrategy, FBCrowdNoiseViewControllerDelegate;
@class FBUserSession, FBTimer, NSDate, NSMutableDictionary, FBCrowdNoiseView, NSString;

@interface FBCrowdNoiseViewController : UIViewController <FBCrowdNoiseModelDelegate> {

	FBUserSession* _session;
	id<FBCrowdNoiseStrategy> _strategy;
	FBTimer* _timer;
	NSDate* _previousMutationSubmissionDate;
	NSMutableDictionary* _particleTypeToCount;
	BOOL _isObserving;
	BOOL _isViewOnScreen;
	id<FBCrowdNoiseViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) FBCrowdNoiseView * view; 
@property (assign,nonatomic) BOOL isViewOnScreen;                                                 //@synthesize isViewOnScreen=_isViewOnScreen - In the implementation block
@property (nonatomic,readonly) FBCrowdNoiseView * crowdNoiseView; 
@property (assign,nonatomic) BOOL useEdgeToEdgeDesign; 
@property (assign,nonatomic,__weak) id<FBCrowdNoiseViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightOverlapVideo:(CGSize)arg1 ;
+(double)heightBelowVideo:(CGSize)arg1 ;
-(void)crowdNoiseModel:(id)arg1 totalDeltasDidChange:(id)arg2 ;
-(void)crowdNoiseModel:(id)arg1 loadedNormalDeltas:(id)arg2 ;
-(void)crowdNoiseModel:(id)arg1 loadedNotableDelta:(id)arg2 actor:(id)arg3 ;
-(BOOL)useEdgeToEdgeDesign;
-(void)setFireworksZoneMaxY:(double)arg1 ;
-(void)setUseEdgeToEdgeDesign:(BOOL)arg1 ;
-(void)_flushCurrentReactionsToView;
-(void)startObservingModel;
-(void)stopObservingModel;
-(BOOL)isViewOnScreen;
-(id)initWithSession:(id)arg1 strategy:(id)arg2 ;
-(void)addNotableParticleForIdentifier:(id)arg1 actor:(id)arg2 liveVideoTimestamp:(id)arg3 vodVideoTimestamp:(id)arg4 ;
-(FBCrowdNoiseView *)crowdNoiseView;
-(void)setIsViewOnScreen:(BOOL)arg1 ;
-(void)setDelegate:(id<FBCrowdNoiseViewControllerDelegate>)arg1 ;
-(id<FBCrowdNoiseViewControllerDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTime:(double)arg1 ;
@end

