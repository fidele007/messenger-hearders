/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Messenger/FBCoupledDirectionalScrollViewInternal.h>
#import <Messenger/FBCoupledDirectionalScrollView.h>

@class FBCoupledDirectionalScrollHandler, NSString, UIPanGestureRecognizer;

@interface FBCoupledDirectionalScrollView : UIScrollView <FBCoupledDirectionalScrollViewInternal, FBCoupledDirectionalScrollView> {

	int _direction;
	FBCoupledDirectionalScrollHandler* _scrollHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int direction;                                                    //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (nonatomic,readonly) FBCoupledDirectionalScrollHandler * scrollHandler;              //@synthesize scrollHandler=_scrollHandler - In the implementation block
-(FBCoupledDirectionalScrollHandler *)scrollHandler;
-(void)decoupleFromView:(id)arg1 ;
-(void)coupleWithView:(id)arg1 ;
-(void)decoupleFromAllViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setDirection:(int)arg1 ;
-(int)direction;
@end

