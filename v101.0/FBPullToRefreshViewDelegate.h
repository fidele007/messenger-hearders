/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPullToRefreshViewDelegate <NSObject>
@optional
-(void)pullToRefreshViewDidStartAnimatingLoadingState:(id)arg1;
-(void)pullToRefreshView:(id)arg1 didChangeVisibility:(BOOL)arg2 userInitiated:(BOOL)arg3;
-(void)pullToRefreshViewDidNotAnimateLoadingState:(id)arg1;

@required
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1;

@end
