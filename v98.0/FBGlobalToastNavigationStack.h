/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGlobalToastPresenter, NSMutableArray;

@interface FBGlobalToastNavigationStack : NSObject {

	FBGlobalToastPresenter* _globalToastPresenter;
	NSMutableArray* _viewControllerStack;

}
-(id)initWithGlobalToastPresenter:(id)arg1 ;
-(void)popViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setActiveToastPresentersAnimated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)viewControllers;
@end
