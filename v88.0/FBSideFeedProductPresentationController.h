/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class FBStoreLandscapeProductViewController, UIViewController, NSString;

@interface FBSideFeedProductPresentationController : NSObject <SKStoreProductViewControllerDelegate> {

	FBStoreLandscapeProductViewController* _productViewController;
	UIViewController* _productPresentingViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_prepareProductViewControllerForAppID:(id)arg1 fallbackURL:(id)arg2 ;
-(void)_handleLoadProductForAppID:(id)arg1 fallbackURL:(id)arg2 result:(BOOL)arg3 error:(id)arg4 ;
-(id)initWithProductPresentingViewController:(id)arg1 ;
-(void)showProductViewControllerFromView:(id)arg1 forAppID:(id)arg2 fallbackURL:(id)arg3 ;
-(void)dealloc;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

