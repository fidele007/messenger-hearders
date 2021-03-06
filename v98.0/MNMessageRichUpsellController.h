/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNMessageCellElementController.h>

@class MNMessageRichUpsellControllerInjector, MNMessageRichUpsellView, MNMessageRichUpsellViewModel, NSString;

@interface MNMessageRichUpsellController : NSObject <FBClassInjectable, MNMessageCellElementController> {

	MNMessageRichUpsellControllerInjector* _injector;
	MNMessageRichUpsellView* _view;
	MNMessageRichUpsellViewModel* _viewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)willAppearWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)willUpdateWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(void)didTapInThread:(id)arg1 actionHandler:(id)arg2 ;
-(void)_setViewModel:(id)arg1 ;
-(void)_addMessageToMontage:(id)arg1 threadKey:(id)arg2 ;
-(void)_forwardMessageToMontage:(id)arg1 threadKey:(id)arg2 ;
-(void)_updatePhotoView;
@end

