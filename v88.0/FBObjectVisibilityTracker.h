/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBObjectVisibilityTrackerDelegate;
#import <Messenger/Messenger-Structs.h>
@class NSMapTable, NSMutableDictionary;

@interface FBObjectVisibilityTracker : NSObject {

	NSMapTable* _trackedObjectsToObjectTrackingInfos;
	SCD_Struct_FB534 _delegateRespondsTo;
	NSMutableDictionary* _objectsToVisibilityKeysThatShouldNotBeTrackedAgain;
	deque<NSValue *, std::__1::allocator<NSValue *> >* _objectsThatShouldNotBeTrackedAgainInOrder;
	id<FBObjectVisibilityTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBObjectVisibilityTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_newTrackingInfoForObject:(id)arg1 withPreviousTrackingInfo:(id)arg2 forVisibilityKey:(id)arg3 ;
-(unsigned long long)_maximumSizeOfObjectsThatShouldNotBeTrackedAgain;
-(void)startTrackingObject:(id)arg1 ;
-(void)stopTrackingObject:(id)arg1 ;
-(void)updateVisibilityStatesForAllTrackedObjects;
-(void)setDelegate:(id<FBObjectVisibilityTrackerDelegate>)arg1 ;
-(id)init;
-(id<FBObjectVisibilityTrackerDelegate>)delegate;
@end

