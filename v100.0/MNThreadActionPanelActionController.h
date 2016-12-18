/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(void)configureWithThreadActionPerformer:(id)arg1 presentingView:(id)arg2 ;
-(void)handleAction:(unsigned long long)arg1 fromSourceView:(id)arg2 threadKey:(id)arg3 isMuted:(BOOL)arg4 participantBlockAction:(id)arg5 reportPageAction:(id)arg6 isRoom:(BOOL)arg7 updateCreator:(id)arg8 customMorePanelTitles:(id)arg9 ;
-(id)initWithThreadActionHandlerFactory:(id)arg1 ;
-(void)_setUpHandlerFactory;
-(void)_cleanUpSpecificEventHandler;
-(void)actionHandler:(id)arg1 didCancelActionForThreadWithThreadKey:(id)arg2 ;
-(void)actionHandler:(id)arg1 didCompleteActionForThreadWithThreadKey:(id)arg2 ;
-(void)forceDismissActionSheets;
-(void)setDelegate:(id<MNThreadActionPanelActionControllerDelegate>)arg1 ;
-(id<MNThreadActionPanelActionControllerDelegate>)delegate;
@end

