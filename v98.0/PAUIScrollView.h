/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBExtensibleUIScrollView.h>

@interface PAUIScrollView : FBExtensibleUIScrollView {

	CGPoint _lastDragVelocity;
	double _lastTouchTimestamp;
	BOOL _didBounceOffHorizontalBounds;
	BOOL _didBounceOffVerticalBounds;

}
-(void)willEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didScroll;
-(CGPoint)currentVelocity;
@end

