/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBExpandableMediaBlockController.h>
#import <Messenger/FBInteractivePhotoNodeControllerDelegate.h>

@class FBInteractivePhotoNodeController, FBPhotoModel, NSArray, NSString;

@interface FBExpandablePhotoBlockController : FBExpandableMediaBlockController <FBInteractivePhotoNodeControllerDelegate> {

	FBInteractivePhotoNodeController* _interactivePhotoController;
	FBPhotoModel* _photoModel;
	NSArray* _imageIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)photoModelForStoryBlock:(id)arg1 ;
+(id)_imageIdentifiersForPhotoModel:(id)arg1 ;
+(CGSize)mediaSizeForBlock:(id)arg1 presentationAttributes:(id)arg2 ;
-(void)didEnterWorkingRange;
-(void)didExitWorkingRange;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didLoseFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didEnterPreloadViewport;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(BOOL)orientationState:(id)arg1 shouldUpdateStatusBarToInterfaceOrientation:(long long)arg2 ;
-(void)interactivePhotoController:(id)arg1 didDisplayInitialPhoto:(id)arg2 ;
-(BOOL)interactivePhotoController:(id)arg1 shouldRecropForInactiveMode:(long long)arg2 ;
-(id)interactiveMediaNodeController;
@end

