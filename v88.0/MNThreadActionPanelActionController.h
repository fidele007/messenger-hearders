/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadActionPanelActionHandlingDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNThreadActionPerformer, MNThreadActionPanelActionHandling, MNThreadActionPanelActionControllerDelegate;
@class UIView, MNThreadActionPanelActionHandlerFactory, NSString;

@interface MNThreadActionPanelActionController : NSObject <MNThreadActionPanelActionHandlingDelegate, FBClassProvidable> {

	id<MNThreadActionPerformer> _threadActionPerformer;
	UIView* _presentingView;
	MNThreadActionPanelActionHandlerFactory* _handlerFactory;
	id<MNThreadActionPanelActionHandling> _specificEventHandler;
	id<MNThreadActionPanelActionControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadActionPanelActionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithThreadActionHandlerFactory:(id)arg1 ;
-(void)_setUpHandlerFactory;
-(void)_cleanUpSpecificEventHandler;
-(void)configureWithThreadActionPerformer:(id)arg1 presentingView:(id)arg2 ;
-(void)actionHandler:(id)arg1 didCancelActionForThreadWithThreadKey:(id)arg2 ;
-(void)actionHandler:(id)arg1 didCompleteActionForThreadWithThreadKey:(id)arg2 ;
-(void)handleAction:(unsigned long long)arg1 fromSourceView:(id)arg2 threadKey:(id)arg3 isMuted:(BOOL)arg4 participantBlockAction:(id)arg5 updateCreator:(id)arg6 ;
-(void)forceDismissActionSheets;
-(void)setDelegate:(id<MNThreadActionPanelActionControllerDelegate>)arg1 ;
-(id<MNThreadActionPanelActionControllerDelegate>)delegate;
@end

