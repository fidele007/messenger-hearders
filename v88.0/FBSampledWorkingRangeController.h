/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWorkingRangeSnapshot, FBSampledWorkingRangeControllerDelegate;
#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, NSString;

@interface FBSampledWorkingRangeController : NSObject {

	id<FBWorkingRangeSnapshot> _previousSnapshot;
	NSMutableDictionary* _itemViewStateTransitions;
	/*function pointer*/void* _transitionFunction;
	NSString* _identifier;
	id<FBSampledWorkingRangeControllerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<FBSampledWorkingRangeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithTransitionFunction:(/*function pointer*/void*)arg1 identifier:(id)arg2 ;
-(void)sampleSnapshot:(id)arg1 ;
-(void)_processUntrackedItemViewStates:(id)arg1 visibleBounds:(CGRect)arg2 timestamp:(double)arg3 snapshot:(id)arg4 ;
-(void)setDelegate:(id<FBSampledWorkingRangeControllerDelegate>)arg1 ;
-(id<FBSampledWorkingRangeControllerDelegate>)delegate;
-(NSString *)identifier;
@end

