/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMStickerStoreViewControllerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNModalPresentation;
@class FBUserSession, NSString;

@interface MNStickerStorePresenter : NSObject <FBMStickerStoreViewControllerDelegate, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	id<MNModalPresentation> _navigationCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)presentStickerStoreWithStickerPackDescriptor:(id)arg1 ;
-(void)presentStickerStore;
-(void)_presentStickerStoreViewController:(id)arg1 ;
-(void)didSelectDismissStickerStoreViewController:(id)arg1 ;
@end

