/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBScrolling <NSObject>
@optional
-(id)scrollableHeaderView;
-(BOOL)isScrolledToTop;
-(void)setScrollableHeaderViewIsManaged:(BOOL)arg1;
-(double)scrollableHeaderViewHeight;
-(BOOL)allowPartiallyVisibleHeaderWhenScrollDown;
-(BOOL)shouldAnimateScrollViewOffsetChangeWhenHeaderFrameChanges;
-(void)scrollToVerticalLocation:(double)arg1 animated:(BOOL)arg2;
-(void)scrollToTopAnimated:(BOOL)arg1;
-(id)mainScrollView;

@end
