/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPopoverOverlayNavigationCoordinatorDelegate;
@class NSMutableArray;

@interface FBPopoverOverlayNavigationCoordinator : NSObject {

	id<FBPopoverOverlayNavigationCoordinatorDelegate> _delegate;
	NSMutableArray* _allPopoverOverlays;

}

@property (nonatomic,readonly) NSMutableArray * allPopoverOverlays;                                          //@synthesize allPopoverOverlays=_allPopoverOverlays - In the implementation block
@property (assign,nonatomic,__weak) id<FBPopoverOverlayNavigationCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)presentPopoverOverlay:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPopoverOverlay:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPopoverOverlayContainingContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismissAllPopoverOverlays;
-(NSMutableArray *)allPopoverOverlays;
-(void)setDelegate:(id<FBPopoverOverlayNavigationCoordinatorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBPopoverOverlayNavigationCoordinatorDelegate>)delegate;
@end

