/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPhotoSwipingViewDelegate <NSObject>
@required
-(unsigned long long)numberOfPagesInPhotoSwipingView:(id)arg1;
-(void)photoSwipingView:(id)arg1 photoAtIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)photoSwipingView:(id)arg1 didSwipeToIndex:(unsigned long long)arg2 automatically:(BOOL)arg3;
-(unsigned long long)photoSwipingView:(id)arg1 indexForPhoto:(id)arg2;
-(BOOL)shouldShowInstructionalNUXForSwipingView:(id)arg1;
-(BOOL)shouldShowReminderNUXForSwipingView:(id)arg1;
-(void)didEndShowingInstructionalNuxForPhotoSwipingView:(id)arg1;

@end

