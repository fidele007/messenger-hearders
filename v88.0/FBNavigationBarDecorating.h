/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UINavigationController, FBNavigationBarSearchHandler, FBJewelController;


@protocol FBNavigationBarDecorating <NSObject>
@property (nonatomic,__weak,readonly) UINavigationController * navigationController; 
@property (nonatomic,readonly) FBNavigationBarSearchHandler * searchHandler; 
@property (nonatomic,retain) FBJewelController * jewelController; 
@required
-(void)updateNavigationBarLayout;
-(void)decorateNavigationItemForViewController:(id)arg1 isRoot:(BOOL)arg2 animated:(BOOL)arg3;
-(id)initWithNavigationController:(id)arg1 session:(id)arg2;
-(void)setupNavigationBar;
-(FBNavigationBarSearchHandler *)searchHandler;
-(FBJewelController *)jewelController;
-(void)setJewelController:(id)arg1;
-(UINavigationController *)navigationController;

@end

