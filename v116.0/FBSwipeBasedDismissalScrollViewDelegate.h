/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollViewDelegate.h>

@protocol UIScrollViewDelegate;
@class FBScrollViewSwipeBasedDismissalManager, NSString;

@interface FBSwipeBasedDismissalScrollViewDelegate : NSObject <UIScrollViewDelegate> {

	FBScrollViewSwipeBasedDismissalManager* _dismissalManager;
	id<UIScrollViewDelegate> _originalDelegate;

}

@property (assign,nonatomic,__weak) FBScrollViewSwipeBasedDismissalManager * dismissalManager;              //@synthesize dismissalManager=_dismissalManager - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> originalDelegate;                              //@synthesize originalDelegate=_originalDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBScrollViewSwipeBasedDismissalManager *)dismissalManager;
-(void)setDismissalManager:(FBScrollViewSwipeBasedDismissalManager *)arg1 ;
-(id<UIScrollViewDelegate>)originalDelegate;
-(void)setOriginalDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end

