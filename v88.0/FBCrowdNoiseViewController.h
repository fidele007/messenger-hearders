/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBCrowdNoiseModelDelegate.h>

@protocol FBCrowdNoiseStrategy;
@class FBUserSession, FBTimer, NSDate, NSMutableDictionary, FBCrowdNoiseView, NSString;

@interface FBCrowdNoiseViewController : UIViewController <FBCrowdNoiseModelDelegate> {

	FBUserSession* _session;
	id<FBCrowdNoiseStrategy> _strategy;
	FBTimer* _timer;
	NSDate* _previousMutationSubmissionDate;
	NSMutableDictionary* _particleTypeToCount;

}

@property (nonatomic,retain) FBCrowdNoiseView * view; 
@property (nonatomic,readonly) FBCrowdNoiseView * crowdNoiseView; 
@property (assign,nonatomic) BOOL useEdgeToEdgeDesign; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightOverlapVideo:(CGSize)arg1 ;
+(double)heightBelowVideo:(CGSize)arg1 ;
-(void)crowdNoiseModel:(id)arg1 loadedNormalDeltas:(id)arg2 ;
-(id)initWithSession:(id)arg1 strategy:(id)arg2 ;
-(void)setFireworksZoneMaxY:(double)arg1 ;
-(void)_flushCurrentReactionsToView;
-(void)setUseEdgeToEdgeDesign:(BOOL)arg1 ;
-(BOOL)useEdgeToEdgeDesign;
-(void)crowdNoiseModel:(id)arg1 loadedNotableDelta:(id)arg2 actor:(id)arg3 ;
-(void)addNotableParticleForIdentifier:(id)arg1 actor:(id)arg2 liveVideoTimestamp:(id)arg3 vodVideoTimestamp:(id)arg4 ;
-(FBCrowdNoiseView *)crowdNoiseView;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTime:(double)arg1 ;
@end

