/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>

@interface FBDirectionalPanGestureRecognizer : UIPanGestureRecognizer {

	unsigned long long _panAxis;
	unsigned long long _allowedDirections;
	double _maximumAllowableOpposingTranslation;
	long long _activePanDirection;

}

@property (assign,nonatomic) unsigned long long panAxis;                                                 //@synthesize panAxis=_panAxis - In the implementation block
@property (assign,nonatomic) unsigned long long allowedDirections;                                       //@synthesize allowedDirections=_allowedDirections - In the implementation block
@property (nonatomic,readonly) long long activePanDirection;                                             //@synthesize activePanDirection=_activePanDirection - In the implementation block
@property (assign,nonatomic) double maximumAllowableOpposingTranslation;                                 //@synthesize maximumAllowableOpposingTranslation=_maximumAllowableOpposingTranslation - In the implementation block
@property (assign,nonatomic,__weak) id<FBDirectionalPanGestureRecognizerDelegate> delegate; 
-(void)setAllowedDirections:(unsigned long long)arg1 ;
-(void)setPanAxis:(unsigned long long)arg1 ;
-(void)setMaximumAllowableOpposingTranslation:(double)arg1 ;
-(long long)activePanDirection;
-(double)maximumAllowableOpposingTranslation;
-(unsigned long long)panAxis;
-(long long)directionForTranslation:(CGPoint)arg1 ;
-(unsigned long long)_axisEligibleForTranslation:(CGPoint)arg1 ;
-(long long)_allowedVerticalDirectionForTranslation:(double)arg1 ;
-(long long)_allowedHorizontalDirectionForTranslation:(double)arg1 ;
-(long long)_allowedDirectionFromTranslation:(CGPoint)arg1 ;
-(double)_maxOpposingTranslationForDirection:(long long)arg1 ;
-(unsigned long long)_dominantAxisOfTranslation:(CGPoint)arg1 ;
-(unsigned long long)allowedDirections;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setState:(long long)arg1 ;
@end

