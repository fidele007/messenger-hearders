/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBJewelController;


@protocol FBNavigationController_DEPRECATED <NSObject>
@property (nonatomic,retain) FBJewelController * jewelController; 
@property (assign,nonatomic,__weak) id<FBNavigationControllerDelegate> delegate; 
@required
+(id)navigationControllerWithRootViewController:(id)arg1;
+(id)navigationControllerWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2;
+(id)navigationControllerWithSession:(id)arg1 rootViewController:(id)arg2 movableNavigationBarEnabled:(BOOL)arg3 movableNavigationBarMode:(unsigned long long)arg4;
+(id)navigationControllerWithSession:(id)arg1 rootViewController:(id)arg2 navigationBarClass:(Class)arg3 movableNavigationBarEnabled:(BOOL)arg4 movableNavigationBarMode:(unsigned long long)arg5;
+(id)navigationControllerWithSession:(id)arg1 rootViewController:(id)arg2 externalNavigationBarClass:(Class)arg3 movableNavigationBarEnabled:(BOOL)arg4 movableNavigationBarMode:(unsigned long long)arg5;
+(id)navigationControllerWithSession:(id)arg1 navigationBarClass:(Class)arg2 movableNavigationBarEnabled:(BOOL)arg3 movableNavigationBarMode:(unsigned long long)arg4;
-(BOOL)hasModalViewController;
-(FBJewelController *)jewelController;
-(void)setJewelController:(id)arg1;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 tearDownCurrentViewControllers:(BOOL)arg3;
-(void)setDelegate:(id)arg1;
-(id<FBNavigationControllerDelegate>)delegate;

@end
